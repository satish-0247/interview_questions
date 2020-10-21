#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *findYValue(int n,int k,char *x)
{		
int i=0,temp=0,len,t=0,rslt,max=0;
char *ptr;
len=strlen(x);
for(i=len-1;i>=0;i--,t++)
temp=temp+(x[i]-48)*(1<<t);	
for(i=0;i<n;i++)
{
rslt=(k<<i)^temp;
if(rslt>max)
max=rslt;	
}
ptr=calloc(1,n+1);
for(i=len-1;i>=0;i--)
{
ptr[i]=(max%2+48);
max/=2;
}
return ptr;
}
int main()
{
int n=3,k=1;
char x[10]="101",*ptr;
ptr=findYValue(n,k,x);
printf("%s\n",ptr);
}

