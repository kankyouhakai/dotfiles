#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
static int flag = 1;

void* Sleep(void* arg) {
    sleep(1);
    flag = 0;

    return NULL;
}

int main(void) {
    register unsigned long long i = 0;
    pthread_t th;
    pthread_create(&th, NULL, Sleep, NULL);
    pthread_detach(th);
    while(flag) {
        i++;
    }
    printf("%llu\n", i);

}
