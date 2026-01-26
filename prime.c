#include<stdio.h>
void main()

{

int n,i;

printf("enter a number");

scanf("%d",&n);

for(i=2;i<=n-1;i++)

{

if(n%i==0)

{

printf("not a prime number");

break;

}

}

if(i==n)

printf("prime number");
} 
