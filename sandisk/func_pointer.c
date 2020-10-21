#include<stdio.h>
#include<stdlib.h>
void add(int a,int b)
{
printf("%d\n",a+b);
}
void sub(int a,int b)
{
printf("%d\n",a-b);
}
void mul(int a,int b)
{
printf("%d\n",a*b);
}
void divi(int a,int b)
{
printf("%d\n",a/b);
}
int main()
{
void (*ptr[4])(int,int)={add,sub,mul,divi};
int n;
while(1)
{
printf("0:add 1:sum 2:mul 3:divi\n");
scanf("%d",&n);
(*ptr[n])(2,3);
}
}
