#include <stdio.h>
 
void hoanvi(int a, int b,int c) 
{
    int temp = a;
    a = b;
    b=c; 
    c = temp;
}
 
int main()
{
    int a, b,c;
    printf("Nhap 3 so a, b,c:\n");
    scanf("%d%d%d", &a, &b,&c);
 
    printf("Ban da nhap:\na = %d \nb = %d\nc = %d\n", a, b,c);
 
    hoanvi(a, b,c);
 
    printf("Sau khi goi ham hoanvi:\na = %d\nb = %d\nc = %d \n", a, b,c);
    return 0;
}
