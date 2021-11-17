#include<stdio.h>
#define N 10
#include"my_mat.h"


int main(){



    
int matrix[N][N];


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



default:
{
    
    break;
}

}

}while (ch!='D');


}
