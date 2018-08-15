#include<iostream>
using namespace std;

class shape{
    protected:
        int width;
        int length;
    public:
        shape(int a,int b){
            width = a;
            length = b;
        }
        virtual int area(){
            cout<<"This is the parent area"<<endl;
            return 0;
        }

        virtual ~shape(){
            cout<<"调用基类的析构函数"<<endl;
        }
};

class Reltange:public shape{
    public:
        Reltange(int a, int b):shape(a,b){};
        int area(){
            cout<<"This is the Reltange area"<<endl;
            return 0;
        }

        ~Reltange(){
            cout<<"调用派生类1的析构函数"<<endl;
        }
};

class Trangle:public shape{
    public:
        Trangle(int a,int b):shape(a,b){};
        int area(){
            cout<<"This is the Trangle area"<<endl;
            return 0;
        }

        ~Trangle(){
            cout<<"调用派生类2的析构函数"<<endl;
        }
};

int main(){
    shape *a;
    Reltange rec(7,8);
    Trangle tra(9,10);

    a = &rec;
    a->area();

    a= &tra;
    a->area();
    
    return 0;
}