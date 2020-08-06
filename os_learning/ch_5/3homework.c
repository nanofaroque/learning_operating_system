#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(int arg, char *argv[]){
    int fd = open("3test.txt", O_WRONLY | O_APPEND);
    int frk = fork();
    if(frk<0){
        printf('fork was wrong');
    }else if(frk==0){
        if(write(fd,"hello", 5) != 5){
            return 1;
        }

    }else{
        sleep(2); 
        if(write(fd,"good bye", 8) != 8){
            return 1;
        }
    }

    return 0;

}