#include<iostream>
using namespace std;

class A{
    public:
        A(){
            cout<<"调用A的构造函数"<<endl;
        }
        virtual ~A(){
            cout<<"调用A的析构函数"<<endl;
        }
    protected:
        int a;
};

class B:virtual public A{
    public:
        B(){
            cout<<"调用B的构造函数"<<endl;
        }
        virtual ~B(){
            cout<<"调用B的析构函数"<<endl;
        }
    protected:
        int b;
};

class C:virtual public A{
    public:
        C(){
            cout<<"调用C的构造函数"<<endl;
        }
        virtual ~C(){
            cout<<"调用C的析构函数"<<endl;
        }
    protected:
        int c;
};

class D:public B,public C{
    public:
        D(){
            cout<<"调用D的构造函数"<<endl;
        }
        virtual ~D(){
            cout<<"调用D的析构函数"<<endl;
        }
    protected:
        int d;
};

int main(){
    cout<<"这是一个测试程序"<<endl;
    D test;
    cout<<sizeof(test)<<endl;
    return 0;
}