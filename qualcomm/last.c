#include<stdio.h>
int lastModified(int input1,int input2[])
{
int i=0;
for(i=input1-1;i>=0;i--)
if(!(input2[i]>=9))
	return i+1;
return 0;
}
int main()
{
int a[5]={1,2,9,9,9};
printf("%d\n",lastModified(5,a));
}
