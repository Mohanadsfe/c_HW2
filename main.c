#include <stdio.h>
#define N 10
#include "my_mat.h"

int main()
{

    int matrix[N][N];
    char ch;
    do
    {
        ch = getchar();
        switch (ch)
        {
        case 'A':
        {
            funcA(matrix);
           
            Smallest(matrix);
        }
        break;
        case 'B':
        {
            int i, j;
            scanf("%d%d", &i, &j);
            if (funcB(i, j, matrix) == 0)
            {
                printf("False\n");
            }
            else{
                printf("True\n");
            }
        }
        break;
        case 'C':
        {
            int x, y;
            scanf("%d%d", &x, &y);
            funcC(x, y, matrix);
        }
        break;
        }

    } while (ch != 'D');
}