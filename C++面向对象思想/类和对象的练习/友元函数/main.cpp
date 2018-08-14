#include<iostream>
using namespace std;

class Line{
    public:
        Line(double len);
        friend void printwidth(Line line);
    private:
        double width;
};

//成员函数的初始化
Line::Line(double len){
    width = len;
}
void printwidth(Line line){
    cout<<line.width<<endl;
}

int main(){
    Line line(10);
    printwidth(line);
    return 0;
}
