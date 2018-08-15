#include<iostream>
using namespace std;

class Box{
    public:
        double getVolum(void){
            return length*width*height;
        }
        void setlength(double len){
            length = len;
        }
        void setwidth(double wid){
            width = wid;
        }
        void setheight(double hei){
            height = hei;
        }
        Box operator-(const Box& b){
            Box box;
            box.length = this->length + b.length;
            box.height = this->height + b.height;
            box.width = this->width + b.width;
            return box;
        }
    private:
        double length;
        double width;
        double height;
};

int main(){
    Box box1; Box box2; Box box3; double volum = 0.0;
    box1.setheight(6.0);
    box1.setlength(7.0);
    box1.setwidth(8.0);

    box2.setheight(11.0);
    box2.setlength(12.0);
    box2.setwidth(13.0);

    volum = box1.getVolum();
    cout<<"volum of box1: "<<volum<<endl;

    volum = box2.getVolum();
    cout<<"volum of box2: "<<volum<<endl;

    box3 = box1 - box2;

    volum = box3.getVolum();
    cout<<"volum of box3: "<<volum<<endl;
    
    return 0;
}