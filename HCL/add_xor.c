#include"header.h"
int main()
{

int a[]={29,36,57},x,y,i;
int b[]={25,18,3},c[3];
for(i=0;i<3;i++)
{
	x=0;y=a[i];
	do{
	if(((x+y)==a[i])&&((x^y)==b[i])||y==0)
	break;
	x++;y--;
	}while(1);
if(y==0)
c[i]=y;
else	
c[i]=2*x+3*y;
printf("%d\n",c[i]);
}
}
