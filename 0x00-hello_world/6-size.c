#include <stdio.h>
#include <string.h>

int main() {
  char output[100];
  sprintf(output, "Size of a char: 1 byte(s)\nSize of an int: 4 byte(s)\nSize of a long int: 4 byte(s)\nSize of a long long int: 8 byte(s)\nSize of a float: 4 byte(s)\n");
  char *newline = strrchr(output, '\n');
  if (newline != NULL) {
    *newline = '\0';
  }

  printf("Actual output: %s\n", output);

  return 0;
}
