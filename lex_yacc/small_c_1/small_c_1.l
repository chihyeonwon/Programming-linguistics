%{
#include <stdio.h>
%}

alpha [a-zA-Z]
digit [0-9]

%%
"void"                      printf("void, KEYWORD\n");
"int"                       printf("int, KEYWORD\n");
"="                         printf("=, ASSIGN_OP\n");
"("                         printf("(, LEFT_PAREN\n");
")"                         printf("), RIGHT_PAREN\n");
"{"                         printf("{, LEFT_CURLY\n");
"}"                         printf("}, RIGHT_CURLY\n");
[-]?{digit}+                printf("%s, INT_NUM\n", yytext);
[-]?{digit}+\.{digit}{1,6}  printf("%s, FLOAT_NUM\n", yytext);
["].*["]                    printf("%s, STRING\n", yytext);
{alpha}({alpha}|{digit})*   printf("%s, ID\n", yytext);
[ \t\n]*                    ;
.                           ;
%%

int yywrap() {
    return 1;
}
