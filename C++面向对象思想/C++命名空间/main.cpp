#include<iostream>
using namespace std;

namespace first_space{
    void fun(){
        cout<<"This is first_space"<<endl;
    }
    namespace second_space{
        void fun(){
            cout<<"This is second_space"<<endl;
        }
    }
}

using namespace first_space::second_space;
int main(){
    fun();
    return 0;
}