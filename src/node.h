#ifndef NODE_H
#define NODE_H
#include <string.h>
#include <stdlib.h>
#include "node_private.h"
void free_node(Node n);
Node new_node(enum TYPE_T type, void *data);
int test_fun();
#endif /* NODE_H */
