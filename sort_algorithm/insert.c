// still need to add parameters check for this, better see others' implement.
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
