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




for (size_t k = 0; k<N; k++)
{

    for (size_t i = 0; i<N; i++)
    {
        for (size_t j = 0; j<N; j++)
        {

            if (arr[i][k]>0 && arr[k][j]>0){
            arr[i][j]=min(arr[i][j],(arr[i][k]+ arr[k][j]));   
            }

        }
        
    }
   



   
   
}

   

}




void funcB(int i,int j,int arr[][N]){
if (i!=j)
{
    printf("True\n");
}
else{
    printf("False\n");
}

}


void funcC(int i,int j,int arr[][N]){


if (i==j)
{
    printf("%d",-1);
    printf("\n");
}
else{
    printf("%d",arr[i][j]);
        printf("\n");
}


}






