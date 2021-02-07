//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int main()
{
			float num1, num2, sum;
			printf("enter first number:");
			scanf("%f", &num1);
			printf("enter second number:");
			scanf("%f", &num2);
			sum = num1 + num2;
			printf("sum of %f and %f is %f",num1, num2, sum);
			return 0;
}
