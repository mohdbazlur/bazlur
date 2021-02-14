//WAP to find the distance between two points using structures and 4 functions.
#include <stdio.h>
#include <math.h>
struct point
{
		float x;
		float y;
};
typedef struct point Point;
Point input()
{
		Point a;
		printf("Enter the value of the coordinate x % lf: ");
		scanf("%f",&a.x);
		printf("Enter the value of the coordinate y % lf:");
		scanf("%f",&a.y);
		return a;
}
float compute(Point a1,Point a2)
{
		float distance;
		distance=sqrt(pow((a1.x-a2.x),2)+pow((a1.y-a2.y),2));
		return distance;
}
void output(Point a1, Point a2, float dist)
{
		printf("The distance between %f,%f and %f,%f is %f",a1.x,a1.y,a2.x,a2.y,dist);
}
int main(void)
{
		float dist;
		Point a1,a2;
		a1=input();
		a2=input();
		dist=compute(a1,a2);
		output(a1, a2, dist);
		return 0;
}

