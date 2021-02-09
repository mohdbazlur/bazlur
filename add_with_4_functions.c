//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
float input()
{
float num;
			printf("Enter the number:\n");
			scanf("%f",&num);
			return num ;
}
float sum(float num1,float num2)
{
			float sum;
			sum=num1+num2;
			return sum;
}
void output(float x,float y,float num)
{
			printf("Sum of %f and %f is  %f\n",x,y,num);
}
int main()
{
			float a,b,s;
			a=input();
			b=input();
			s=sum(a,b);
			output(a,b,s);
			return 0;
}
