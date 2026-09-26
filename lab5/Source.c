#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846
#define k 8.2
#define d 1
double y;
task_one();
task_two();
task_three();
homework();
int main(){
	task_one();
	task_two();
	task_three();
	homework();
}
int task_one() {
	puts("TASK ONE----------------------------------------------------------------------------------------------------------------");
	long double gr;
	long double rad;
	puts("Enter the value in degrees:");
	scanf_s("%lf", &gr);
	rad = gr * M_PI / 180;
	printf("The value in radians:%.6f\n", rad);
}
int task_two(){
	puts("TASK TWO----------------------------------------------------------------------------------------------------------------");
	double x;
	double a;
	puts("Set the value of x:");
	scanf_s("%lf", &x);
	double b = sqrt(fabs(x));
	a = pow(x, 4) + pow(b, 3);
	y = pow(log(a), 3) + exp(-x);
	printf("Value of y: %.6f\n", y);
}
int task_three() {
	puts("TASK THREE--------------------------------------------------------------------------------------------------------------");
	int result;
	double a1;
	double b1;
	puts("Enter A:");
	scanf_s("%lf", &a1);
	puts("Enter B:");
	scanf_s("%lf", &b1);
	int A = (int)floor(a1);
	int B = (int)floor(b1);
	int C = (int)floor(y);
	if ((A % 2 == 0) && (B % 2 == 0)) {
		result = 0;
	}
	else 
	{
		result = 1;
	}
	printf("Result: %d\n", result);
	if ((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0)) {
		result = 1;

	}
	else {
		result = 0;
	}
	printf("Result: %d\n", result);
}
int homework() {
	puts("HOMEWORK----------------------------------------------------------------------------------------------------------------");
	double x1;
	double y1;
	double F;
	puts("Enter x:");
	scanf_s("%lf", &x1);
	puts("Enter y:");
	scanf_s("%lf", &y1);
	F = (pow(cos(y1), 2) + 2.4 * d) / (exp(y1) + log(pow(sin(x1), 2) + 6));
	printf("Result F: %.6f\n", F);
	// Варианты для проверки:
	// 1 Вариант: x = 4, y = 2
	// 2 Вариант: x = 0.0000015, y = -2000000000
}
