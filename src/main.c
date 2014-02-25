#include <stdio.h>
#include "node.h"

int main() {

  int i = 8;
  // Node* n = init_node(&i);
  // free_node(*n);

  printf("main...\n");
  // char * str = "(+ ( * 3 3 ) ( * 2 2 ))";
  //
  // parse(str);
   
  Node *n = new_node(NUMBER, &i );
  printf("main...1\n");
  Node *m = new_node(WORD, "hahah o i am gleeflul");

  printf("main...2\n");
  printf("can these get fns be external?\n");
  printf("type of node:%d\n", _node_get_type(n));
  printf("type of node:%d\n", _node_get_type(m));
  printf("\n");
  printf("data of node:%s\n", _node_get_data_string(m));
  printf("data of node:%d\n", _node_get_data_int(n));

  free_node(n);
  free_node(m);
  printf("end\n");
  return 0;
}
