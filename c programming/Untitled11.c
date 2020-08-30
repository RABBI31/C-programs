#include<stdio.h>
#include<math.h>
#define pi 3.14
void main()
{
    int x1=0,x2=0,y1=4,y2=5;

    float D,r,P,A;

    D=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("Diameter is:%.2f\n",D);

    r=D/2;
    printf("Redius is:%.2f\n",r);

    P=2*pi*r;
    printf("Perimeter is:%.2f\n",P);

    A=pi*r*r;
    printf("Area is:%.2f",A);



