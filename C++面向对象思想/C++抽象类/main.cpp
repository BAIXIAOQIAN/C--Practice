#include<iostream>
using namespace std;

class shape{
    public:
        virtual int getArea() = 0;
        int setwidth(int a){
            width = a;
            return 0;
        }
        int setlength(int b){
            length = b;
            return 0;
        }
    protected:
        int width;
        int length;
};

class Rectangle:public shape{
    public:
        int getArea(){
            return width*length;
        }
};

class Triangle:public shape{
    public:
        int getArea(){
            return width*length*length;
        }
};

int main(void){
    shape *s;
    Rectangle rect;
    rect.setwidth(10);
    rect.setlength(13);
    s = &rect;
    cout<<s->getArea()<<endl;

    Triangle tri;
    tri.setlength(8);
    tri.setwidth(4);
    s = &tri;
    cout<<s->getArea()<<endl;
    return 0;
}