// still need to add parameters check for this, better see others' implement.


//插入排序算法：插入排序由N-1趟排序组成。对于P=1趟到P=N-1趟，插入排序保证从位置0到位置P上的元素为已排序状态。插入排序利用了这样的事实：位置0到位置P-1上的元素是已排过序的。
//在第P趟，我们将位置P上的元素向左移动到它在前P+1个元素中的正确位置上。位置P上的元素存于Tmp，而（在位置P之前）所有更大的元素都被向右移动一个位置。然后Tmp被置于正确的位置上。这种方法与在实现二叉堆所用到的技巧相同。

//插入排序的分析：由于嵌套循环的每一个都花费N次迭代，因此插入排序为O（N^2），而且这个界是精确的，因为以反序输入可以达到该界。另一方面，如果输入数据已预先排序，那么运行时间为O（N），因为内层循环的检测总是立即判定不成立而终止。事实上，如果输入几乎被排序，那么插入排序将运行得很快。由于这种变化差别很大，因此值得我们去分析该算法平均情形的行为。实际上，和各种其他排序算法一样，插入排序的平均情形也是O（N^2）。

#include<stdio.h>

void InsertionSort(int A[], int N) {
    int j, p;
    int tmp;
    for(p=1; p<N; p++) {
        tmp=A[p];
        for(j=p; j>0 && A[j-1]>tmp; j--) {
            A[j]=A[j-1];
        }
        A[j]=tmp;
    }
}

int main() {
    int A[6]={34, 8, 64, 51, 32, 21};
    int N=6;
    int i;
    printf("before sort:\n");
    for(int i=0; i<N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    InsertionSort(A, N);

    printf("after sort:\n");
    for(int i=0; i<N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
