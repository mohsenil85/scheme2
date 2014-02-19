#include <stdio.h>
#include <stdbool.h>
#define STACK_MAX 256

typedef struct {
  char data[STACK_MAX];
  int size;
} Stack;

void stack_init(Stack *s){
  s->size = 0;
}

char stack_peek(Stack *s){
  if (s->size == 0){
     fprintf(stderr, "Error:  stack empty\n");
     return (-1);
  }
  return s->data[s->size-1];
}

void stack_push(Stack *s, char d){
  if (s->size < STACK_MAX){
    s->data[s->size++] = d;
  } else {
     fprintf(stderr, "Error:  stack full\n");
  }
}

char stack_pop(Stack *s){
  if (s->size == 0){
     fprintf(stderr, "Error:  stack empty\n");
     return (-1);
  }
  else {
    char ret = s->data[s->size-1];
    s->size--;
    return ret;
  }
}

bool stack_is_empty(Stack *s){
  return (s->size == 0);
}

