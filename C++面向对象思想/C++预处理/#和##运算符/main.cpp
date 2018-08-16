#include<iostream>
using namespace std;

#define MKSTR(x) #x  // # 运算符会把 replacement-text 令牌转换为用引号引起来的字符串。
#define CONCAT(a,b) a ## b //## 运算符用于连接两个令牌

int main(){
    int ab = 100;
    cout<<MKSTR(Hello C++) <<endl;
    cout<<CONCAT(a,b)<<endl;

    cout<<"Value of __LINE__: "<<__LINE__<<endl; //程序编译时包含当前行号
    cout<<"Value of __FILE__: "<<__FILE__<<endl; //程序编译时包含当前文件名
    cout<<"Value of __DATE__: "<<__DATE__<<endl; //表示把源文件转换为目标代码的日期
    cout<<"Value of __TIME__: "<<__TIME__<<endl; //表示程序被编译的时间
    return 0;
}