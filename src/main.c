#include <stdio.h>
#include "node.h"


int main(){

  int i = 8;
  Node* n = init_node(&i);
  free_node(*n);

  printf("main...\n");
  return 0;
  //char * str = "(+ ( * 3 3 ) ( * 2 2 ))";
  //parse(str);


}

