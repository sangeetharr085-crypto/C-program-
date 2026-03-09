/*simple calculator*/
#include<stdio.h>
#include<conio.h>
int main()
{
   char op;
   int first,second;
   clrscr();
   printf("enter the operator(+,-,*,/):);
   scanf("%c",&op);
   printf("enter two operands:");
   scanf("%d %d",&first,&second);
   switch(op)
   {
     case '+':
     printf("%d + %d = %d",first,second,first + second);
     break;
     case'-':
     printf("%d - %d = %d",first,second,first-second);
     break;
     case'*':
     printf("%d * %d = %d",first,second,first * second);
     break;
     case'/':
     printf("%d / %d = %d",first,second,first / second);
     break;
     default:
     printf("error ! operation is not correct");
     }
     getch();
     return 0;
}
