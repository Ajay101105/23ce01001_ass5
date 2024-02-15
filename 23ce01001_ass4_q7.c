#include<stdio.h>
int main(){
    int x;
    printf("Enter age: ");
    scanf("%d",&x);
    if (x>0 && x<5)
    {
        printf("Entry is for free");
    }
    else if(x>4 && x<13)
    {
        printf("Ticket price is 20 ");
    }
    
    else if (x>12 && x<60)
    {
        printf("Ticket price is 50 ");
    }
    else if (x>59)
    {
        printf("Ticket price is 40 ");
    }
    return 0;
}