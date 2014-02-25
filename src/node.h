#ifndef NODE_PRIVATE_H
#define NODE_PRIVATE_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
union node_data{
  int i;
  char *str;
};
enum TYPE_T {
  NUMBER,
  WORD
} TYPE_T;
typedef struct {
  void *data;
  char *title;
  enum TYPE_T node_type;
} Node;

void free_node(Node *n) ;

void _node_set_data_int(Node *n, const int *data) ;

void _node_set_data_string(Node *n, const char *data) ;

void _node_set_type(Node *n, enum TYPE_T t) ;

enum TYPE_T _node_get_type(Node *n) ; 

int _node_get_data_int(Node *n) ;

char *_node_get_data_string(Node *n) ;

Node *new_node(enum TYPE_T type, void *data) ;

#endif /* NODE_PRIVATE_H */
