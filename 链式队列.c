

// 初始化结构体
typedef struct NODE{
    int data;
    NODE *next;
}NODE;

//创建队列
NODE *front=NULL;
NODE *rear=NULL;

// 入队操作
void phus(NODE front,NODE rear,int x){
    NODE *temp=(NODE)sizeof(NODE);
    temp->next=NULL;
    temp->data=x;
    if (front==NULL &&rear==NULL){
        float=rear=temp;
    }
    rear->next=temp;
    rear->next=rear;
}

//出队操作
void pop(NODE front,NODE rear){
    if (front== NULL){
       return ;
    }
    NODE *temp=front;//操作或标志
    front->next=float;
    free(temp);
    return;
}
