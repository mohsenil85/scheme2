#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
  char* node_type;
  void* data;
  
  struct Node *next;
} Node;

Node* init_node_int(int*  data){
  Node* n = (Node*)malloc(sizeof(Node));
  strcpy(n->node_type, "INT");
  n->data = &data;
  return n;
}

void free_node(Node n){
  free(n.node_type);
  free(n.data);
  free(&n);
}
