// Write a program to calculate the simple interest.


#include<stdio.h>

int main()

{

int p,r,t;

float si;

printf("enter the principal, rate and time");

scanf("%d%d%d",&p,&r,&t);

si=p*r*t/100;

printf("simple interest is %f",si);

return 0;

}
