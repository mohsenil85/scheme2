#include <stdio.h>
#include <string.h>
#include <src/stack.h>

Stack parse_stack;
Stack eval_stack;
char* parse(char* str){
  char copy_of_string[strlen(str)];
  strncpy(copy_of_string, str, strlen(str));

  while (*str++){
    printf("%c", str[0]);

  }
  return str;
}

