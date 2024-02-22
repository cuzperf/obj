#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    pid_t pid;
    pthread_mutex_t mut;

    pthread_mutex_init(&mut, NULL);

    printf("lock\n");
    pthread_mutex_lock(&mut);

    printf("fork\n");
    pid = fork();
    if( pid == 0 )          // 子进程尝试锁定
    {
        printf("child: lock\n");
        pthread_mutex_lock(&mut);
        printf("child: over\n");

        exit(0);
    }

    pthread_mutex_destroy(&mut);
    return(0);
}
