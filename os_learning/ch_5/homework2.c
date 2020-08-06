#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(int arg, char *argv[]){
    int fd = open("testfile.txt", O_WRONLY | O_APPEND);
    int frk = fork();
    if(frk<0){
        printf('fork was wrong');
    }else if(frk==0){
        if(write(fd,"This will be output to testfile.txt1\n", 36) != 36){
            return 1;
        }

    }else{
         if(write(fd,"This will be output to testfile.txt2\n", 36) != 36){
            return 1;
        }
    }

    return 0;

}