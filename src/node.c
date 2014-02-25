#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "node_private.h"
#include "node.h"
void free_node (Node n) {
  _node_free(&n);
}
Node new_node(enum TYPE_T type, void* data){
  Node *n = _node_new();
  switch(type){
    case NUMBER:
      _node_set_type(n, NUMBER );
      _node_set_data_int(n,&data);
      break;
    case WORD:
      _node_set_type(n, WORD );
      _node_set_data_string(n,data);
      break;
    default:
      printf("error:  unknown type\n");
      //something somethinng, fprintf blah
  }
  return *n;
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
  //_node_free(&n);
  //free_node(n);
  printf("start\n");
  return 0;
}
