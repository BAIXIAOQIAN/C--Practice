#include<iostream>
#include<cstdlib>
#include<vector>
#include<string>
#include<stdexcept>

using namespace std;

template <class T>

class stack{
    private:
        vector <T> elems;
    public:
        void push(T const &); // 入栈
        void pop(); //出栈
        T top() const; //返回栈顶元素
        bool empty() const{
            return elems.empty(); //如果为空则返回true
        }
};

template <class T>

void stack<T>::push(T const &elem){
    elems.push_back(elem);
}

template <class T>
void stack<T>::pop(){
    if (elems.empty()){
        throw out_of_range("stack<>::pop(): empty stack");
    }
    elems.pop_back();
}

template <class T>

T stack<T>::top() const {
        if (elems.empty()){
        throw out_of_range("stack<>::pop(): empty stack");
    }
    return elems.back();
}

int main(){
    try{
        stack<int> intstack;
        stack<string> stringstack;

        intstack.push(7);
        cout<<intstack.top()<<endl;

        stringstack.push("bai");
        cout<<stringstack.top()<<endl;
        stringstack.pop();
        stringstack.pop();
    }catch(exception const &ex){
        cerr<<"Expection: "<<ex.what()<<endl;
        return -1;
    }
}