#include <stdio.h>

int main()
{
    int  number;
    printf("Nhap 1 so nguyen duong tu 1 den 10: ");
    scanf("%d",&number);
    if(number>0 && number<11)
    {
        printf("\nBang cuu chuong cua so %d la:\n",number);
    for(int i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",number,i,number*i);
    }
    }
    else
    {
        printf("Vui long nhap lai.");
    }
    
    return 0;
}

