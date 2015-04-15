#include <stdio.h>
#include <stdlib.h>
#include "scan.h"

int main() {
  Token token;
  int i;
  while (1) {
    token = scan();
    switch (token.type) {
      case SEMICOLON:  printf(";");  break;
      case LPARAN:  printf("(");  break;
      case RPARAN:  printf(")");  break;
      case LBRACE:  printf("{");  break;
      case RBRACE:  printf("}");  break;
      case LT:  printf("<");  break;
      case GT:  printf(">");  break;
      case EQ:  printf("==");  break;
      case ASSIGN:  printf("=");  break;
      case PLUS:  printf("+");  break;
      case MINUS:  printf("-");  break;
      case MULT:  printf("*");  break;
      case DIVIDE:  printf("/");  break;
      case WHILE:  printf("while");  break;
      case IF:  printf("if");  break;
      case ELSE:  printf("else");  break;
      case INT:  printf("int");  break;
      case FLOAT:  printf("float");  break;
      case ID:  printf("id");  break;
      case ICONST:  printf("%s", token.value);  break;
      case FCONST:  printf("%s", token.value);  break;
      case ERROR:  printf("ERROR");  break;
      case END:  break;
      default:  continue;
    }
    if (token.type==END) break;
    if ((token.len) > 0) {
      printf("::");
      for (i=0; i<token.len; ++i)
        printf("%c", *(token.value+i));
    }
    printf("\n");
  }

  return(1);
}
