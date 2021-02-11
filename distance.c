//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include <math.h>
float input()
{
				float num;
				printf("Enter the point x1, x2, y1, y2 respectively:");
				scanf("%f",&num);
				return num ;
}
float distance(float x1,float x2, float y1,float y2)
{
				float distance;
				distance= sqrt((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
				return distance;
}
float output(float x1,float x2, float y1,float y2, float distance)
{
				printf("The distance between %f,%f and %f,%f is %f\n",x1,y1,x2,y2,sqrt(distance));
}
int main()
{
				float x1,x2,y1,y2,d;
				x1=input();
				x2=input();
				y1=input();
				y2=input();
				d=distance(x1,x2,y1,y2);
				output(x1,x2,y1,y2,d);
				return 0;
}
