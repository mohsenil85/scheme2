#include <stdio.h>
#include <string.h>

typedef struct node{
  char * data[64];
} Node;


char* parse(char* str){
  int i;
  for (i = 0; i < strlen(str); i++){
    char* return_str[64];
    char letter = str[i];
    switch(letter){
      case 40:
        printf("open paren detected\n");
        break;
      case 41:
        printf("close paren detected\n");
        break;
      case 32:
        printf("space detected\n");
        break;
      default:
        strcat(return_str, letter);
        //printf("letter = %c\n", letter);
        //printf("letter as digit = %d\n", letter);
        break;

    }
  return return_str;
  }

  return str;
}
