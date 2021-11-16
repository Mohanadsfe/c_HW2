#include<stdio.h>
#define infinty 2147483647
#include "my_mat.h"




long min(long x,long y){


return (x>=y)?y:x;

}


void Smallest(long arr[][N]){


for (size_t k = 0; k<N; k++)
{
    for (size_t i = 0; i<N; i++)
    {
        for (size_t j = 0; j<N; j++)
        {
            arr[i][j]=min(arr[i][j], arr[i][k]+ arr[k][j]);
        }
        
        
    }
   
}

}

void funcA(long mat[][N]){

for (size_t i = 0; i < N; i++)
{
    for (size_t j = 0; j < N; j++)
    {
        scanf("%ld ",&mat[i][j]);
    }
        
}

}


void funcB(int i,int j,long arr[][N]){
Smallest(arr);
if (arr[i][j]!=0)
{
    printf("True");
}
else{
    printf("False");
}

}


void funcC(int i,int j,long arr[][N]){
Smallest(arr);
if (arr[i][j]!=0)
{
     printf("%ld",arr[i][j]);
}
else{
     printf("%d",-1);
}

}






