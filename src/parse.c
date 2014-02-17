#include <stdio.h>
#include <string.h>

#define const char OPEN = "(";
#define const char CLOSE = ")";

char test_string[100] = "(test1 (test2 test3 test4))";

char* parse(){
  int i;
  char c;
  for(i = 0; i < strlen(test_string); i++){
    c = test_string[i];
      switch (c){
        case OPEN:
          printf("open paren detected\n");
          break;
        case CLOSE:
          printf("close paren detected\n");
          break;
        case "  ":
          printf("space detected\n");
          break;
        default:
          printf("defualt hit\n");
          break;

      }
    //printf("%c\n", c );

   }
  return test_string;
}
