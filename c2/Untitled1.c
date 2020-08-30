#include<stdio.h>
main()
{
    float n,sum;
    printf("n:");
    scanf("%f",&n);
    sum=1+(1/n)+1/(n+1)+1/(n+2);
    printf("%f",sum);

}
