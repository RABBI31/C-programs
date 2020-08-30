#include<stdio.h>
main()
{
    float a,b,c,S,Area;
    printf("Enter the value of Area\n");

    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    scanf("%f",&S);
    Area=sqrt(S*(S-a)*(S-b)*(S-c));
    printf("%f",Area);



}
