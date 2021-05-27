#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  int count = 0;
  char **p;
  for (p = environ; *p != NULL; p++) { /* перебор всех элементов массива */
    if(count==10) break;
    else printf("%s\n", *p); /* разыменование указателя */
    count++;
  }
}

