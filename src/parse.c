#include <stdio.h>
#include <string.h>
#include <src/stack.h>

Stack parse_stack;
Stack eval_stack;

void handle_open_paren(int data){
  stack_push(&parse_stack, data);
  char* output = stack_pop(&parse_stack);
  printf("poped: %c", output);
}
char* parse(char* str){
  char copy_of_string[strlen(str)];
  strncpy(copy_of_string, str, strlen(str));

  for (int i = 0; i < strlen(str); i++){
    printf("%c ", str[i]);
    char* letter = &str[i];
    if (strncmp(letter, "(", 1) == 0){
      handle_open_paren( *letter);
      printf("open paren detected\n");
    }
    if (strncmp(letter, ")", 1) == 0){
      printf("close paren detected\n");
    }
  }

  return str;
}

