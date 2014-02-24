#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "node.h"

#if INTERFACE
typedef struct {
  int data;
} Node;
#endif

Node* init_node(int d){
  Node* n = (Node*)malloc(sizeof(Node));
  n.data = d;
  return n;
}

void free_node(Node n){
  free(n.data);
  free(&n);
}
