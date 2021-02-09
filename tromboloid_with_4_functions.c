//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float input()
{
				float num;
				printf("Enter the value of h,d and b:");
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
				float h,b,d,v;
				h=input();
				b=input();
				d=input();
				v=volume(h,b,d);
				output(v);
				return 0;
}
