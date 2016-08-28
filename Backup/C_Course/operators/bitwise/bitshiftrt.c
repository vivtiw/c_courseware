/*bit right shifting*/
/*The value becomes half for each left shift*/


void printBits(int x)
{
	int i,j;
	for(i=7;i>=0;i--)
	{ 
		j=(x>>i) & 0x01;
		printf("%d",j);
	}	
}
#include<stdio.h>
main()
{
	int num,x,y;
	printf("enter the value\n"); 
	 scanf("%d",&num);
	/*bits before shifting*/
	printf("value before shifting:%d\n",num);
	printBits(num);
	printf("\n");

	num=num>>2;
	printf("value after shifting:%d\n",num);
	printBits(num);
	printf("\n %d \n",num);
}
