/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int** levelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes) {
    int **arr=(int**)malloc(sizeof(int *)*2001);//结果输出
    *returnColumnSizes =malloc(sizeof(int)*2001);//返回二维数组的行和列数，具体是指每行的长度(用一维数组存储）和行数
    *returnSize = 0;
    if(root==NULL) return NULL;
    struct TreeNode *queue[2001];//模拟队列；
    struct TreeNode *temp;
    int l=0;
    int r=0;
    queue[r++]=root;//根节点入队
    while(r>l){
        int len =r-l;//每层长度
        int *lenv=malloc(sizeof(int)*len);//存储一层的元素
        (*returnColumnSizes)[(*returnSize)]=len;//记录每层长度
        for(int i=0;i<len;i++){
            temp=queue[l++];
            lenv[i]=temp->val;
            if(temp->left != NULL){
                queue[r++]=temp->left;
            }
            if(temp->right!=NULL){
                queue[r++]=temp->right;
            }            
        }
        arr[(*returnSize)++]=lenv;
    }
    return arr;
}