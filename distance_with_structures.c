//WAP to find the distance between two points using structures and 4 functions.
#include <stdio.h>
#include <math.h>

struct Point
{
				int x, y;
};


float distance(struct Point p, struct Point q)
{
				float distance;
				distance = sqrt((p.x - q.x) * (p.x - q.x) + (p.y-q.y) *(p.y-q.y));
				return distance;
}



int main()
{
				struct Point p, q;
				printf("Enter coordinate of point p: ");
				scanf("%d %d", &p.x, &p.y);
				printf("Enter coordinate of point q: ");
				scanf("%d %d", &q.x, &q.y);
				printf("Distance between p and q: %f\n", distance(p, q));
}
