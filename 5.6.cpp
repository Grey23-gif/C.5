#include <stdio.h>

int main()
{
    int choice;
    float n1,n2;
    printf("CALCULATOR ");
    printf("\n1. Tong 2 so ");
    printf("\n2. Hieu 2 so");
    printf("\n3. Tich 2 so ");
    printf("\n4. Thuong 2 so ");
    printf("\n5. Thoat ");
    do
    {
    printf("\nVui long chon: ");
    scanf("%d",&choice);
    switch(choice)
    {
            case 1: 
                printf("Nhap vao so 1: ");
                scanf("%f", &n1);
                printf("Nhap vao so 2: ");
                scanf("%f", &n2);
                printf("Tong cua 2 so la: %.2f\n", n1 + n2);
                break;

            case 2: 
                printf("Nhap vao so 1: ");
                scanf("%f", &n1);
                printf("Nhap vao so 2: ");
                scanf("%f", &n2);
                printf("Hieu cua 2 so la: %.2f\n", n1 - n2);
                break;

            case 3: 
                printf("Nhap vao so 1: ");
                scanf("%f", &n1);
                printf("Nhap vao so 2: ");
                scanf("%f", &n2);
                printf("Tich cua 2 so la: %.2f\n", n1 * n2);
                break;

            case 4: 
                printf("Nhap vao so 1: ");
                scanf("%f", &n1);
                printf("Nhap vao so 2: ");
                scanf("%f", &n2);
                if (n2 != 0) 
                {
                    printf("Thuong cua 2 so la: %.2f\n", n1 / n2);
                } 
                else 
                {
                    printf("Loi: Khong the chia cho 0!\n");
                }
                break;

            case 5: 
                printf("Thoat chuong trinh. Hen gap lai!\n");
                break;

            default:
                printf("Lua chon khong hop le! Vui long nhap lai.\n");
        }
    
    
    }
    while(choice!=5);
    return 0;
}

