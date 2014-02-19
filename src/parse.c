#include <stdio.h>
#include <string.h>
#include <src/stack.h>
#include <src/eval.h>

Stack parse_stack;
Stack eval_stack;

char* parse(char* str){
  int i = 0;
  while (i < strlen(str)){
    char* letter = &str[i];
    if (strncmp(letter, ")", 1) != 0){
      stack_push(&parse_stack, *letter);
    }
    if (strncmp(letter, ")", 1) == 0){
    //  while (stack_peek(&parse_stack) != '(') {
        char output = stack_pop(&parse_stack);
        if (output != ' '){
          stack_push(&eval_stack, output);
        }
      }
      if (stack_pop(&parse_stack) == '('){
 //       while (!stack_is_empty(&eval_stack)){
//          char output = stack_pop(&eval_stack);
 //         printf(" evalualting...: %c\n", output);
  //        stack_push(&parse_stack, eval(eval_stack));
  
        eval(eval_stack);
//        }
     // }
    }
    i++;
  }
  return str;
}

