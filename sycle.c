#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
static int flag = 1;
void* Sleep(void* arg) {
    sleep(1);
    
    flag = 0;

    return NULL;
}


int main(void) {
    pthread_t th;
    unsigned long long int i = 0;
    pthread_create(&th, NULL, Sleep, NULL);
    pthread_detach(th);
    while(flag){
        i++;
    }
    printf("%llu\n", i);
    printf("%llu\n", (unsigned long long)-1);
}
