/*描述
N 位同学站成一排，音乐老师要请最少的同学出列，使得剩下的 K 位同学排成合唱队形。
通俗来说，能找到一个同学，他的两边的同学身高都依次严格降低的队形就是合唱队形。
例子：
123 124 125 123 121 是一个合唱队形
123 123 124 122不是合唱队形，因为前两名同学身高相等，不符合要求
123 122 121 122不是合唱队形，因为找不到一个同学，他的两侧同学身高递减。
你的任务是，已知所有N位同学的身高，计算最少需要几位同学出列，可以使得剩下的同学排成合唱队形。
注意：不允许改变队列元素的先后顺序 且 不要求最高同学左右人数必须相等
数据范围： 
1≤n≤3000 
输入描述：
用例两行数据，第一行是同学的总数 N ，第二行是 N 位同学的身高，以空格隔开
输出描述：
最少需要几位同学出列
示例1
输入：
8
186 186 150 200 160 130 197 200
复制
输出：
4
复制
说明：
由于不允许改变队列元素的先后顺序，所以最终剩下的队列应该为186 200 160 130或150 200 160 130
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX(a,b) ((a)>(b)?(a):(b))
int MIN = 0;
int n, tmpmax = 0;
int out = 0, count1 = 0, lcout = 0;
int count2 = 0, rcout = 0;

int main() {
    scanf("%d", &n);
    int temp[n ];
    int list[n];
    int dpl[n ];
    int dpr[n ];
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp[i]);
        dpl[i] = dpr[i] = 1;
    }
    for (int i =0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (temp[i] > temp[j]) {
                dpl[i] = MAX(dpl[i], dpl[j] + 1);
            } else {
                // dpl[i] = MAX(dpl[i], dpl[j]);
            }
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        for (int j = n-1; j>i; j--) {
            if (temp[i] > temp[j]) {
                dpr[i] = MAX(dpr[i], dpr[j] + 1);
            } else {
                // dpr[i] = dpr[j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        int temps=dpl[i]+dpr[i]-1 ;
        if (temps>tmpmax) {
            tmpmax=temps;
        }
        // printf("%d ", dpl[i]);
    }
        printf("%d ", n-tmpmax);

    return 0;
}