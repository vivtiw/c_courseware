#include<stdio.h>
int main(int argc, char **argv)
{
   int p, q, r, s;
   const char* formula = " ((p OR q) AND (NOT p OR r) AND (q Equal s)) F false 1 :(r  OR s)\n";
   const char* blank = " ";
   printf("p q r s "); 
   printf(formula);
   for ( p = 1; p >= 0; p-- )
	   for ( q = 1; q >= 0; q-- )
		   for ( r = 1; r >= 0; r-- )
			   for ( s = 1; s >= 0; s-- ) {
				   int f = ((p || q) && (!p || r) && (q==s));
  				//   f = (f==0) ? 1 : (r || s);
   			    f = !f || (r || s); // Alternative implementation of IMP
   			   printf("%d %d %d %d",p,q,r,s); printf(blank); printf("\t%d",f);printf("\n");
   			}
   return (0);
}
