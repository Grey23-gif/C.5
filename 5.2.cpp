#include <stdio.h>

int main()
{
    int numbertruoc = 45,number;
    printf("Hay doann so nguyen: \n");
    
    do
    {
        printf("Nhap mot so: ");
        scanf("%d", &number);

        if (number != numbertruoc) 
        {
            printf("Sai roi! Hay thu lai.\n");
        }
    } 
    while (number != numbertruoc);
    
    printf("Ban da doan dung so: %d ",number);
    

    return 0;
}

