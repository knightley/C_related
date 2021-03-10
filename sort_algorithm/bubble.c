
#include<stdio.h>

void BubbleSort(int A[], int N) {
    for(int i=0; i<N; i++) {
        for(int j=0; j<N-i-1; j++) {
            if(A[j] > A[j+1]) {
                int tmp=A[j];
                A[j]=A[j+1];
                A[j+1]=tmp;
            }
        }
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
    BubbleSort(A, N);

    printf("after sort:\n");
    for(int i=0; i<N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
