//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float input()
{
				float num;
				printf("Enter the value of h,d and b in the respective order:");
				scanf("%f",&num);
				return num ;
}
float volume(float h,float d, float b)
{
				float volume;
				volume=(((h * d * b) + (d / b)) / 3);
				return volume;
}
float output(float volume)
{
				printf("volume of tramboloid is  %f",volume);
}
int main()
{
				float h,d,b,v;
				h=input();
				d=input();
				b=input();
				v=volume(h,d,b);
				output(v);
				return 0;
}
