#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main() {

	pid_t pid;

    printf("initial parent pid = %d\n", getpid());
    if ((pid = fork()) == 0) {
                for(int i = 0; i != 10; ++i) {
            printf("parent pid = %d\n", getppid());
            sleep(1);
        }
    }

    sleep(5);
}
