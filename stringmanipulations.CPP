#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
int wrdlen(char m[50])
{
int h,f=0;
for(h=0;m[h]!='\0';h++)
{
f++;}
return f;
}
char dispVOW(char m[50])
{
int i,count;
for(i=0;i<wrdlen(m);i++)
{if(m[i]=='a'||m[i]=='i'||m[i]=='o'||m[i]=='e'||m[i]=='u'||m[i]=='A'||m[i]==
'E'||m[i]=='I'||m[i]=='O'||m[i]=='U')
{
cout<<m[i];
count++;}
}
return count;}
void toggle(char s[50])
{
int i;
for(i=0;i<wrdlen(s);i++)
{if(s[i]>=65 && s[i]<=90)
s[i]=s[i]+32;
else
if(s[i]>=97 && s[i]<=122)
s[i]=s[i]-32;}
puts(s);
}
void main()
{
char a[50],b[50],p,q;
int i,c,d,k;
clrscr();
cout<<"\t\t\t\t\t\a PART-A"<<endl;
cout<<"enter string 1"<<endl;
gets(a);
cout<<"enter string 2"<<endl;
gets(b);
cout<<"the strings entered are"<<endl;
puts(a);
cout<<endl;
puts(b);
cout<<endl;
cout<<"lengths of strings are"<<endl;
c=wrdlen(a);
cout<<c<<endl;
d=wrdlen(b);
cout<<d<<endl;
cout<<"\t\t\t\\t\t\t\t PART-B"<<endl;
cout<<"vowels in the strings are"<<endl;
dispVOW(a);
cout<<endl;
dispVOW(b);
cout<<"\t\t\t\t\t\t\t PART-C"<<endl;
cout<<"toggled strings are"<<endl;
toggle(a);
cout<<endl;
toggle(b);
cout<<endl;
getch();
}