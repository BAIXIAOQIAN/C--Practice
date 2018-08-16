#include<iostream>
using namespace std;

#define DEBUG

#define MIN(a,b) ((a) < (b) ? a:b)

int main(){
    int i = 45, j = 87;
#ifdef DEBUG
    cerr<< "Inside main funtion"<<endl;
#endif

#if 0
    /*这是注释部分*/
    cout<< MKSTR(hello C++)<<endl;
#endif

    cout<<"The Minnum is: "<<MIN(i,j)<<endl;

#ifdef DEBUG
    cerr<<"Trace: Coming out of main function"<<endl;
#endif

    return 0;
}
