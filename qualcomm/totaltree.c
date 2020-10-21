#include<stdio.h>
int totaltrees(int input1,int input2)	
{
int i,tot=0;
for(i=0;i<input1;i++)
	tot=tot+(2+1)%input2;
return tot;
}
int main()
{

printf("%d\n",totaltrees(1,2));

}
