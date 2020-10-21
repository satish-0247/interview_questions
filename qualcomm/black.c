#include<stdio.h>
int stoneBagsize(int input1,int input2,int input3,int input4)
{
int b[input1+input2],w[input1+input2],y[input1+input2],g[input1+input2],t[input1+input2];
int N=1,j=0,k=0,l=0,t1[input1+input2],t2[input1+input2],m=0;
for(i=0,N=1;i<input1+input2;N++)
	if(N%input3==0)
		w[i++]=N;
for(i=0,N=1;i<input1+input2;N++)
	 if(N%input4==0)
		b[i++]=N;
for(i=0,N=1;i<input1+input2;N++)
	 if((N%(input3*input4)!=0)&&(N%input1!=0)&&(N%input2!=0))
		y[i++]=N;


for(i=0;i<input1+input2-1;i++)
	t1[i]=b[i];
t1[i]=y[0];
for(i=0;i<input1+input2-1;i++)
	t1[i]=w[i];
t2[i]=y[0];

for(i=0;i<input1;i++)
	t[m++]=t1[i];
for(i=0;i<input2;i++)
	t[m++]=t2[i];
return m;
}
