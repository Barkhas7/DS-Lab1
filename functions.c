#include "myinclude.h"

void read(int A[], int n)
{
        int i;
        for (i = 0; i < n; i++)
                scanf("%d", &A[i]);
}

void print(int A[], int n)
{
        int i;
        for (i = 0; i < n; i++)
                printf("%d ", A[i]);
        printf("\n");
}

int max(int A[], int n)
{
        int i;
    int maxValue = A[0];

    for (i = 1; i < n; i++) {
        if (A[i] > maxValue) {
            maxValue = A[i];
        }
    }
    return maxValue;
}

int min(int A[], int n)
{
        int i;
    int minValue = A[0];

    for (i = 1; i < n; i++) {
        if (A[i] < minValue) {
            minValue = A[i];
        }
    }
    return minValue;        
}

void copy(int A[], int n, int B[])
{
        int i;
    for (i = 0; i < n; i++) {
        B[i] = A[i];
    }
}

int find(int A[], int n, int x)
{
        int i;
    for (i = 0; i < n; i++) {
        if (A[i] == x) {
            return i;
        }
    }
    return -1;
}

int make_set(int A[], int n, int B[])
{
        int i;
    int k = 0;

    for (i = 0; i < n; i++) {
        if (find(B, k, A[i]) == -1) {
            B[k] = A[i];
            k++;
        }
    }
    return k;        
}

int union_set(int A[], int n, int B[], int m)
{
        int i;
    int k = n;

    for (i = 0; i < m; i++) {
        if (find(A, k, B[i]) == -1) {
            A[k] = B[i];
            k++;
        }
    }
    return k;        
}

int intersection_set(int A[], int n, int B[], int m, int C[])
{
        int i;
    int k = 0;

    for (i = 0; i < n; i++) {
        if (find(B, m, A[i]) != -1 &&
            find(C, k, A[i]) == -1) {
            C[k] = A[i];
            k++;
        }
    }
    return k;
        
}