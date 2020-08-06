#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
    printf("PID of mycode.c = %d\n", getpid());
    pid_t p;
    p = fork();
    if(p==-1){
        printf("There is an error while calling fork()");
    }
    if(p==0){
        wait(NULL);
        }
    else{
        wait(NULL);
        printf("We are in the parent process");
    }
    return 0;
}