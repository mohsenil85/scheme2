#include <stdio.h>
#include "stack.h"

int main(){
  Stack s;
  stack_init(&s);
  stack_push(&s, 0);
  stack_push_args(&s, 1, 2, 3, 4);

  while(!stack_is_empty(&s)){
  int output = stack_pop(&s);
  printf("output = %d\n", output);
  }
  
  return 0;
}
