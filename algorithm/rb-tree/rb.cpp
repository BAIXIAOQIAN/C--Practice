#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main(){
    return 0;
}

//定义红黑树的节点
struct TreeNode{
    float64 data;
    string color;
    TreeNode* rchild;
    TreeNode* lchild;
    TreeNode* parent;
}

struct RBtree{
    TreeNode* root;//根节点
    TreeNode* cur;//当前节点
    TreeNode* create;//要操作的节点
}
//红黑树的五大特性
//1.节点是红色或者黑色 2.根节点是黑色 3.每个叶子节点是黑色(Nil或者空节点) 4.每个红节点的两个子节点都是黑色,也就是说不存在两个连续的红节点 5. 从任一节点到其每个叶节点的路径都包含相同的黑节点

//添加节点,添加完成后一定要维持红黑树的五大性质
var AddNode(RBtree* rbt,float64 data){
      
}