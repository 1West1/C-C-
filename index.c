#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/* 2.16 */
void twoNumber() 
{
	int x, y, z;

	scanf("%d %d", &x, &y);

	z = x + y;
	printf("+ %d \n", z);
	z = x * y;
	printf("* %d \n", z);
	z = x - y;
	printf("- %d \n", z);
	z = x / y;
	printf("/ %d \n", z);
	z = x % y;
	printf(" %d \n", z);
}

/* 2.17 */
void oneFour() 
{
	for (int i = 1; i <= 4; i++) {
		printf("i");
	}

	/*printf("1, 2, 3, 4 \n");
	printf("%d, %d, %d, %d \n", 1, 2, 3, 4);
	printf("1");
	printf("2");
	printf("3");
	printf("4 \n");*/
}

/* 2.18 */
void inputTwoNumber() 
{
	int x, y;

	scanf("%d %d", &x, &y);
	if (x > y) {
		printf("%d is larger %d \n", x, y);
	} else if (x == y) {
		printf("These numbers are equal \n");
	} else {
		printf("%d is larger %d \n", y, x);
	}
}

/* 2.19 */
void threeDifferentInt() 
{
	int x, y, z, answer;

	scanf("%d %d %d", &x, &y, &z);

	printf("Input three different integers: %d %d %d \n", x, y, z);
	printf("Sum is: %d \n", answer = x + y + z);
	printf("Awerage is: %d \n", answer = (x + y + z)/3 );
	printf("Product is: %d \n", answer = x * y * z );

	if (x < y && x < z) {
		printf("Smalest is: %d \n", x);
	} else if (y < x && y < z) {
		printf("Smalest is: %d \n", y);
	} else if (z < x && z < y) {
		printf("Smalest is: %d \n", z);
	}

	if (x > y && x > z) {
		printf("Largest is: %d \n", x);
	} else if (y > x && y > z) {
		printf("Largest is: %d \n", y);
	} else if (z > x && z > y) {
		printf("Largest is: %d \n", z);
	}
}

/* 2.20 */
void viewRadiusDiameter() 
{
	int r;
	float answer;
	float pi = 3.14;
	scanf("%d", &r);

	printf("Diametr: %f \n", answer = 2 * r);
	printf("Perimetr: %f \n", answer = 2 * r * pi);
	printf("Area: %f \n", answer = pi * pow(r, 2));
}

/* 2.21 */
void rectangle() 
{
	printf("*********\t   ***   \t  *  \t\t    *    \n");
	printf("*       *\t *     * \t *** \t\t   * *   \n");
	printf("*       *\t*       *\t*****\t\t  *   *  \n");
	printf("*       *\t*       *\t  *  \t\t *     * \n");
	printf("*       *\t*       *\t  *  \t\t*       *\n");
	printf("*       *\t*       *\t  *  \t\t *     * \n");
	printf("*       *\t*       *\t  *  \t\t  *   *  \n");
	printf("*       *\t *     * \t  *  \t\t   * *   \n");
	printf("*********\t   ***   \t  *  \t\t    *    \n");
}

/* 2.22 */
/* 2.23 */
void maxMin() 
{
	int x, y, z, a, b;

	scanf("%d%d%d%d%d", &x, &y, &z, &a, &b);

	/* Max */
	if (x > y && x > z && x > a && x > b)
		printf("Max: %d\n", x);

	if (y > x && y > z && y > a && y > b)
		printf("Max: %d\n", y);

	if (z > x && z > y && z > a && z > b)
		printf("Max: %d\n", z);

	if (a > x && a > y && a > z && a > b)
		printf("Max: %d\n", a);

	if (b > x && b > y && b > z && b > a)
		printf("Max: %d\n", b);

	/* Min */
	if (x < y && x < z && x < a && x < b)
		printf("Min: %d\n", x);

	if (y < x && y < z && y < a && y < b)
		printf("Min: %d\n", y);

	if (z < x && z < y && z < a && z < b)
		printf("Min: %d\n", z);

	if (a < x && a < y && a < z && a < b)
		printf("Min: %d\n", a);

	if (b < x && b < y && b < z && b < a)
		printf("Min: %d\n", x);

}

/* 2.24 */
void evenNotEven() 
{
	int num;
	
	scanf("%d", &num);

	if (num % 2 == 0) {
		printf("Четное %d\n", num);
	} else {
		printf("Не четное %d\n", num);
	}
}

/* 2.25 */
void SMS() {
	printf("  SSSSSSSS\n");
	printf(" S        \n");
	printf("S         \n");
	printf(" S        \n");
	printf("  SSSSSS  \n");
	printf("        S \n");
	printf("         S\n");
	printf("        S \n");
	printf("SSSSSSSS  \n\n\n");

	printf("MM     MM\n");
	printf("M M   M M\n");
	printf("M  M M  M\n");
	printf("M   M   M\n");
	printf("M       M\n");
	printf("M       M\n");
	printf("M       M\n");
	printf("M       M\n");
	printf("M       M\n\n\n");

	printf("  SSSSSSSS\n");
	printf(" S        \n");
	printf("S         \n");
	printf(" S        \n");
	printf("  SSSSSS  \n");
	printf("        S \n");
	printf("         S\n");
	printf("        S \n");
	printf("SSSSSSSS  \n");
}

/*2.26*/
void multiple() 
{
	int x, y;

	scanf("%d%d", &x, &y);

	if (x % y == 0) {
		printf("%d кратно %d", x, y);
	}
}

/* 2.27 */
void chessBoard() 
{
	for (int i = 0; i < 8; i++) {
		if (i % 2 == 0) {
			printf("* * * * * * * *\n");
		} else {
			printf(" * * * * * * * *\n");
		}
	}
}

/* 2.28 */
/* 2.29 */
void wholeNumber() 
{
	int A, B, C, a, b, c;

	printf("%d\n", A);
	printf("%d\n", B);
	printf("%d\n", C);
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("%d\n", 0);
	printf("%d\n", 1);
	printf("%d\n", 2);
	printf("%d\n", *"$");
	printf("%d\n", *"*");
	printf("%d\n", *"+");
	printf("%d\n", *"/");
	printf("%d\n", *" ");
}

/* 2.30 */
void readingNumber() 
{
	int num;

	scanf("%d", &num);

	printf("%d\t%d\t%d\t%d\t%d\n", num/10000, (num/1000)%10, (num/100)%10, (num/10)%10, num%10);
}

/* 2.31 */
int numberSquareCube() 
{
	for (int i = 0; i <= 10; i++) {
		printf("%d\t%d\t%d\n", i, i*i, i*i*i);
	}
}

int averageValue() 
{
	float average;
	int counter, grade, total; 

	counter = 0;
	total = 0;

	scanf("%d", &grade);

	while (grade != -1) {
		total = grade + total;
		counter = 1 + counter;
		printf("Enter grade to -1\n");
		scanf("%d", &grade);
	}

	if (counter != 0) {
		average = (float) total / counter;
		printf("Result: %.2f", average);
	} else {
		printf("No grades were enteres");
	}

	return 0;
}

int counterPassedExam() 
{
	int passes = 0, failures = 0, counter = 1, result;

	while (counter <= 10) {
		scanf("%d", &result);

		if (result == 1) 
			passes = passes + 1;
		else 
			failures = failures + 1;

		counter = counter + 1;
	}

	printf("Количество сданных екзаменов: %d\n", passes);
	printf("Количество несданных екзаменов: %d\n", failures);

	if (passes > 8) 
		printf("Повысить плату за курс.\n");

	return 0;
}

int main() 
{ 
	int c = 5;
	printf("%d\n", c);
	printf("%d\n", ++c);
	printf("%d\n", c);

	c = 5;
	printf("%d\n", c);
	printf("%d\n", c++);
	printf("%d\n", c);
}









 
