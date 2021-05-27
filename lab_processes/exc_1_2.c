#include <stdio.h>

extern char **environ;
int main(int argc,          /* кол-во аргументов */
         char const *argv[] /* сам массив аргументов*/)
{
  int env_count = 0;
  int args_count = 0;
  char **p;
  for (p = environ; *p != NULL; p++)
   env_count++;
  printf("Number of environment variables: %d\n", env_count);
  for(int j = 0; j < argc; j++)
    args_count++;
  printf("Amount of received arguments: %d\n", args_count-1);
}
