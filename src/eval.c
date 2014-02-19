#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "stack.h"

char eval(Stack s){
  //printf("eval hit!\n");
  if  (!stack_is_empty(&s)){
    char fun = stack_pop(&s);
    printf("fun is %c\n", fun);
    char fun1 = stack_pop(&s);
    printf("fun is %c\n", fun1);
    char fun2 = stack_pop(&s);
    printf("fun is %c\n", fun2);
    
  if  (!stack_is_empty(&s)){
    char fun3 = stack_pop(&s);
    char fun4 = stack_pop(&s);
    char fun5 = stack_pop(&s);
    char fun6 = stack_pop(&s);
    char fun7 = stack_pop(&s);
    printf("should be an error %c\n", fun3);
    }
 //   int args[5];
  //  int i = 0;
   // while (!stack_is_empty(&s)){
    //  char output = (stack_pop(&s));
     // printf("output = %c\n", output);
//      args[i] = stack_pop(&s);
      //args[i] = atoi(*stack_pop(&s));
      //i++;
    //}
    //printf("fun is %c\n", fun);
    /*
    switch(fun){
      case '+':
        printf("plus sign\n");
        break;
      case '*':
        printf("times sign\n");
        break;
      default:
        printf("not sure...\n");
    }
    */
  }
  //while (!stack_is_empty(&s)){
  //char output = stack_pop(&s);

  // printf(" evalualting...: %c\n", output);
  //}
  return '*';
}

