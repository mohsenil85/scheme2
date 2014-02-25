#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "node_private.h"
//#include "node.h"
//void free_node (Node *n) {
// _node_free(&n);
//}
void test_node_free (Node *n) {
  printf("this was hit 1\n");
  if (n->data){
    free (n->data);
    printf("this was hit 2\n");
  }
  if (n->title){
    free (n->title);
    printf("this was hit 3\n");
  }
  if (n->node_type){
    free (n->node_type);
    printf("this was hit 4\n");
  }
  if (NULL != n) {
    printf("this was hit 5\n");
    free (n);
  }
}
Node new_node(enum TYPE_T type, void* data){
  Node *n = _node_new();
  switch(type){
    case NUMBER:
      _node_set_type(n, NUMBER );
      _node_set_data_int(n,&data);
  return *n;
      break;
    case WORD:
      _node_set_type(n, WORD );
      _node_set_data_string(n,data);
  return *n;
      break;
    default:
      printf("error:  unknown type\n");
      //something somethinng, fprintf blah
  }
  //return *n;
}

int test_fun (){
  Node n = new_node(NUMBER,8 );
  Node m = new_node(WORD,"hahah o i am gleeflul" );

  printf("can these get fns be external?\n");
  printf("type of node:%d\n", _node_get_type(&n));
  printf("type of node:%d\n", _node_get_type(&m));
  printf("\n");
  printf("data of node:%s\n", _node_get_data_string(&m));
  printf("data of node:%d\n", _node_get_data_int(&n));

  printf("crash\n");
  printf("n =%x\n", n);
  printf("&n =%x\n", &n);
  //test_node_free(&n);

  //free(&n);
  test_node_free(&n);
  printf("start\n");
  return 0;
}
