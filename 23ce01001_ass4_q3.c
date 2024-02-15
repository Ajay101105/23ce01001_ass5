#include<stdio.h>
int main(){
    int cred_scr , cur_bal ;
    float z;
    printf("Enter your credit score: ");
    scanf("%d",&cred_scr);
    printf("Enter your current balance: ");
    scanf("%d",&cur_bal);
    if (cred_scr<600)
    {
        z= cur_bal*0.15;
        printf("Calculated intrest %0.2f",z);
    }
    if (600<cred_scr<750)
    {
        z= cur_bal*0.12;
        printf("Calculated intrest %0.2f",z);
    }
    if (cred_scr>750)
    {
        z= cur_bal*0.10;
        printf("Calculated intrest %0.2f",z);
    }
    return 0;
}