#include "monty.h"

void _push_opcode(stack_t **s, unsigned int l_num) {
  stack_t *x;
  x = *s;

  printf("%d %d\n", x->n, l_num);
}
