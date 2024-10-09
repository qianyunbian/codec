#include <stdio.h>
#include <stdlib.h>

// 初始化结构体
typedef struct NODE {
    int data;
    struct NODE *next; // 这里应该是 struct NODE
} NODE;


NODE *front = NULL;
NODE *rear = NULL;
// 入队操作
void push(int x) {
    NODE *temp = (NODE *)malloc(sizeof(NODE)); // 使用 malloc 分配内存
    temp->data = x;
    temp->next = NULL;
    
    if (front == NULL && rear == NULL) {
        front = rear = temp; // 同时指向新节点
    } else {
        rear->next = temp; // 将当前后指向新节点
        rear = temp; // 更新 rear
    }
}

// 出队操作
void pop() {
    if (front == NULL) {
        return; // 队列为空，不做操作
    }
    NODE *temp = front; // 操作标志
    front = front->next; // 更新 front
    free(temp); // 释放节点
    
    if (front == NULL) {
        rear = NULL; // 如果队列为空，rear 也应为 NULL
    }
}

// 示例主函数
int main() {

    push(1);
    push(2);
    pop();
    pop();
    pop(); // 队列为空
    return 0;
}