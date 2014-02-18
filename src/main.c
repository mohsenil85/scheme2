#include <stdio.h>
#include "parse.h"

int main(){
 // char test_string[100] = "(test1 (test2 test3 test4))";
  char test_string[100] = "(* (+ 2 2) (+ 3 3))";
  char* out_str = parse(test_string);
  printf("output of parse:  %s\n", out_str);
  return 0;
}
