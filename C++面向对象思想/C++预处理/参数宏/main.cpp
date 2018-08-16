#include<iostream>
using namespace std;

#define MIN(a,b) (a<b ? a:b)

int main(){
    int a= 4;
    int b=5;

    cout<<"MIN(a.b): "<<MIN(a,b)<<endl;
    return 0;
}