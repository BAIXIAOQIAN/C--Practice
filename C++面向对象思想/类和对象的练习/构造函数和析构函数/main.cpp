#include<iostream>
using namespace std;

class Base1{
    public:
        Base1(int len);//简单构造函数
        int getlength(void);
        Base1(const Base1 &obj);//拷贝构造函数
        virtual ~Base1();//析构函数
    private:
        int *ptr;
};
//成员函数的定义(包含构造函数)
Base1::Base1(int len){
    cout<<"调用构造函数,为指针分配内存"<<endl;
    ptr = new int;
    *ptr = len;
}
Base1::Base1(const Base1 &obj){
    cout<<"调用拷贝构造函数并为指针ptr分配内存"<<endl;
    ptr = new int;
    *ptr = *obj.ptr;//拷贝值
}
int Base1::getlength(void){
    return *ptr;
}
Base1::~Base1(){
    cout<<"调用析构函数,释放内存"<<endl;
    delete ptr;
}
void display(Base1 obj){
    cout<<"Base1大小"<<obj.getlength()<<endl;
}
/*class Base2{
    public:
        Base2(){
            cout<<"这也是一个构造函数"<<endl;
        }
        virtual ~Base2(){
            cout<<"这也是一个析构函数"<<endl;
        }
};

class Drived:public Base1,public Base2{
    public:
        Drived(){
            cout<<"这是一个派生类的构造函数"<<endl;
        }
        ~Drived(){
            cout<<"这是一个派生类的析构函数"<<endl;
        }
};*/
int main(){
    //Drived B; 通过实例化对象来调用
    //Drived const &D = Drived();//直接调用构造函数会产生一个临时的对象,要访问这个临时对象需要使用const引用,在const引用的生命周期内,这个临时对象会一直存在,但不能被修改.
    //Drived();
    Base1 base1(10);
    display(base1);
    cout<<"这是一个测试程序"<<endl;
    return 0;
}