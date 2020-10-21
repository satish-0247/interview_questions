#include<stdio.h>
char* inc_lastchar(int n)
{
static char str[20];
int i,rslt=1,j,cnt=0;
while(n)
	rslt=rslt*n--;
n=rslt;
while(n)
{
	n/=10;
	cnt++;
}
for(j=cnt-1;j>=0;j--,rslt/=10)
	str[j]=rslt%10+48;
return str;
}
int main()
{
int n=5;
char *ptr;
ptr=inc_lastchar(n);
printf("%s\n",ptr);
}
