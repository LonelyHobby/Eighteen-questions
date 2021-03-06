// text.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<string.h>
#include<stdlib.h>

/*18-1*/
/*
int main()
{
	int ch;
	int count = 0;

	while ((ch = getchar()) != EOF)
	{
		if (ch == '{')
		{
			count++;
		}
		if (ch == '}' && count == 0)
		{
			printf("不匹配\n");
			return 0;
		}
		
		if (ch == '}' && count != 0)
		{
			count--;
		}

	}

	if (count == 0)
	{
		printf("匹配!\n");
	}
	else
	{
		printf("不匹配!\n");
	}


	return 0;
}
*/

/*18-2*/
/*
int main(int argc, char *argv[])
{
	printf("Please input a number:\n");
	float n,LastA,CurrentA;
	scanf("%f", &n);
	if (n <0)
		{
		printf("Wrong Number\n");
		return EXIT_FAILURE;
		}
	CurrentA = 1;
	do {
		LastA = CurrentA;
		CurrentA = (LastA + n/ LastA) / 2;
		//printf("%.15e\n", CurrentA);
	} while (CurrentA != LastA);
	printf("The result is:%g", CurrentA);
	return EXIT_SUCCESS;
}
*/

/*18-6*/
/*
int  hermite(int n, int x)
{
	int h = 0;
	if (n <= 0)
		h = 1;
	else if (n == 1)
		h = 2 * x;
	else
		h = 2 * x * hermite(n - 1, x) - 2 * (n - 1) * hermite(n - 2, x);
	return h;
}

int main()
{
	int  x,n;
	printf("Please input n&x:\n");
	printf("n:");
	scanf("%d",&n);

	printf("\n");
	printf("x:");
	scanf("%d", &x);
	printf("\n");
	printf("Result is %d\n", hermite(n,x));
	return 0;
}
*/ 

/*18-4*/
/*
unsigned int reverse_bites(unsigned int value)
{
	unsigned int answer = 0;
	for (int i = 1; i != 0; i <<= 1)
	{
		answer <<= 1;
		if (value & 1)
		answer |= 1;
		value >>= 1;
	}
	return answer;

}

int main()
{
	unsigned int x;
	printf("Please input the number what you what to change:\n");
	scanf_s("%u", &x);
	printf("Result is : %u\n", reverse_bites(x));
}
*/

/*18-8*/
/*
float single_tax(float income)
{
	double afterTaxIncome;
	if (income>=0&&income<23350)
	{
		afterTaxIncome = income *0.15;
	}
	else if (income>=23350&&income<=56550)
	{
		afterTaxIncome = 3502.50 + income * 0.28;
	}
	else if (income>=56550&&income<=117950)
	{
		afterTaxIncome = 12798.50 + 0.31*income;
	}
	else if (income >= 117950 && income <= 256500)
	{
		afterTaxIncome = 31832.50 + 0.36*income;
	}
	else
	{
		afterTaxIncome = 81710.05 + 0.396*income;
	}
	return afterTaxIncome;
}

int main()
{
	float beforeTaxIncome, afterTaxIncome;
	printf("Please input your income:\n");
	while ((scanf_s("%f", &beforeTaxIncome))!=EOF)
	{
		if (beforeTaxIncome<0)
		{
			printf("Wrong number,please re-enter\n");
			
		}
		else
		{
			printf("Your income should be : %f\n", single_tax(beforeTaxIncome));
			printf("Please input your income:\n");
		}
		
	}
	

}
*/

/*18-12*/
/*
char const whitespace[] = "\n\r\f\t\v";
int main(void)
{
	char string[101];
	int count = 0;
	//读取文本行直到发现EOF
	printf("Please input a sentence\n");
	while ((scanf("%s",&string)!=EOF))
	{
		char *word;
		//从缓冲区提取单词，直到缓冲区内不再有单词
		for (word = strtok(string, whitespace); word != NULL; word = strtok(NULL, whitespace))
		{
			if (strcmp(word, "the") == 0)
			{
				count++;
			}
		}
	}
	printf("The number of ""the"" is :%d\n", count);

	return EXIT_SUCCESS;

}
*/


char const whitespace[] = "\n\r\f\t\v";
int main(void)
{
	char string[101];
	int count = 0;
	//读取文本行直到发现EOF
	while (gets_s(string))
	{
		char *word;
		//从缓冲区提取单词，直到缓冲区内不再有单词
		for (word = strtok(string, whitespace); word != NULL; word = strtok(NULL, whitespace))
		{
			if (strcmp(word, "the") == 0)
			{
				count++;
			}
		}
	}
	printf("%d\n", count);

	return EXIT_SUCCESS;

}
