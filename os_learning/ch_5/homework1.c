#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int arg, char *argv[]){
    int x=100;
    int rc=fork();
    if (rc < 0) {         // fork failed; exit
        printf(stderr, "fork failed\n");
        exit(1);
    } else if (rc == 0) { // child (new process)
        printf("I am from child process and my value: %d\n", x);
    } else {              // parent goes down this path (main)
        printf("I am from child process and my value: %d", x);
}
return 0;

}