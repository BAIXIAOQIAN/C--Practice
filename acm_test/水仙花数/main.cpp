#include<iostream>
#include<cmath>
using namespace std;

void Shuixian(int n){
    int i = 100;
    for(;i<=n;i++){
        int sum=0,num=0,x=i;
        while(x){
            num = x%10;
            sum += num*num*num;
            x = x/10;
        }
        if(sum == i){
            cout<<sum<<endl;
        }
    }
}

int main(){
    int n;
    while(cin>>n){
        Shuixian(n);
    }
    return 0;
}