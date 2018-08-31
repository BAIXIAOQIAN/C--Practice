#include<iostream>
#include<pthread.h>
#include<cstdlib>
using namespace std;

#define NUM_PTHREAD 5

struct thread_data{
    int thread_id; 
    char *message;
};

void *PrintHello(void *thread_args){
    struct thread_data *my_data;
    my_data = (struct thread_data *)thread_args;

    cout<<"Thread ID: "<<my_data->thread_id;;
    cout<<" Message: "<<my_data->message<<endl;

    pthread_exit(NULL);
}

int main(){
    pthread_t threads[NUM_PTHREAD];
    struct thread_data td[NUM_PTHREAD];
    int rc;
    int i;
    for (i = 0; i < NUM_PTHREAD; ++i){
        cout<<"main() : create thread, "<<i<<endl;
        td[i].thread_id = i;
        td[i].message = (char *)"This is message";
        rc = pthread_create(&threads[i],NULL,PrintHello,(void *)&td[i]);

        if (rc){
            cout<<"ERROR: Create thread failed"<<rc<<endl;
            exit(-1);
        } 
    }
    pthread_exit(NULL);
    return 0;
}
