#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  int counter;
  char **p;
  for (p = environ; *p != NULL; p++) /* перебор всех элементов массива */
    counter++;
  printf("Number of environment variables: %d\n", counter);
}
