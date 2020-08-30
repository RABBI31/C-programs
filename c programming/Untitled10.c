#include<stdio.h>
#include<math.h>
#define pi 3.1416
main()
{
    int x1=0,x2=4,y1=0,y2=5;
    float D,r,P,A;
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    Printf("Enter the value of diametre");

    D=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%d",D);
    scanf("%f%f%f%f",&D,&r,&P,&A);

    printf("Enter the value of radius");

    r=D/2;
    printf("%f",r);
    printf("enter the value of circumference");

    P=2*pi*r;
    printf("%f",P);

    printf("Enter the value of Area");
    A=pi*r*r;
    printf("%f",A);

}
