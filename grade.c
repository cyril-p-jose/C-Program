/* Write a program to take input as marks of 5 subjects.find total and calculate percentage.On the basis of percentage provide grade like:

If Per>80 “A+”

Per>=65andper<=80 “A”

Per>=50andper<=65 “B”

Per>=42andper<=50 “C”

Per<42 “Fail”*/


#include<stdio.h>



void main()

{

int a,b,c,d,e,total;

float per;

printf("enter your marks");

scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

total=a+b+c+d+e;

printf("\ntotal marks is%d\n",total);

per=total*100/(5.0*100);

printf("percent is%f\n",per);

if(per>80)

printf("A+");

else

{

if(per>=65&&per<=80)

printf("A");

else

{

if(per>=50&&per<=65)

printf("B");

else

{

if(per>=42&&per<=50 )

printf("C");

else

printf("Fail");

}

}

}

}
