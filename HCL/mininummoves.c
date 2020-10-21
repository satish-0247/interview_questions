#include<stdio.h>
int mininumMoves(int arr1_count,int *arr1,int arr2_count,int *arr2)
{
int i,n1,n2,rem1,rem2,cnt=0;
for(i=0;i<arr1_count;i++)
{
	n1=arr1[i];n2=arr2[i];
	while(n1)
	{
	rem1=n1%10;rem2=n2%10;
	
	while(rem1!=rem2){
	if(rem1<rem2)
		rem1++;
	else
		rem1--;

	cnt++;
	}
	n1/=10;n2/=10;
}
}
return cnt;
}
int main()
{
int a1[2]={1234,4321};
int a2[2]={2345,3214};
printf("%d\n",mininumMoves(2,a1,2,a2));
}
