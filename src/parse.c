#include <stdio.h>
#include <string.h>

typedef struct node{
  char * data[64];
} Node;


char* parse(char* str){
  int i;
  for (i = 0; i < strlen(str); i++){
    if (strcmp(str[i], "(")== 0){
      printf("open paren detected");
    } else if (str[i] == ")"){
      printf("close paren detected");
    } else {
      printf("%c\n", str[i]);
    }
  }

  return str;
}
