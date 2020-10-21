#include<stdio.h>
int friendGroups(int input1)
{

int x,i,j,n=0,cnt=0;
x=(input1+1)/2;

for(i=x+1;i<=input1+1;i++)
{
	for(j=2;j<i;j++)
		if(i%j==0)
			cnt++;


	if(cnt==0)
		n++;
	cnt=0;
}
return n+1;
}

int main()
{
printf("%d\n",friendGroups(10));
}
