#include<stdio.h>
int coverage(int input1,int **input2)
{
int x=0,y=0,i;

	for(i=0;i<input1;i++)
	{
	
	x= input2[i][1]-input2[i][0];
	if(i<input1-1)
	y= input2[i][1]-input2[i+1][0];

	}
return x-y;

}
int main()
{
int p[][2]={5,10,8,12};
ptr
printf("%d\n",coverage(2,p));
}


