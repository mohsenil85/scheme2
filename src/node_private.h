#ifndef NODE_PRIVATE_H
#define NODE_PRIVATE_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
enum TYPE_T {
  NUMBER,
  WORD
} TYPE_T;
typedef struct {
  void *data;
  char *title;
  enum TYPE_T node_type;
} Node;

Node *_node_new();

void _node_free(Node *n);

void _node_set_data_int(Node *n, const int *data);

void _node_set_data_string(Node *n, const char *data);

void _node_set_type(Node *n, enum TYPE_T t);

enum TYPE_T _node_get_type(Node *n);

int _node_get_data_int(Node *n);

char *_node_get_data_string(Node *n);
#endif /* NODE_PRIVATE_H */
