#include<stdio.h>

#define endian_macro(n) n<<8|n>>8
int main()
{
short int n=1;
n=endian_macro(n);
printf("%hd\n",n);
}
