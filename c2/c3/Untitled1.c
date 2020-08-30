#include<stdio.h>
main()
{
    int x,y,z,a;
    printf("x:");
    scanf("%d",&x);
    printf("y:");
    scanf("%d",&y);
    printf("z:");
    scanf("%d",&z);
    a=x;
    printf("%d",y);
    x=y;
    printf("%d",z);
    z=a;
    printf("%d",a);

}
