#include<stdio.h>
#define infinty 2147483647
#include "my_mat.h"
#define N 10

void funcA(int mat[][N]){

for (size_t i = 0; i < N; i++)
{
    for (size_t j = 0; j < N; j++)
    {
        scanf("%d",&mat[i][j]);
    }
        
}

}

int min(int x,int y){


return (x>=y)?y:x;

}


void Smallest(int arr[N][N]){

printf("original matrix: ");
  printMatrix(arr);
    printf("\n\n\n");

for (size_t k = 0; k<N; k++)
{
    

    for (size_t i = 0; i<N; i++)
    {
        for (size_t j = 0; j<N; j++)
        {
            arr[i][j]=min(arr[i][j], arr[i][k]+ arr[k][j]);
        }
        
    }
   
   printf("%ld :",k);
    printf("\n");
    printMatrix(arr);
    printf("\n\n\n");
   
}

   

}




void funcB(int i,int j,int arr[][N]){
if (arr[i][j]!=0)
{
    printf("True\n");
}
else{
    printf("False\n");
}

}


void funcC(int i,int j,int arr[][N]){
if (arr[i][j]!=0)
{
     printf("%d",arr[i][j]);
      
     printf("\n");
}
else{
     printf("%d",-1);
     printf("\n");
}

}






