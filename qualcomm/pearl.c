#include<stdio.h>
int find_sol(int input1,int input2,int input3)
{
int i,sum=0;
for(i=0;i<input1;i++)
sum=sum+2+i;
return sum;
}
int main()
{
int input1=3,input2=8,input3=9;
printf("%d\n",find_sol(input1,input2,input3));
}
