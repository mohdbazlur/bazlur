//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int main ()
{
		float h, d, b, volume;
		printf("enter the value of h\n");
		scanf("%f",&h);
		printf("enter the value of d\n");
		scanf("%f",&d);
		printf("enter the value of b\n");
		scanf("%f",&b);
		volume = (((h*d*b)+(d/b))/3);
		printf("volume of the trombone given is %f \n",volume);
		return 0;
}
