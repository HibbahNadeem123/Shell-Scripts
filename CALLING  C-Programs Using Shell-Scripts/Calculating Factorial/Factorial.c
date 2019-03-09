#include <stdio.h>
int main()
{
int x;int factorial=1;
printf("please enter any number\n");
scanf("%d" , &x);
for (int i=1;i<=x;i++)
{ factorial = factorial*i;}
printf("factorial =%d\n",factorial);
return 0;
}
