#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "node.h"

#if INTERFACE
typedef struct {
  int* data;
} Node;
#endif

Node* init_node(int data){
  Node* n = (Node*)malloc(sizeof(Node));
  n->data = data;
  return n;
}

void free_node(Node n){
  free(n.data);
  free(&n);
}
