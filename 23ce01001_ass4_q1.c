#include<stdio.h>
int main(){
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    switch (x%2)
    {
    case 0:   
        printf("Number is even");
        break;
    case 1:
        printf("Number is odd");
        break;
    }
    return 0;
}