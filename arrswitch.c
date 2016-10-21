#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n,t,k,r;
printf("How many elements\n");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("How many times to rotate right :");
scanf("%d",&r);
for(k=0;k<r;k++)
{t=a[n-1];
for(i=n-2;i>=0;i--)
{ a[i+1]=a[i];}
a[0]=t;}
printf("The new array is-\n");
for(i=0;i<n;i++)
{printf("%d\t",a[i]);}
getch();
}
