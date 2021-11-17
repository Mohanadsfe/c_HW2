#include<stdio.h>
#define N 10
#include"my_mat.h"

void printMatrix(int arr[N][N]){


for (size_t i = 0; i < N; i++)
{
for (size_t j = 0; j < N; j++)
{
   printf("%d  ",arr[i][j]); 
}

printf("\n");

}



}

int main(){

/*long matrix[N][N]={{0,3, 1 ,0, 0 ,2, 0, 0, 0, 0},
                    {3 ,0, 1, 0 ,0, 0 ,0 ,0, 0, 0},
                     {1, 1, 0 ,0 ,0, 0 ,0 ,0, 0, 0},
                      {0, 0 ,0 ,0 ,0, 0, 0, 5, 0, 0},
                        {0, 0 ,0 ,0 ,0, 0 ,0, 4, 1, 1},
                          {2, 0, 0 ,0, 0, 0, 2, 0, 0, 0},
                            {0, 0, 0, 0 ,0, 2, 0, 0, 0, 0},
                                {0 ,0, 0, 5 ,4 ,0 ,0, 0, 0, 2},
                                   {0 ,0 ,0, 0, 1, 0, 0, 0, 0, 0},
                                      {0 ,0, 0, 0, 1, 0 ,0 ,0, 0, 0}};*/

    
int matrix[N][N];
/*printMatrix(matrix);
printf("\n\n\n");
printMatrix(matrix);*/
//Smallest(matrix);

static int counter=0;
char ch;

do{

ch=getchar();


switch (ch)
{
case 'A':{
    funcA(matrix);
    Smallest(matrix);
    }
    break;
case 'B':{
    int i,j;
    scanf("%d%d",&i,&j);
    funcB(i,j,matrix);
 }
    break;
case 'C':{
    int x,y;
    scanf("%d%d",&x,&y);
    funcC(x,y,matrix);
}
    break;


//  לשנות מ switch ל jump בין המצבים 

default:
{
    counter=counter+1;
    printf("\n\n\n");
    printf("%c",ch);    
    printf("\n\n\n");
}
    break;
}

}while (ch!='D');

//printf("%d",counter);

}
