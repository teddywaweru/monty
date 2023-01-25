#include "main.h"
#include <string.h>

/**
 * getOpFunc - Implement opcode on stack_t depending on oc selected
 * @ptr: stack_t struct that is to be operated on
 * @oc: opcode to  be executed
 * @l_num: Line number that is currently being executed
 *
 * Return: stack_t: Modified struct with operation executed
 */
stack_t *getOpFunc(stack_t **stack_ptr, char *oc, int l_num) {
  instruction_t instr_arr[] = {
      {"push", _push_opcode}, {"pall", _pall_opcode}, {NULL, NULL}};

  int idx = 0;
  stack_t *temp = NULL;
  /*
   * loop through instructions
   * use strcmp to see if oc matches
   * carry out operation
   * return stack_t
   */
  while (instr_arr[idx].opcode != NULL) {
    if (strcmp(instr_arr[idx].opcode, oc)) {
      instr_arr[idx].f(stack_ptr, l_num);
      break;
    }
    idx++;
  }
  return (*stack_ptr);
}
