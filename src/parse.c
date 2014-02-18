#include <stdio.h>
#include <string.h>

typedef struct node{
  char * data[64];
} Node;


char* parse(char* str){
  int i;
  for (i = 0; i < strlen(str); i++){
    //printf("by index: %c\n", str[i]);
    char letter = str[i];
    //printf("letter = %c\n", letter);
    // printf("letter as digit = %d\n", letter);
    switch(letter){
      case 40:
        printf("open paren detected\n");
        break;
      default:
        printf("this was hit\n");
        break;

    }
    /*
       if (strncmp(letter, "(") == 0){
       printf("open paren detected\n");
       } else if (strcmp(letter, ")")== 0){
       printf("close paren detected\n");
       } else {
       printf("%c\n", str[i]);
       }
       */
  }

  return str;
}
