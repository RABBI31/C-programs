#include<stdio.h>
 void main()
{
 int SmallNo,LargeNo;
 float RealNo;
 printf("Enter the real no.");
 scanf("%f",& RealNo);

 SmallNo=RealNo;
 LargeNo=RealNo;

 printf("Smallest integer              The given                  Largest integer \n");
 printf("not less then                 number                     not grether then\n");
 printf("the number                                               the number\n");
 printf("   %d                          %.2f                           %d\n",SmallNo,RealNo,LargeNo);
 getch();
}
