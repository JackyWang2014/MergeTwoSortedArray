//
//  main.c
//  Merge_Two_sortedArr
//
//  Created by 王亓泰 on 16/5/20.
//  Copyright © 2016年 WangQitai. All rights reserved.
//

#include <stdio.h>
#define M 5
#define N 3
int main(int argc, const char * argv[]) {
    
    int a[M] = {10,30,50,70,90};
    int b[N] = {4,6,8};
    
    int c[M+N];
    int i = 0,j = 0,k = 0;
    
    for(int z = 0; z < M+N;z++ )
    {
        if (j >= N) {
            c[k++] = a[i++];
        } else if(i >= M) {
            c[k++] = b[j++];
        } else if ( a[i] > b[j]) {
            c[k++] = b[j++];
        } else {
            c[k++] = a[i++];
        }
    }
    
    
    for (int i = 0; i < M+N; i++) {
        printf("%d ",c[i]);
    }
    putchar(10);
    
    return 0;
}

int test()
{
    int a[M] = {10,30,50,70,90};
    int b[N] = {4,6,8};
    
    int c[M+N];
    int i = 0,j = 0,k = 0;
    while (i < M && j < N) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
    
    while (i < M) {
        c[k++] = a[i++];
    }
    
    while (j < N) {
        c[k++] = b[j++];
    }
    
    return 0;
}