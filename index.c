#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/* 
@SteninMaxim
email: stenin.dev@gmail.com
 */

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

	printf("Количество сданных экзаменов: %d\n", passes);
	printf("Количество несданных экзаменов: %d\n", failures);

	if (passes > 8) 
		printf("Повысить плату за курс.\n");

	return 0;
}

/* --------------------------- */

/* 3.17 */
/*
Псевдокод:

Устанавливаем расход бензина в ноль
Устанавливаем сумму в ноль

Пока расход бензина не равен -1 
	Ввести расход бензина

	Если расход бензина не равен -1 
		Ввести количество пройденого пути
		Поделить пройденый путь на расход бензина миль/галон
		Ввывести результат заправки миль/галон

		Прибавить результат миль/галон к сумме
		Увеличит счетчик на 1
	
Посчитать среднее число пройденных миль на галон по всем заправкам
Вывести результат среднее число миль/галон
 */

int carMilage() 
{
	int distance, counter;
	float milage, sum, result, refueling;

	sum = 0;
	counter = 0;
	
	printf("%s\n", "Введите расход бензина (-1, если ввод закончен): ");
	scanf("%f", &milage);

	while (milage != -1) {
		printf("%s\n", "Введите пройденый путь: ");
		scanf("%d", &distance);

		refueling = distance / milage;

		printf("Для этой заправки получено миль/галлон %f\n\n", refueling);

		sum += refueling;
		++counter;

		printf("%s\n", "Введите расход бензина (-1, если ввод закончен): ");
		scanf("%f", &milage);
	}

	result = sum / counter;

	printf("Среднее число миль/галлон %f\n", result);

	return 0;
}

/* 3.18 */
int store()
{
	int accountNumber;
	float balance, expenses, loans, limitLoans, newBalance, sum;

	printf("Введите номер счета (-1, если ввод закончен): ");
	scanf("%d", &accountNumber);

	while (accountNumber != -1) {
		printf("Введите начальный баланс: ");
		scanf("%f", &balance);

		printf("Введите общую сумму расходов: ");
		scanf("%f", &expenses);

		printf("Введите общую сумму кредита: ");
		scanf("%f", &loans);

		printf("Введите предельный размер кредита: ");
		scanf("%f", &limitLoans);

		sum  = balance + loans;
		newBalance = balance + expenses - loans;

		printf("Счет: %d\n", accountNumber);
		printf("Предельный размер кредита: %.2f\n", limitLoans);
		printf("Баланс: %.2f\n", sum);

		if (newBalance > limitLoans) {
			printf("Предельный размер кредита превышен.\n\n");
		}
		
		printf("Введите номер счета (-1, если ввод закончен): ");
		scanf("%d", &accountNumber);
	}

	return 1;
}

/* 3.19 */
void chemickalCompany()
{
	float sum, salary;
	int percent = 9;
	int payment = 200;

	printf("Введите сумму продаж в долларах (-1, если ввод закончен) ");
	scanf("%f", &sum);

	while (sum != -1) {
		salary = sum * percent / 100 + payment;

		printf("Зарплата: %.2f\n\n", salary);

		printf("Введите сумму продаж в долларах (-1, если ввод закончен) ");
		scanf("%f", &sum);
	}
}

/* 3.20 */
void simpleInterest()
{
	float principal, rate, interest;
	int days;

	printf("Введите основную сумму ссуды (-1, если ввод закончен) ");
	scanf("%f", &principal);

	while (principal != -1) {
		printf("Введите процентную ставку: ");
		scanf("%f", &rate);

		printf("Введите срок ссуды в днях: ");
		scanf("%d", &days);

		interest = principal * rate * days / 365;

		printf("Выплаты по простым процентам составляет $%.2f\n\n", interest);

		printf("Введите основную сумму ссуды (-1, если ввод закончен) ");
		scanf("%f", &principal);
	}
}

/* 3.21 */
void totalSalaryForAnEmployee()
{
	int hours;
	float rate, salary;

	printf("Введите количество отработанных часов (-1, если ввод закончен) ");
	scanf("%d", &hours);

	while (hours != -1) {
		printf("Введите почасовой тариф работника ($00.00): ");
		scanf("%f", &rate);

		if (hours > 40) {
			salary = 40 * rate + (hours - 40) * rate * 1.5;
		} else {
			salary = hours * rate;
		}

		printf("Зарплата составляет $%.2f\n\n", salary);

		printf("Введите количество отработанных часов (-1, если ввод закончен) ");
		scanf("%d", &hours);
	}
}

/* 3.22 */
void decrement() {
	int pre = 5, post = 5, x = 5;
	printf("Вывод числа 5:\n\n");

	while (x != 0) {
		printf("--pre: %d\n", --pre);
		printf("post--: %d\n", post--);
		--x;
	}
}

/* 3.23 */
void sideBySide()
{
	int x = 1;

	while (x < 10) {
		printf("%d   ", x);
		++x;
		printf("%d\n", x);
		++x;
	}
}

/* 3.24 */
/*
Устанавливаем счетчик в ноль
Устанавливаем переменную largest в ноль

Пока количество счетчика меньше 10
	Вводим число
	Если вводимое число больше largest
		то присваемое наибольше число переменной largest
	Прибавляем счетчик на единицу

Выводим наибольшее число

 */
void findLargestNumber()
{
	int counter = 0, number, largest;

	while (counter < 10) {
		scanf("%d", &number);

		if (number > largest) {
			largest = number;
		}
		counter++;
	}

	printf("%d\n", largest);
}

/* 3.25 */
void multiplicationValue()
{
	int i = 1;

	while (i <= 10) {
		printf("%d\t%d\t%d\t%d\n", i, i*10, i*100, i*1000);

		i++;
	}
}

/* 3.26 */
void sumValue()
{
	int i = 3;

	while (i <= 15) {
		printf("%d\t%d\t%d\t%d\n", i, i+2, i+4, i+6);

		i = i + 3;
	}
}

/* 3.27 */
void findTwoLargestNumber()
{
	int counter = 0, number, largest1, largest2;

	while (counter < 10) {
		scanf("%d", &number);

		if (number > largest1) {
			largest2 = largest1;
			largest1 = number;
		}

		counter++;
	}

	printf("Максимальные числа: %d, %d\n", largest1, largest2);
}

/* 3.29 */
int outputNextProgramm()
{
	int count = 1;

	while (count <= 10) {
		printf("%s\n", count % 2 ? "****" : "++++++++");
		++count;
	}

	return 0;
}

/* 3.30 */
int outputNextProgramm2()
{
	int row = 10, column;

	while (row >= 1) {
		column = 1;

		while (column <= 10) {
			printf("%s", row % 2 ? "<" : ">");
			++column;
		}

		--row;
		printf("\n");
	}

	return 0;
}

/* 3.31 */
void hangingProblemElse()
{
	int x = 11, y = 9;

	/*if (x < 10)
		if (y > 10) 
			printf("*****\n");
		else
			printf("#####\n");

	printf("$$$$$\n");*/

	if (x < 10) {
		if (y > 10) 
			printf("*****\n");
	} else {
		printf("#####\n");
		printf("$$$$$\n");
	}
}

/* 3.32 */
void hangingProblemElse2()
{
	int x = 5, y = 7;

	if (y == 8) {
		if (x == 5) 
			printf("@@@@@\n");
	} else {
		printf("#####\n");
		printf("$$$$$\n");
		printf("&&&&&\n");
	}
}

/* 3.33 */


int main()
{ 
	hangingProblemElse2();
}








 
