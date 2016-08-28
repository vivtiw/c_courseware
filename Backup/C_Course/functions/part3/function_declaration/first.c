/*

This example shows how to declare functions  

Author	:  Vivek Tiwari
Usage	:
	   return_type function_name(formal list)
	   {
		function body;
		return exp;	
	   }
	   formal list are argument list of any type 	
	   Default return type of a function is int
	   return statement can be use to return any value we desired explicitly 
	   exp : any c valied expression	 	
Version	: 1.0

*/
#include<stdio.h>

//return type function_name(formal argument list);
int add(int,int); // Function Declaration
double mnop;
int main()
{
	int a,b;
	printf("\n Enter any Two numbers : ");
	 scanf("%d%d",&a,&b);
	printf("\n Value returned by add : %d\n",
	add("asd","asd"));  // a,b are actual arguments
	
}

int add(int x,int y)  //  x,y are formal arguments	Function definition
{
	return x+y;
}
