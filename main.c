#include<stdio.h>
#define N 10
#include"my_mat.h"



int main(){

long matrix[N][N];
int i,j;
char ch;
do{
printf("Put any Char: ");
scanf("%c",&ch); 

switch (ch)
{
case 'A':
    funcA(matrix);
    break;
case 'B':
scanf("%d%d",&i,&j);
    funcB(i,j,matrix);
    break;
case 'C':
scanf("%d%d",&i,&j);
    funcC(i,j,matrix);
    break;

default:
    break;
}

}while (ch!='D');



}
