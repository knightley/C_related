#include<stdio.h>

void ShellSort(int A[], int N) {
    int i, j, increment;
    int tmp;
    for(increment=N/2; increment>0; increment/=2) {
        for(i=increment; i<N; i++) {
            tmp=A[i];
            for(j=i; j>=increment; j-=increment) {
                if(tmp < A[j-increment]) {
                    A[j] = A[j-increment];
                }
                else {
                    break;
                }
            }
            A[j]=tmp;
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
    ShellSort(A, N);

    printf("after sort:\n");
    for(int i=0; i<N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
