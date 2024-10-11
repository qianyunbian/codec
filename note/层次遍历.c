/*
算法核心通过辅助对列
(递归)
核心
    0.判断边界
        1.指针不为空
        2.入队(队列存储入队节点的指针)
    队列不为空while循环
        对头出队//存放层次遍历
        if左孩子不为空
            左子树 入队
        if右孩子不为空
            右子树 入队

*/
typedef struct Queue{
    TreeNODE *data
    struct Queue *next;
}Queue;

void LOrder(root){
    if (root==NULL){
        return;
    }
    //如果是知道大小队列[]
    TreeNODE *queue[];
    //未知大小
    //开辟一个存储指针的结构体
    
    
}