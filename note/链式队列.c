
#include <stdlib.h>

// 初始化结构体
typedef struct NODE{
    int data;
    struct NODE *next;
}NODE;

//创建队列
NODE *front=NULL;
NODE *rear=NULL;

// 入队操作
void push(NODE front,NODE rear,int x){
    NODE *temp=(NODE*)malloc(sizeof(NODE));
    temp->next=NULL;
    temp->data=x;
    if (front==NULL &&rear==NULL){
        front=rear=temp; 
    }
    rear->next=temp;
    rear=rear->next;
}

//出队操作
void pop(NODE front,NODE rear){
    if (front== NULL){
       return ;
    }
    NODE *temp=front;//操作或标志
    front=front->next;
    free(temp);
    return;
}
