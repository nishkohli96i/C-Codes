
#include<stdio.h>


void primefact(int a)
{
	int q,i=2,j=0;
	q=a;

while(q!=1)
{
	 while(q %i == 0)
	 {
      
	   printf(" \t %d ",i);
	   q=q/i;
          j++;
	 }
   i++;

}
}

int main()
{
	int n,a[50];
	printf("\n Enter a number \n ");
	scanf("%d",&n);
    printf(" The prime Factors of %d are :\n",n);
  primefact(n);

   return 0;
}
