#include<iostream>
#include<string>
using namespace std;

template <typename T>

inline T const &Max(T const &a, T const &b){
    return a<b?b:a;
}

int main(){
    int a=12;
    int b=54;

    cout<<"Max(a,b)"<<Max(a,b)<<endl;

    string str1 = "baixiaoqian";
    string str2 = "baixiaopu";

    cout<<"Max(str1,str2)"<<Max(str1,str2)<<endl;
    return 0;
}