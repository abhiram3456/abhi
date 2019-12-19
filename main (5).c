/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int main()
{
    int l=0,num,sum=0,n,r;
    scanf("%d",&n);
    num=n;
    while(n!=10)
    {
        l++;
        n=n/10;
    }
    while(n!=0)
    {
r=n%10;
sum=sum+pow(r,l);
n=n/10;
}
if(num=sum)
printf("%d it is armstrong number");
else
printf("%d not armstrong");
return 0;
}
