#include <stdio.h>
#include "stack.h"

void eval(Stack s){
  //printf("eval hit!\n");
  while (!stack_is_empty(&s)){
    char output = stack_pop(&s);
    printf(" evalualting...: %c\n", output);
  }
}
