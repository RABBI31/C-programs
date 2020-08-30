#include<stdio.h>
main()
{
    int a,b,c,d,e;
    scanf("%d$d%d%d%d",&a,&b,&c,&d,&e);
    b=a/1;
    printf("all digit %d\n",b);
    c=b%1000;
    printf("all expecpt first digit %d\n",c);
    d=c%100;
    printf("all except frst two digit %d\n",d);
    e=d%10;
     printf("all except frst three digit %d\n",e);
}
