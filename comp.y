%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
extern int yyerror(char *s);
void declarare(char* a);
void este_declarata(char* a);
void declarare_functie(char* a);
void este_declarata_fct(char* a);
void declarare_tip(int tip);
int verif_tip(char* a, int b);
void declarare_tip_fct(int tip);
int return_tip(char* nume);

struct {
    char* nume;
    int tip;
}variabile[100],functii[100];
int nrvar = 0,nrtip,nrfct = 0;
char* aux;

%}
%union {
    char* ch;
    int i;
}

%token ASSIGN EVAL 
%token OPPR CLPR COMMA DOT OPBR CLBR
%token INT FLOAT CHAR STRING BOOL VOID
%token IF FOR WHILE ELSE 
%token OR AND GREQ LESEQ EQ NOTEQ GR LES
%token NUM VAR
%token PLUS MINUS MULT DIV MOD

%type <ch> VAR lista_var 
%type <i> IF FOR WHILE CHAR STRING BOOL VOID tip NUM bool_expr instructiune

%start progr

%%
progr: declaratii bloc {printf("Program corect sintactic!\n");}
     ;

declaratii: declaratie 
          | declaratie declaratii_fct
          | declaratie declaratie 
          | declaratii_fct
          | declaratii declaratii_fct
          ;

declaratie: tip lista_var DOT {declarare_tip($1);}
          | VAR OPPR tip CLPR lista_var DOT {declarare_tip($3);}
          ;

lista_var: VAR {declarare($1);}
         | lista_var COMMA VAR {declarare($3);}
         | VAR MULT NUM MULT {declarare($1);}
         | lista_var COMMA VAR MULT NUM MULT {declarare($3);}
         ;

declaratii_fct: tip VAR OPPR lista_parametri CLPR bloc {declarare_functie($2); declarare_tip_fct($1); }
              | tip VAR OPPR CLPR bloc {declarare_functie($2); declarare_tip_fct($1);}
              ;

lista_parametri: parametru 
               | lista_parametri COMMA  parametru
               ;
            
parametru: tip VAR 
         | declaratii_fct
         ;

tip: INT {$$=1; nrtip=1;}
   | FLOAT {$$=2; nrtip=2;}
   | BOOL {$$=5; nrtip=5;}
   | CHAR {$$=3; nrtip=3;}
   | STRING {$$=4; nrtip=4;}
   | VOID {$$=0; nrtip=0;}
   ;

bloc: OPBR lista_instr CLBR
    ;

lista_instr: instructiune DOT 
           | declaratii 
           | lista_instr instructiune DOT
           | lista_instr if_instr 
           | lista_instr while_instr
           | lista_instr for_instr
           | if_instr
           | while_instr
           | for_instr
           | lista_instr VAR OPPR lista_var CLPR DOT {este_declarata_fct($2);}
           | VAR OPPR lista_var CLPR DOT {este_declarata_fct($1);}
           | lista_instr VAR OPPR CLPR DOT {este_declarata_fct($2);}
           | VAR OPPR CLPR DOT {este_declarata_fct($1);}
           ;

if_instr: IF OPPR bool_expr CLPR bloc  
        | IF OPPR bool_expr CLPR bloc ELSE bloc 
        ;
while_instr: WHILE OPPR bool_expr CLPR bloc   
        ;
for_instr: FOR OPPR VAR ASSIGN NUM COMMA bool_expr CLPR bloc {este_declarata($3);}
        ;

bool_expr: OPPR instructiune CLPR {$$=$2;}
         | instructiune AND instructiune {$$=2;}
         | instructiune OR instructiune {$$=2;}
         | instructiune GREQ instructiune {$$=2;}
         | instructiune GR instructiune {$$=2;}
         | instructiune LESEQ instructiune {$$=2;}
         | instructiune LES instructiune {$$=2;}
         | instructiune NOTEQ instructiune {$$=2;}
         | instructiune EQ instructiune {$$=2;}
         ;
instructiune: VAR ASSIGN instructiune {este_declarata($1); verif_tip($1,$3);}
            | VAR {este_declarata($1); $$=return_tip($1); }
            | NUM {$$=1;}
            | OPPR instructiune CLPR {$$=$2;}
            | instructiune PLUS instructiune {$$=$1+$3;}
            | instructiune MINUS instructiune {$$=$1-$3;}
            | instructiune MULT instructiune {$$=$1*$3;}
            | instructiune DIV instructiune {$$=$1/$3;}
            | instructiune MOD instructiune {$$=$1%$3;}
            | EVAL OPPR instructiune CLPR {if($3 != 1) printf("Functia eval nu are parametru de tip int\n");}
            ;

%%

int return_tip(char* nume)
{ 
    for(int i=0;i<nrvar;i++)
        {
            if(strcmp(variabile[i].nume,nume)==0)
                return variabile[i].tip;
        }

}

void declarare(char* a){
    int ok=0;
    char buffer[100];
    for(int i=0; i<nrvar;i++){
        if(!strcmp(variabile[i].nume, a)){
            ok=1;
            break;
        }
    }
    if(ok==0){
        variabile[nrvar++].nume=strdup(a);
        //printf("Variabila %s a fost declarata!\n",a);
    }
    else 
    {
        sprintf(buffer,"Variabila \"%s\" a mai fost declarata",a);
        yyerror(buffer);

    }
}

void declarare_functie(char* a){

    int ok=0;
    char buffer[100];
    for(int i=0; i<nrfct;i++){
        if(!strcmp(functii[i].nume, a)){
            ok=1;
            break;
        }
    }
    if(ok==0){
        functii[nrfct++].nume=strdup(a);
        //printf("Variabila %s a fost declarata!\n",a);
    }
    else 
    {
        sprintf(buffer,"Functia \"%s\" a mai fost declarata",a);
        yyerror(buffer);
    }
}
  
int verif_tip(char* a, int b){
int tipa;
for(int i=0; i<nrvar;i++)
        {
            if(strcmp(variabile[i].nume,a)==0)
                {tipa=variabile[i].tip;
                 break;
                }

        }
        if(tipa!=b)
    {
        printf("eroare: Variabilele nu sunt de acelasi tip\n");
        return 0;
    }
}
void este_declarata(char* a){
    int ok=0, tipDeReturnat;
    char buffer[100];
    for(int i=0; i<nrvar;i++){
        if(!strcmp(variabile[i].nume, a)){
            ok=1;
            break;
        }
    }
    if(ok==0){
        printf("Variabila \"%s\" nu a fost declarata!\n",a);
    }
}
void este_declarata_fct(char* a){
    int ok=0;
    char buffer[100];
    for(int i=0; i<nrfct;i++){
        if(!strcmp(functii[i].nume, a)){
            ok=1;
            break;
        }
    }
    if(ok==0){
        printf("Functia \"%s\" nu a fost declarata!\n",a);
    }
}

void declarare_tip(int tip)
{
    int i;
    for(i=0;i<nrvar;i++)
        variabile[i].tip=tip;
}

void declarare_tip_fct(int tip)
{
    int i;
    for(i=0;i<nrfct;i++)
        functii[i].tip=tip;
}
int yyerror (char* s){
    printf("eroare: %s la linia %d\n",s,yylineno);
}
int main(int argc, char** argv)
{
    yyin=fopen(argv[1],"r");
    yyparse();
    FILE* fisier = fopen("tabel_simb.txt", "w");
    fprintf(fisier, "Variabilele noastre sunt: \n");
    for(int contor = 0; contor<nrvar; contor++){
        fprintf(fisier, "Variabila %s, de tipul", variabile[contor].nume); 
        if(variabile[contor].tip==1)
            fprintf(fisier, " INT\n");
        if(variabile[contor].tip==2)
            fprintf(fisier, " FLOAT\n");
        if(variabile[contor].tip==3)
            fprintf(fisier, " CHAR\n");
        if(variabile[contor].tip==4)
            fprintf(fisier, " STRING\n");
        if(variabile[contor].tip==5)
            fprintf(fisier, " VOID\n");
    }
    fprintf(fisier, "Functiile noastre sunt: \n");
    for(int contor = 0; contor<nrfct; contor++){
        fprintf(fisier, "Functia %s, de tipul", functii[contor].nume); 
        if(functii[contor].tip==1)
            fprintf(fisier, " INT\n");
        if(functii[contor].tip==2)
            fprintf(fisier, " FLOAT\n");
        if(functii[contor].tip==3)
            fprintf(fisier, " CHAR\n");
        if(functii[contor].tip==4)
            fprintf(fisier, " STRING\n");
        if(functii[contor].tip==5)
            fprintf(fisier, " VOID\n");
    }
}