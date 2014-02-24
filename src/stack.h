#ifndef STACK_H
#define STACK_H
#include <stdio.h>
#include <stdbool.h>
#include <stdarg.h>
#define STACK_MAX 256

typedef struct {
  int data[STACK_MAX];
  int size;
} Stack;

void stack_init(Stack *s);

int stack_peek(Stack *s);

void stack_push(Stack *s, int d);

int stack_pop(Stack *s);

bool stack_is_empty(Stack *s);

void stack_push_args(Stack *s, int arg1, ...);

#endif /* STACK_H */
