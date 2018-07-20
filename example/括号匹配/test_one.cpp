/////括号匹配
#include<iostream>
#include<stack>

using namespace std;

//1.判断是不是左括号
bool isleft(char s){
     if (s == '('|| s == '[' || s == '{'){
         return true;
     }
     return false;
}

//2.判断左括号与右括号是否匹配
bool ismatch(char right, char left){
    if (right == ')'){
        return (left == '(');
    }
    if (right == ']'){
        return (left == '[');
    }
    if (right == '}'){
        return (left =='{');
    }
}

//判断字符串括号是否匹配
bool istrue(char* s){
    stack <char> cs;
    while(*s){
        char c;
        c = *s;
        if (isleft(c)){
           cs.push(c);
        }
        else{
            if (cs.empty()||!ismatch(c,cs.top())){
                return false;
            }
            cs.pop();
        }
        s++;
    }
    if (!cs.empty()){
        return false;
    }else {
        return true;
    }
}
int main(){
    char* s;
    cin>>s;
    if (istrue(s)){
        cout<<"Yes"<<endl;
    }else {
        cout<<"No"<<endl;
    }
    return 0;
}