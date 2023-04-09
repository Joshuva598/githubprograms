#include<stdio.h>
#include "div.h"
int main()
{
	int i=3,j=4;
	int result;
	div(i,j);
	result=div(i,j);
	printf("result=%d",result);
	return 0;
}
