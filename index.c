#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
void readingSizeSideRquare()
{
	int num, i = 0, j = 0;

	scanf("%d", &num);

	if (num <= 20) {
		while (i < num) {

			while (j < num) {
				printf("*");
				j++;
			}

			j = 0;
			i++;
			printf("\n");
		}
	} else {
		printf("Введите число меньше 20\n");
	}
}

/* 3.34 */
void readingSizeSideRquare2()
{
	int num, i = 0, j = 0;

	scanf("%d", &num);

	if (num <= 20) {
		while (i < num) {

			while (j < num) {
				if (i == 0 || i == num - 1)
					printf("*");
				else if (j == 0 || j == num - 1)
					printf("*");
				else 
					printf(" ");
				j++;
			}

			j = 0;
			i++;
			printf("\n");
		}
	} else {
		printf("Введите число меньше 20\n");
	}
}

/* 3.35 */
void palindrome()
{
	int num, i = 0;

	printf("Введите пятизначное число. Для проверки палиндрома числа.\n");
	scanf("%d", &num);

	if (
		num / 10000 == num % 10 
		&& (num / 1000) % 10 == (num / 10) % 10 
		&& num < 100000
		&& num > 9999 
	) 
		printf("Yes\n");
	else 
		printf("No\n");
}

/* 3.36 */
/* Выдает не корректное число после 10 степени */
void conversionFromBinaryToDecimal() 
{
	int binary, count = 0, decimal = 0, result, r;
	scanf("%d", &binary);

	while (binary > 0) {
		decimal += pow(2, count) * (binary % 10);
		binary = binary / 10;
		count++;
	}

	printf("Перевод из двоичной в десятичную систему счисления: %d\n", decimal);
}


/* 3.37 */
void computerSpeed()
{
	int i = 0;

	while (i <= 300000000) {
		if (i % 100000000 == 0) {
			printf("%d\n", i);
		}
		i++;
	}
}

/* 3.38 */
void outputHundredStar()
{
	int i = 1;

	while (i <= 100) {
		printf("*");

		if (i % 10 == 0) {
			printf("\n");
		}

		i++;
	}
}

/* 3.39 */
void readInteger() 
{
	int number, countNumber = 0;

	scanf("%d", &number);

	while (number > 0) {
		number = number / 10;
		++countNumber;
	}

	printf("%d\n", countNumber);
}

/* 3.40 */
void checkerboardBoard() 
{
	int i = 0;

	while (i < 64) {
		if (i % 8 == 0 && i != 0) 
			printf("\n");

		if ((i + 8) % 16 == 0) 
			printf(" ");
		

		printf("* ");

		i++;
	}

	printf("\n");
}

/* 3.41 */
void outputNumberMultipleTWo() 
{
	int i = 2;

	while (i < 100000) {
		printf("%d\n", i);
		i *= 2;
	}
}

/* 3.42 */
void readingRadius() 
{
	float pi = 3.41459;
	float radius;
	int x = 5, y = 7, i;

	scanf("%f", &radius);

	printf("Диаметр круга: %f\n", 2 * radius);
	printf("Периметр: %f\n", 2 * pi * radius);
	printf("Площадь: %f\n", pi * pow(radius, 2));
}

/* 3.46 */
int encryptionData() 
{
	int number, a, b, c, d, result;

	printf("Введите четырех значное число: \n");
	scanf("%d", &number);

	if (number > 9999 && number < 1000) {
		printf("Введите четырех значное число!");

		return 0;
	}

	a = (number / 1000) % 10;
	b = (number / 100) % 10;
	c = (number / 10) % 10;
	d = number % 10;

	a = (a + a + 7) % 10;
	b = (b + b + 7) % 10;
	c = (c + c + 7) % 10;
	d = (d + d + 7) % 10;

	result = c * 1000 + d*100 + a * 10 + b;

	printf("Зашифрованное число: %d%d%d%d\n", c, d, a, b);
	printf("%d\n", result);
}

int recursive(int x) 
{

	if (x == 0) {
		return 1;
	}

	return x * recursive(x-1);

}

int countingLetterGrades()
{
	int grade;
	int aCount = 0, bCount = 0, cCount = 0, dCount = 0, fCount = 0;

	printf("Enter the letter grades. \n");
	printf("Enter the EOF character to end input. \n");

	while ( (grade = getchar()) != EOF) { // ctrl+d
		switch (grade) {
			case 'A': case 'a':
				++aCount;
				break;
			case 'B': case 'b':
				++bCount;
				break;
			case 'C': case 'c':
				++cCount;
				break;
			case 'D': case 'd':
				++dCount;
				break;
			case 'F': case 'f':
				++fCount;
				break;
			case '\n': case ' ':
				break;
			default:
				printf("Incorrect letter grade entered ");
				printf("Enter a new grade\n");
				break;
		}

	}

	printf("\nTotals for each letter grade are: \n");
	printf("A: %d\n", aCount);
	printf("B: %d\n", bCount);
	printf("C: %d\n", cCount);
	printf("D: %d\n", dCount);
	printf("F: %d\n", fCount);

	return 0;
}

/* 4.3 */
void sequenceOfStatements()
{
	int sum = 0;
	int x;

	/* a) */
	for (int count = 1; count <= 99; count += 2) {
		sum += count;
	}

	printf("%d\n", sum);

	/* b) */
	printf("%-15.1f\n", 333.546372);
	printf("%-15.2f\n", 333.546372);
	printf("%-15.3f\n", 333.546372);
	printf("%-15.4f\n", 333.546372);
	printf("%-15.5f\n", 333.546372);

	/* c) */
	printf("%-10.2f\n", pow(2.5, 3));

	/* d) */
	x = 1;

	while (x <= 20) {

		if (x % 5 == 0) {
			printf("%d\n", x++);
		} else {
			printf("%d\t", x++);
		}

	}

	/* e */
	for (x = 1; x <= 20; x++) {
		printf("%d", x);

		if (x % 5 == 0) {
			printf("\n");
		} else {
			printf("\t");
		}
	}

}

/* 4.9 */
void sumSequenceOfInteger()
{
	int x, y;
	int total = 0;

	scanf("%d", &x);

	for (int i = 1; i <= x; i++) {
		scanf("%d", &y);

		total += y;
	}

	printf("%d\n", total);
}

/* 4.10 */
void meanValueOfInteger()
{
	int x, mean, total = 0;

	for (int i = 1; x != 9999; i++) {
		scanf("%d", &x);

		if (x == 9999) {
			mean = total / --i;
			break;
		}

		total += x;
	}

	printf("%d\n", mean);
}

/* 4.11 */
void searchMinValue()
{
	int x, y, min;

	scanf("%d", &x);

	for (int i = 1; i <= x; i++) {
		scanf("%d", &y);

		if (i == 1 || y < min) {
			min = y;
		}
	}

	printf("Min: %d\n", min);
}

/* 4.12 & 4.13 */

void sumEvenNumber()
{
	int i = 2, sumEvenNumber = 0, sumNotEvenNumber = 0;

	while (i <= 20) {
		if (i % 2 == 0) {
			sumEvenNumber += i;
		} else {
			sumNotEvenNumber += i;
		}

		i++;
	}

	printf("%d\n", sumEvenNumber);
	printf("%d\n", sumNotEvenNumber);
}

/* 4.14 */
void factorial()
{
	int num = 0, sum = 0;

	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		sum += i;
	}

	printf("%d\n", sum);
}

/* 4.16 */
void generationOfDrawings()
{
	/* a */
	for (int i = 0; i <= 10; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n");

	/* b */
	for (int i = 10; i >= 0; i--) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n");
	
	/* c */
	for (int i = 10; i >= 0; i--) {
		for (int k = 0; k < (10 - i); k++) {
			printf(" ");
		}

		for (int j = 0; j <= i; j++) {
			printf("*");
		}

		printf("\n");
	}

	printf("\n");

	/* d */
	for (int i = 0; i <= 10; i++) {
		for (int k = 10; k > i; k--) {
			printf(" ");
		}

		for (int j = 0; j <= i; j++) {
			printf("*");
		}

		printf("\n");
	}


	printf("\n");
}

/* 4.17 */
void maximumLoanAmount() 
{
	int customerAccountNumber;
	int maximumLoanAmount;
	int currentBalance;
	int newLoanAmount;

	for (int i = 1; i <= 3; i++) {
		printf("\nCustomer account number: %d\n", i);

		printf("Maximum loan amount: ");
		scanf("%d", &maximumLoanAmount);

		printf("Current balance: ");
		scanf("%d", &currentBalance);

		newLoanAmount = maximumLoanAmount / 2; 
		printf("%d\n", newLoanAmount);	

		if (newLoanAmount < currentBalance) {
			printf("Client: %d\n", i);
		}	
	}
}

/* 4.18 */
void barGraph() 
{
	int x;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &x);

		if (x <= 30) {
			for (int j = 0; j < x; j++) {
				printf("*");
			}
		} else {
			printf("Value should not be more than 30.\n");
			break;
		}

		printf("\n");
	}
}

/* 4.19 */
void sequencePairsNumbers()
{
	int x, count, i = 1;
	float y, sum;

	while (i <= 7) {
		printf("\nDay %d\n", i);

		printf("Product number, enter from 1 to 5:\n");
		scanf("%d", &x);

		printf("Amount sold in one day:\n");
		scanf("%d", &count);

		switch (x) {
			case 1:
				y = 2.98;
				break;
			case 2:
				y = 4.50;
				break;
			case 3: 
				y = 9.98;
				break;
			case 4: 
				y = 4.49;
				break;
			case 5: 
				y = 6.87;
				break;
			default:
				printf("Not value\n");
				break;
		}

		sum += y;
		i++;
	}


	printf("Total amount for the week: $%.2f\n", sum);
}

/* 4.24 */
void check() 
{
	int i = 1, j = 2, k = 3, m = 2;

	printf("%d\n", i == 1);
	printf("%d\n", j == 3);
	printf("%d\n", i >= 1 && j < 4);
	printf("%d\n", m <= 99 && k < m);
	printf("%d\n", j >= i || k == m);
	printf("%d\n", k + m < j || 3 - j >= k);
	printf("%d\n", !m);
	printf("%d\n", !(j - m));
	printf("%d\n", !(k > m));
	printf("%d\n", !(j > k));
}

/* 4.28 */
void calculatingWeeklySalary()
{
	int paymentCode, hours, numberSales;
	float salary, rate, result = 0;

	printf("Enter code 1-4\n");
	scanf("%d", &paymentCode);

	switch (paymentCode) {
		case 1:
			scanf("%f", &salary);
			printf("%.2f$\n", salary);
			break;
		case 2:
			printf("%s\n", "Enter the number of hours.");
			scanf("%d", &hours);

			printf("%s\n", "Rate per hour.");
			scanf("%f", &rate);

			if (hours > 40) {
				result += rate * 40;
				result += (hours - 40) * 1.5 * rate; 
			} else {
				result += rate * hours;
			}

			printf("%.2f$\n", result);
			break;
		case 3:
			printf("%s\n", "Number of sales?");
			scanf("%d", &numberSales);

			printf("%.2f$\n", 250 + numberSales * 5.7);

			break;
		case 4:
			printf("%s\n", "Enter the number of hours.");
			scanf("%d", &hours);

			printf("%s\n", "Rate per hour.");
			scanf("%f", &rate);

			printf("%.2f$\n", hours * rate);
			break;
		default:
			printf("%s\n", "There is no given code.");
			break;
	}
}

/* 4.29 */
void morgansLaw()
{
	int x = 10, y = 10, a = 2, b = 2, g = 5, Y = 3, i = 5, j = 3;

	printf("%d\n", !(x < 5) && !(y >= 7) ? 1 : 0);
	printf("%d\n", !(x < 5 || y >= 7) ? 1 : 0);

	printf("%d\n", !(a == b) || !(g != 5) ? 1 : 0);
	printf("%d\n", !(a == b && g != 5) ? 1 : 0);

	printf("%d\n", !(x <= 8) || (Y > 4) ? 1 : 0);
	printf("%d\n", !((x <= 8) && (Y > 4)) ? 1 : 0);

	printf("%d\n", !(i > 4) || (j <= 6) ? 1 : 0);
	//printf("%d\n", !((i > 4) && (j <= 6)) ? 1 : 0);
}

/* 4.31 */
void rhombus() 
{
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			if ((i == 1 || i == 9) && j == 5) {
				printf("*");
			} else if (
				(i == 2 || i == 8) && 
				(j == 4 || j == 5 || j == 6)
			) {
				printf("*");
			} else if (
				(i == 3 || i == 7) && 
				(j == 3 ||j == 4 || j == 5 || j == 6 || j == 7)
			) {
				printf("*");
			} else if (
				(i == 4 || i == 6) && 
				!(j == 1 || j == 9)
			) {
				printf("*");
			} else if (i == 5) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
}

int rhombus2()
{
	int x;

	printf("%s\n", "Enter a number from 1 to 19");
	scanf("%d", &x);

	if (x % 2 == 0 || x > 20 || x < 1) {
		return 1;
	} 

	for (int i = 1; i <= x; i++) {
		if (i % 2 != 0) {
			if (i == 1 || i == 17) {
				for (int j = 0; j < 4; j++) {
					printf(" ");
				}
			} else if (i == 3 || i == 15) {
				for (int j = 0; j < 3; j++) {
					printf(" ");
				}
			} else if (i == 5 || i == 13) {
				for (int j = 0; j < 2; j++) {
					printf(" ");
				}
			} else if (i == 7 || i == 11) {
				for (int j = 0; j < 1; j++) {
					printf(" ");
				}
			} 

			if (i <= 9) {
				for (int j = 1; j <= i; j++) {
					printf("*");
				}
			} else {
				for (int j = i; j <= 17; j++) {
					printf("*");
				}
			}

		}
		printf("\n");
		//printf("\n");
	}
} 

int main()
{ 
	rhombus2();

	printf("%20f\n\n", sqrt(900.0));

	return 0;
}








 
