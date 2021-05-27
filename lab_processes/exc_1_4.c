#include <stdio.h>
extern char **environ;
int main(int argc,          /* кол-во аргументов */
         char const *argv[] /* сам массив аргументов*/)
{
   int count = 0;
   int amount;
   sscanf(argv[1], "%d",&amount);
   char **p;
   for (p = environ; *p != NULL; p++) /* перебор всех элементов массива */
   {if(count<amount) printf("%s\n", *p); /* разыменование указателя */
    else break;
    count++;}
}
