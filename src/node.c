#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {
  void *data;
  char *title;
} Node;

Node * node_new () {
  Node *n = malloc (sizeof (Node));
  n->data = NULL;
  n->title = NULL;
  return n;
}

void node_free (Node *n) {
  if (n->data) free (n->data);
  if (n->title) free (n->title);
  free (n);
}

void _node_set_data_int (Node *n, const int *data) {
  n->data = realloc (n->data, sizeof(data) + 1);
  memcpy(n->data, data, sizeof(&data));
}

void _node_set_data_char (Node *n, const char *data) {
  n->data = realloc (n->data, strlen (data) + 1);
  strcpy (n->data, data);
}

int _node_get_data_int (Node *n) {
  int i;
  memcpy(&i, n->data, sizeof(int));
  return i;
}

char _node_get_data_char (Node *n) {
  char c;
  memcpy(&c, n->data, sizeof(char));
  return c;
}



int test_fun (){
  Node *n = node_new();
  int j = 9;
  const int *i;
  i = &j;
  _node_set_data_int(n, i);
  int k = _node_get_data_int(n);
  printf("returned %d\n", k);

  char h = 'h';
  const char *f;
  f = &h;
  _node_set_data_char(n, f);
  char z = _node_get_data_char(n);
  printf("returned %c\n", z);
  node_free(n);
  printf("start\n");
  return 0;
}
