#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "node_private.h"

Node * _node_new () {
  Node *n = malloc (sizeof (Node));
  n->data = NULL;
  n->title = NULL;
  return n;
}

void _node_free (Node *n) {
  if (n->data) free (n->data);
  if (n->title) free (n->title);
  free (n);
}

void _node_set_data_int (Node *n, const int *data) {
  n->data = realloc (n->data, sizeof(data) + 1);
  memcpy(n->data, data, sizeof(&data));
}

void _node_set_data_string (Node *n, const char *data) {
  n->data = realloc (n->data, strlen (data) + 1);
  strcpy (n->data, data);
}

void _node_set_type(Node *n, enum TYPE_T t){
  n->node_type = t;
}

enum TYPE_T _node_get_type(Node *n){
  return n->node_type;
}

int _node_get_data_int (Node *n) {
  int i;
  memcpy(&i, n->data, sizeof(int));
  return i;
}

char* _node_get_data_string (Node *n) {
  return(n->data);
}
