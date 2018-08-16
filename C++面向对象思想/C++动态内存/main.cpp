#include<iostream>
using namespace std;

class Pvalue{
    public:
        Pvalue(){
            value = 5;
            cout<<"调用此类的构造函数"<<value<<endl;
        };
        virtual ~Pvalue(){
            cout<<"调用此类的析构函数"<<endl;
        };
    private:
        int value;
};

int main(){

    /*double *pvalue = NULL;
    pvalue = new double;

    *pvalue = 2845.99;
    cout<<"value of pvalue"<<*pvalue<<endl;
    delete pvalue;*/

    //二维数组的动态分配
    /*int **p;
    p = new int *[4];
    for (int i=0;i<4;++i){
        p[i] = new int [8];
    }

    for(int i=0;i<4;++i){
        for(int j=0;j<8;j++){
            p[i][j] = j*i;
            if (j == 0){
                cout<<endl;
            }else{
                cout<<p[i][j]<<"\t";
            }
        }
    }

    for(int i=0;i<4;++i){
        delete []p[i];
    }
    delete []p;*/

    //三维数组的动态分配
    /*int ***arry;
    arry = new int **[4];
    for(int i=0;i<4;++i){
        arry[i] = new int *[5];
        for(int j=0;j<5;++j){
            arry[i][j] = new int [6];
            for(int k=0;k<6;++k){
                arry[i][j][k] = k+j+i;
                cout<<arry[i][j][k]<<"\t";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    for(int i=0;i<4;++i){
        for(int j=0;j<5;++j){
            delete []arry[i][j];
        }
        delete []arry[i];
    }
    delete []arry;*/

    //对象的动态分配
    Pvalue *pval = new Pvalue[2];
    delete []pval;
    return 0;
}