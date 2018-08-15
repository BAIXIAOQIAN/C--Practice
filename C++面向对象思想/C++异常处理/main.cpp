#include<iostream>
#include<exception>
using namespace std;

double devision(int a, int b){
    if (b == 0) {
        throw "Devision by zero condition!";
    }
    return (a/b);
}

//定义新的异常
struct  Myexception: public exception{
    const char * what() const throw(){
        return "C++ expection";
    }
};

int main(){
    /*int x = 50;
    int y = 0;
    double z = 0;

    try{
        z = devision(x,y);
        cout<<z<<endl;
    }catch(const char* msg){
        cerr<<msg<<endl;
    }*/
    try {
        throw Myexception();
    }catch(Myexception &e){
        cout<<"My expection"<<endl;
        cout<<e.what()<<endl;
    }catch(exception &e){
        cout<<"其他错误"<<endl;
    }
    return 0;
}