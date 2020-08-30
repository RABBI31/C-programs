#include<stdio.h>
main()
{
    float F, C;
    printf("Enter the value of temperature\n");
    scanf("%f",F);
    scanf("f",&C);
    C=(5*(F-32)/9);
    printf("%.2f",C);
}
