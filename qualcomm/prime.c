#include<stdio.h>
#include<math.h>
long getIdealNums(int low,int high)
{
int cnt=0,i=0,j=0,c;
for(i=0;(pow(3,i)*pow(5,j))<=high;i++,j=0)
{
for(j=0;(pow(3,i)*pow(5,j))<=high;j++)
{
	c=pow(3,i)*pow(5,j);
	if(c>=low&&c<=high)
		cnt++;


}
}
return cnt;
}
int main()
{
printf("%d\n",getIdealNums(200,405));
}
