
#include<stdio.h>
void printBits(int x)
{
	int i,j;
	for(i=7;i>=0;i--)
	{ 
		j=(x>>i) & 0x01;
		printf("%d",j);
	}	
}
main()
{
	int i,j,k;
	char a=13,b=15,c=7;
	/*******displaying bit by bit form of values *******/
	printf("binform of a=");
	printBits(a);

	printf("\n");
	printf("binform of b=");
	printBits(b);
	printf("\n");
	printf("binform of c=");
	printBits(c);


	k=a&0xf8;	/* 0xf8 = 248*/
	printf("\nAfter masking first 3 bits in a \nBinform =");
	for(i=7;i>=0;i--)
	{ 
		j=(k>>i)&0x01;
		printf("%d",j);
	}

	k=c&0xf1;	/* 0xf1 = 241 */
	printf("\nAfter masking bits from position 1 to 3 in c \nBinform =");
	for(i=7;i>=0;i--)
	{ 
		j=(k>>i)&0x01;
		printf("%d",j);
	}

	k=b&0xf0;	/* 0xf0 = 240 */
	printf("\nAfter masking first four bits in b \nBinform =");
	for(i=7;i>=0;i--)
	{ 
		j=(k>>i)&0x01;
		printf("%d",j);
	}
}
