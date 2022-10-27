#include<stdio.h>
int main()
{
    int x;
    printf("enter no of day");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("energetic day");
        break;

        case 2:
        printf(" foodie day");
        break;

        case 3:
        printf(" boring day");
        break;

        case 4:
        printf("normal day");
        break;

        case 5:
        printf("last day of colllege ");
        break;

        case 6:
        printf("coding day");
        break;

        case 7:
        printf(" rest day");
        break;

        default:
        printf("invalid no");
    }
    return 0;

    }

