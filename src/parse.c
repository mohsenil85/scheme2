#include <stdio.h>
#include <string.h>


char* parse(char* str){
  char copy_of_string[strlen(str)];
  strncpy(copy_of_string, str, strlen(str));

  while (*str++){
    printf("%c\n", str[0]);

  }
  return str;
}

