int main()
{
   int x;
   printf("enter no");
   scanf("%d",&x);

   switch(x%100==0)
   {  case 1: switch(x%400==0)
   { case 1:printf("leap year");
     break;
     case 0:printf("non leap year");
     break;
   }
   break;

   case 0: switch (x%4==0)
   {
   case 1:printf("leap year");break;
   case 0:printf("non leap year");break;
   }
   }  return 0;
}
