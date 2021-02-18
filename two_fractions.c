//WAP to find the sum of two fractions.
#include<stdio.h>
void input();
void add();
void display();
typedef struct frac
{
			int num,den;
}
frac;
void input()
{
			int num1,num2,den1,den2;
			printf("Enter numerator and denominator of first fraction:\n");
			scanf("%d %d", &num1,&den1);
			printf("Enter numerator and denominator of second fraction:\n ");
			scanf("%d %d", &num2,&den2);
			frac f={num1,den1};
			frac f1={num2,den2};
			add(f,f1);
}
void add(frac f, frac f1)
{
			frac sum={f.num*f1.den+f1.num*f.den, f.den*f1.den};
			display(sum);
}
void display(frac sum)
{
			printf("The sum of the fractions is, %d/%d", sum.num,sum.den);
}
int main()
{
			input();
			return 0;
}
