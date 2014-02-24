#ifndef NODE_H
#define NODE_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
  char* node_type;
  void* data;
  
  struct Node *next;
} Node;

Node* init_node_int(int*  data);

void free_node(Node n);

#endif /* NODE_H */
