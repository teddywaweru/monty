#include "monty.h"
#include <string.h>
// #include <stddef.h>
int main(int argc, char **argv) {
  unsigned int l_num = -1;
  size_t n = 0;
  ssize_t count;
  char *string = NULL;
  char *linePtr = NULL;
  char *oc = NULL;
  stack_t *stackPtr = NULL;

  if (argc != 2)
    _geterrmsg(0, l_num, &stackPtr);
  FILE *stream = fopen(argv[1], "r");

  if (stream == NULL) {
    fprintf(stderr, "Cannot read file %s\n", argv[1]);
    exit(EXIT_FAILURE);
  }
  oc_t *new_oc = malloc(sizeof(oc_t));
  new_oc->stream = stream;
  if (new_oc == NULL)
    printf("Unable to malloc new_oc struct");

  while ((count = getline(&linePtr, &n, stream))) {

    string = linePtr;
    oc = strtok(string, "\n");
    if (oc != NULL)
      new_oc->oc_arg = strtok(NULL, " ");
    new_oc->buf = linePtr;
    stackPtr = getOpFunc(&stackPtr, oc, l_num);
    l_num++;
  }
  // char *string = strtok
  /**
   * get file
   * check if file is null
   * process each line in the string
   *	check the opcode to be used & call
   */
}
