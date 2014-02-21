#include <stdio.h>
#include <stdbool.h>
#include <stdarg.h>
#define STACK_MAX 256

typedef struct {
  char data[STACK_MAX];
  int size;
} Stack;

void stack_init(Stack *s){
  s->size = 0;
}

int stack_peek(Stack *s){
  if (s->size == 0){
     fprintf(stderr, "Error:  stack empty\n");
     return (-1);
  }
  return s->data[s->size-1];
}

void stack_push(Stack *s, int d){
  if (s->size < STACK_MAX){
    s->data[s->size++] = d;
  } else {
     fprintf(stderr, "Error:  stack full\n");
  }
}

int stack_pop(Stack *s){
  if (s->size == 0){
     fprintf(stderr, "Error:  stack empty\n");
     return (-1);
  }
  else {
    int ret = s->data[s->size-1];
    s->size--;
    return ret;
  }
}

bool stack_is_empty(Stack *s){
  return (s->size == 0);
}


void stack_push_args(Stack *s, int arg1, ...) {
  va_list ap;
  int i;

  va_start(ap, arg1); 
  for (i = arg1; i >= 0; i = va_arg(ap, int)){
    stack_push(s, i);
    printf("pushed : %d \n", i);
  }
  va_end(ap);
}
