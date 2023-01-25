#include "main.h"

/*
 * _pall_opcode - Print all values on the stack starting from head
 * @stack_ptr: pointer to head of stack
 * @l_num: Line Number in current execution
 */
void _pall_opcode(stack_t **stack_ptr, unsigned int l_num) {
  stack_t *temp;

  if (*stack_ptr == NULL)
    printf("NULL stack");

  temp = *stack_ptr;
  while (temp != NULL) {
    printf("%d\n", temp->n);

    temp = temp->next;
  }
}
