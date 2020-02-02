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
int verif_tip(int tipa, int tipb);
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
          | declaratii declaratie 
          | declaratii_fct
          | declaratii declaratii_fct
          ;

declaratie: tip lista_var DOT
          ;

lista_var: VAR {declarare($1);}
         | lista_var COMMA VAR {declarare($3);}
         ;

declaratii_fct: tip VAR OPPR lista_parametri CLPR bloc {declarare_functie($2);}
              | tip VAR OPPR CLPR bloc {declarare_functie($2);}
              ;

lista_parametri: parametru
               | lista_parametri COMMA  parametru
               ;
            
parametru: tip VAR
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
           | lista_instr instructiune DOT
           | if_instr 
           | while_instr
           | for_instr
           ;

if_instr: IF OPPR bool_expr CLPR bloc  
        | IF OPPR bool_expr CLPR bloc ELSE bloc 
        ;
while_instr: WHILE OPPR bool_expr CLPR bloc   
        ;
for_instr: FOR OPPR VAR ASSIGN NUM COMMA bool_expr CLPR bloc {este_declarata($3);}
        ;

bool_expr: OPPR bool_expr CLPR {$$=$2;}
         | instructiune AND instructiune {$$=$1 && $3;}
         | instructiune OR instructiune {$$=$1 || $3;}
         | instructiune GREQ instructiune {$$=$1 >= $3;}
         | instructiune GR instructiune {$$=$1 > $3;}
         | instructiune LESEQ instructiune {$$=$1 <= $3;}
         | instructiune LES instructiune {$$=$1 < $3;}
         | instructiune NOTEQ instructiune {$$=$1 != $3;}
         | instructiune EQ instructiune {$$=$1 == $3;}
         ;
instructiune: VAR ASSIGN instructiune {este_declarata($1);}
            | VAR {este_declarata($1);}
            | NUM 
            | OPPR instructiune CLPR {$$=$2;}
            | instructiune PLUS instructiune //{$$=$1+$3;}
            | instructiune MINUS instructiune //{$$=$1-$3;}
            | instructiune MULT instructiune //{$$=$1*$3;}
            | instructiune DIV instructiune //{$$=$1/$3;}
            | instructiune MOD instructiune //{$$=$1%$3;}
            | EVAL OPPR INT instructiune CLPR {$$=$4;}
            ;

%%

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
  
int verif_tip(int tipa, int tipb){
    if(tipa==tipb)
        return 1;
    else return 0;
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
int yyerror (char* s){
    printf("eroare: %s la linia %d\n",s,yylineno);
}
int main(int argc, char** argv)
{
    yyin=fopen(argv[1],"r");
    yyparse();
}