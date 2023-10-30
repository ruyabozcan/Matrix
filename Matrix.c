#include <stdio.h>
#include <stdlib.h>

int main(void) {
  void fun(int **,int,int);
  int i,j,m,n;

  printf("enter order of matrix in the format of m*n:");
  scanf("%d%d",&m,&n);
  // declare a dynamic Matrix
  int **a=(int **)malloc(m*sizeof(int));
  for(i=0;i<n;i++)
      a[i]=(int *)malloc(n*sizeof(int));

  fun(a,m,n);
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++)
       printf("%d ", a[i][j]);
    printf("\n");
  }
return 0;
}
//--------------------
void fun(int **arr,int m,int n){
   int i, j;
    for (i = 0; i < m; i++)
       for (j = 0; j < n; j++){
               printf("enter element [%d][%d]: ", i, j);
               scanf("%d", &arr[i][j]);
       }
}        
