#include<stdio.h>
#include<string.h>

int reduce(int input1,int input2[])
{
int i=0,cnt,j;
int b[input1];
for(i=0;i<input1-1;i++)
{
if((input2[i]<0)&&(input2[i+1]<0))
{
if(input2[i]>=input2[i+1])
{
for(j=i+1;j<input1-1;j++)
input2[j]=input2[j+1];
}
else{
for(j=i;j<input1-1;j++)
input2[j]=input2[j+1];
}
i--;
input1--;
}
}

for(i=0;i<input1;i++)
sum=sum+input2[i];

for(i=0;i<input1;i++)
{


}
int main()
{
int a[]={-1,-9,2,5,-4,-7};
printf("b:%d\n",reduce(6,a));
}
