#include <stdio.h>
#include <unistd.h>

int main(int argc,          /* кол-во аргументов */
         char const *argv[] /* сам массив аргументов*/)
{
   int amount;
   sscanf(argv[1], "%d",&amount);
   int pid=0;
   // определить, в каком процессе мы находимся, помогает переменная pid
   for(int k = 0; k < amount; k++) {pid = fork();if(pid == 0) break;}
   if (pid == 0) {
    // дочерний процесс получает в качестве значения 0
    // это не является корректным PID и служит для определения
    // того факта, что данный код выполняется в дочернем процессе
        int child = getpid();
        int parent = getppid();
        printf("My pid: %d\n",child);
        printf("My parent's pid: %d\n",parent);
        sleep(10);
    } else if (pid > 0) {
        // родительский процесс получает значение PID дочернего, он должен быть > 0
        printf("Это сообщение из родительского процесса.\n"
           "Идентификатор дочернего процесса:  %d\n", pid);
        sleep(10);
    }
   return 0;
}
