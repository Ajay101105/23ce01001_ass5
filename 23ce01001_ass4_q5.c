#include<stdio.h>
int main(){
    int num;
    int w,x,y,z;
    printf("Enter a three digit number: ");
    scanf("%d",&num);
    if(num>=100 && num<=999)
    {
        x = num%10;
        y = (num/10)%10;
        z = num/100;
        w = ((x*x*x)+(y*y*y)+(z*z*z));
        if (w==num)
        {
            printf("%d is a Armstrong number",num);
            
        }
        else{
            printf("%d is not a Armstrong number",num);
            
        }
    }
    else
    {
        printf("Incorrect input");
    }
    

    return 0;
}

