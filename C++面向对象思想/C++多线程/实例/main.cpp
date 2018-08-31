#include<iostream>
#include<cstdlib>
#include<pthread.h>
using namespace std;


#define NUM_THREAD   5

void *PrintHello(void *threadid){
    int tid = *((int*)threadid);
    cout<< "Hello Round!线程ID"<<tid<<endl;
    pthread_exit(NULL);
}
int main(){
    pthread_t threads[NUM_THREAD];
    int index[NUM_THREAD]; //用数组来保存i的值
    int rc;
    int i;
    for(i = 0; i < NUM_THREAD; ++i){
        cout<<"main() : 创建线程, "<<i<<endl;
        index[i] = i; //先保存i的值
        //传入的时候必须强制转换为无类型指针(void*)
        rc = pthread_create(&threads[i],NULL,PrintHello,(void *)&(index[i]));

        if (rc) {
            cout<<"ERROR:无法创建线程:"<<rc<<endl;
            exit(-1);
        }
    }
    pthread_exit(NULL);
    return 0;
}