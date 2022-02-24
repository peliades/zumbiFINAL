#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(void)
{
    pid_t pid;

    printf("processo pai, PID %d\n", getpid());

    pid = fork();

    if (pid == 0){
        printf("processo filho, PID %d\n", getpid());
        exit(0);
    }
    else {
    sleep(10);
    }
    return 0;
}