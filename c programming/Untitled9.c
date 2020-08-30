#include<stdio.h>
#include<math.h>
main()
{
    int x1,x2,y1,y2,D;
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    D=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%.2d",D);
    return 0;
}
