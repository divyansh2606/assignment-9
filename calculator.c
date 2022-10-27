#include<stdio.h>
int main()
{
    int  x,a,b;
    printf("\n 1.addition");
    printf("\n 2.substraction");
    printf("\n 3.multiplication");
    printf("\n 4.division");
    printf("\n 5.exit");
    printf("\n enter no");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
    printf("enter 2  no");
    scanf("%d%d",&a,&b);
    printf("sum is %d",a+b);
       break;
    case 2:
    printf("enter 2  no");
    scanf("%d%d",&a,&b);
    printf("difference is %d",a-b);
       break;
    case 3:
    printf("enter 2  no");
    scanf("%d%d",&a,&b);
    printf("multiplication is %d",a*b);
      break;
     case 4:
    printf("enter 2  no");
    scanf("%d%d",&a,&b);
    printf("division is %d",a/b);
    break;
    case 5:
    exit(0);
    break;
    default:
        printf("invalid no");

        }

return 0;
}
