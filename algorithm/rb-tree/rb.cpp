#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main(){
    return 0;
}

//定义红黑树的节点
struct TreeNode{
    float data;
    string color;
    TreeNode* rchild;
    TreeNode* lchild;
    TreeNode* parent;
};

struct RBtree{
    TreeNode* root;//根节点
    TreeNode* cur;//当前节点
    TreeNode* create;//要操作的节点
};
//红黑树的五大特性
//1.节点是红色或者黑色 2.根节点是黑色 3.每个叶子节点是黑色(Nil或者空节点) 4.每个红节点的两个子节点都是黑色,也就是说不存在两个连续的红节点 5. 从任一节点到其每个叶节点的路径都包含相同的黑节点

//添加节点,添加完成后一定要维持红黑树的五大性质
void AddNode(RBtree rbt,float data){
    //初始化要操作的节点
    rbt.create = new(TreeNode);
    rbt.create->data = data;
    rbt.create->color = "red";
    //如果当前树不为空
    if (!rbt.isempty()){
        rbt.cur = rbt.root;
        while(0){
            if (data < rbt.cur->data){
                //如果要插入的值比当前节点的值要小,则当前节点指向当前节点的左孩子
                //如果左孩子为空,则将该值插入左孩子
                if (!rbt.cur->lchild.isempty()){
                    rbt.cur = rbt.cur->lchild;
                }else{
                    rbt.cur->lchild = rbt.create;
                    rbt.create->parent = rbt.cur;
                    break;
                }
            }else if (data > rbt.cur->data) {
                //如果要插入的节点的值比当前节点的值要大,则当前节点指向当前节点的右孩子
                //如果右孩子为空,则就在这个右孩子处插入新值
                if (!isempty(rbt.cur->rchild)){
                    rbt.cur = rbt.cur->rchild;
                }else{
                    rbt.cur->rchild = rbt.create;
                    rbt.create->parent = rbt.cur;
                    break;
                }
            }else{
                //如果要插入的值已经存在,则退出
                return ;
            }
        }
    }else{
        rbt.root->data = data;
        rbt.root->parent = NULL;
        rbt.root->color = "black";
        return ;
    }

    //插入节点后对红黑树的性质进行修复
    return ;
}

bool isempty(RBtree *rbt){
    if rbt.
}