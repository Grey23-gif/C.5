#include <stdio.h>

int main()
{
    for(int i=1;i<10;i++)
    {
        printf("\nBang cuu chuong cua so %d\n",i);
        for(int j=1;j<=10;j++)
        {
            printf("%d*%d \n",i,j);
        }
    }
    
    return 0;
}

