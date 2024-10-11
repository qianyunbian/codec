
// 根据实际需求创建顺序队列的大小 例如：99
#define Maxsize  99

//创建队列(大小是固定的)
int Queue[Maxsize];
//初始化对头队尾
static int l=r=0;

//入队
void push(int *Queue,int x){
    if ((r+1)%Maxsize==l){//队尾的下一个是队头说明 队满
        return;
    }
    Queue[r]=x;
    r=(r+1)%Maxsize;
}

//出队
int pop(int *Queue){
    if (l==r){//队头和对尾相等时队列为空 无输出
        return -1;
    }
    int temp=Queue[l];
    l=(l+1)%Maxsize;
    return temp;
}

