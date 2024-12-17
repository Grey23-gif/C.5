#include <stdio.h>

int main()
{
    int  number,sum;
    printf("Nhap 1 so nguyen duong: ");
    scanf("%d",&number);
    for(int i=1;i<=number;i++)
    {
        sum+=i;
    }
    printf("Tong cac so tu 1 cho den %d la: %d ",number,sum);
    return 0;
}

