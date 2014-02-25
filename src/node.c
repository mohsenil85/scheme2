#include <stdio.h>
#include <string.h>
#include <stdlib.h>
enum TYPE_T{
  NUMBER, WORD
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
/*
   void _node_set_data_char (Node *n, const char *data) {
   n->data = realloc (n->data, strlen (data) + 1);
   strcpy (n->data, data);
   }
   */

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

/*
   char _node_get_data_char (Node *n) {
   char c;
   memcpy(&c, n->data, sizeof(char));
   return c;
   }
   */

char* _node_get_data_string (Node *n) {
  return(n->data);
}


Node new_node(enum TYPE_T type, void* data){
  Node *n = _node_new();
  switch(type){
    case NUMBER:
      _node_set_type(n, NUMBER );
      _node_set_data_int(n,&data);

      break;
    case WORD:
      printf("word was hit\n");
      _node_set_type(n, WORD );
      _node_set_data_string(n,data);
      int len = strlen(data);
      printf("**LENGTH = %d", len);
      printf("type of node:%d\n", _node_get_type(n));
      printf("data of node:%s\n", _node_get_data_string(n));
      break;
    default:
      printf("error:  unknown type\n");
      //something somethinng, fprintf blah
  }
  return *n;
}

int test_fun (){
  Node n = new_node(NUMBER,8 );
  Node m = new_node(WORD,"hahah o am gleeflul" );

  printf("can these get fns be external?\n");
  printf("type of node:%d\n", _node_get_type(&n));
  printf("type of node:%d\n", _node_get_type(&m));
  printf("\n");
  printf("data of node:%s\n", _node_get_data_string(&m));
  printf("data of node:%d\n", _node_get_data_int(&n));
  //Node *n = _node_new();
  /*
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
     char* str = "hahaha o iam laffin";
     _node_set_data_string(n, str);
     char * ret = _node_get_data_string(n);
     printf("ret string =%s\n", ret);
     node_free(n);
     */ 
  printf("start\n");
  return 0;
}
