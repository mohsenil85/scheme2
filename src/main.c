#include <stdio.h>
#include "parse.h"

int main(){
  char* str = parse();
  printf("output of parse:  %s\n", str);
  return 0;
}
