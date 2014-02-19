#ifndef STACK_H
#define STACK_H
#include <stdio.h>
#include <stdbool.h>
#define STACK_MAX 256

typedef struct {
  char data[STACK_MAX];
  int size;
} Stack;

void stack_init(Stack *s);

char stack_peek(Stack *s);

void stack_push(Stack *s, char d);

char stack_pop(Stack *s);

bool stack_is_empty(Stack *s);

#endif /* STACK_H */
