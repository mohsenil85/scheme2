#include <stdio.h>
#include <string.h>



char* parse(char* str){
  int i;
  for (i = 0; i < strlen(str); i++){
    printf("%c\n", str[i]);
  }

  return str;
}
