#include<stdio.h>
main()
{
int n,maxbit,cnt=0,bit,s=0;
scanf("%d",&n);
for(bit=31;bit>=0;bit--)
{

	if((n>>bit)&1){
		s++;
			if(cnt&&s==2){
			printf("gap:%d\n",cnt);s--;}
				cnt=0;
			
	}	
			else
			cnt++;
}
}
