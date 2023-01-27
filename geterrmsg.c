#include "monty.h"
#include <stdio.h>

/**
 * _geterrmsg - print error message
 * @n: error number
 * @l_num: lne number of the command
 * @stackPtr: stack_t pointer
 */
void _geterrmsg(int n, unsigned int long_num, stack_t **stackPtr) {
  stack_t *temp;

  temp = *stackPtr;
  switch (n) {
  case 1:
    fprintf(stderr, "Failure at %d  %d \n", long_num, temp->n);
    break;
  case 2:
    fprintf(stderr, "Failure at %d  %d \n", long_num, temp->n);
    break;
  case 3:
    fprintf(stderr, "Failure at %d  %d \n", long_num, temp->n);
    break;
  default:
    fprintf(stderr, "Failure at %d  %d \n", long_num, temp->n);
    break;
  }
}
