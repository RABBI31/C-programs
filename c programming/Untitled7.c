#include<stdio.h>
main()
{
    int x,y,sum,Difference,Product,Division;
    printf("Enter the value of x\n");

    scanf("%d",&x);
     printf("Enter the value of y\n");
    scanf("%d",&y);
    sum=x+y;
    Difference=x-y;
    Product=x*y;
    Division=x/y;
    printf("                                          \n ");
    printf("         |--------|              |--------|\n");
    printf("x=       |   %d   |  y=          |   %d   |\n");
    printf("         |--------|              |--------|\n");
    printf("                                           \n");
    printf("         |--------|              |--------|\n");
    printf(" sum=    |   %d   | Difference=  |   %d   |\n");
    printf("         |--------|              |--------|\n");
    printf("                                          \n");
    printf("         |--------|              |--------|\n");
    printf("Product= |   %d   | Division=    |   %d   |\n");
    printf("         |--------|              |--------|\n");
    return 0;



}
