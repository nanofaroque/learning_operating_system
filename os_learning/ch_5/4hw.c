#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
    printf("PID of example.c = %d\n", getpid());
    pid_t p;
    p = fork();
    if(p==-1)
    {
        printf("There is an error while calling fork()");
    }
    if(p==0)
    {
    printf("We are in the child process\n");
    printf("Calling hello.c from child process\n");
    char *args[] = {NULL};
    execv("./p1", args);
    }
    else
    {
        printf("We are in the parent process");
    }
    return 0;
}