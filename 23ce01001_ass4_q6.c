#include<stdio.h>
int main(){
    int a,b,x;
    printf("Enter number a: ");
    scanf("%d",&a);
    printf("Enter number b: ");
    scanf("%d",&b);
    printf("Enter 1 for addition\n");
    printf("Enter 2 for substraction\n");
    printf("Enter 3 for multiplication\n");
    printf("Enter 4 for division\n");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        printf("%d + %d = %d ", a ,b ,a+b);
        break;
    case 2:
        printf("%d - %d = %d ", a ,b ,a-b);
        break;
    case 3:
        printf("%d * %d = %d ", a ,b ,a*b);
        break;
    case 4:
        printf("%d / %d = %d ", a ,b ,a/b);
        break;
    
    default:
        printf("Invalid input");
        break;
    }
}