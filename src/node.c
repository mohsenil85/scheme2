#include <stdio.h>
#include <string.h>
#include <stdlib.h>
enum TYPE_T{
  INT, CHAR
} TYPE_T;
typedef struct {
  void *data;
  char *title;
  enum TYPE_T node_type;
} Node;

Node * _node_new () {
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

char _node_get_data_char (Node *n) {
  char c;
  memcpy(&c, n->data, sizeof(char));
  return c;
}


Node new_node(){
  Node *n = _node_new();
  return *n;
}

int test_fun (){
  Node *n = _node_new();
  _node_set_type(n, CHAR );
  printf("node type was %d\n",_node_get_type(n));

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
