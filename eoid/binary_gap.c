#include<stdio.h>
main()
{
int n,maxbit,cnt=0,bit;
scanf("%d",&n);
for(bit=31;bit>0;bit--)
{

	if(((n>>bit)&1))
	{	 bit--;
		while(!((n>>bit)&1)&&bit>=0)
		{
			cnt++;
			bit--;
		}
		if(cnt&&((n>>bit)&1)&&bit>=0){
		printf("gap:%d\n",cnt);
		bit++;}
	}
	cnt=0;
}
}
