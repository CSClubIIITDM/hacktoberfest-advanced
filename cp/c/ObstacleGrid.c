//kanakam sriram
//ec20b1060

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//function to find the path
int obstaclegrid(int rows,int cols, int i, int j,int arr[][cols]) {
    if(i<0 || j>cols)    return 0;
    if(arr[i][j] == 1)    return 0;
    if(i==0 && j==cols-1)    return 1;
    return obstaclegrid(rows,cols, i-1, j,arr) + obstaclegrid(rows,cols, i, j+1,arr);
}
//driver code
int main(){

    int m ,n;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int k = obstaclegrid(m,n,m-1,0,arr);
    printf("Most unique path length:\n");
    printf("%d\n",k);
    return 0;
}
