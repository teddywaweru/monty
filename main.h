#ifndef MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct stack_s = doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack or queue
 * @next: points to the next element of the stack or queue
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s {
  int n;
  struct stack_s *prev;
  struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode & its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s {
  char *opcode;
  void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * opcode to execute
 * opcode's argument
 */
typedef struct oc_s {
  char *oc;
  char *oc_arg;
  char *buf;
  FILE *stream;
} oc_t;

void _geterrmsg(int n, unsigned int long_num, stack_t **stackPtr);
stack_t *get_ptr(stack_t **s, char *y, int x);
#define MAIN_H
#endif // !MAIN_H
