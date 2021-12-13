#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#define N 10
#define M 1000
using namespace std;

int First() {
	/*1) Написать функцию, которая возвращает 1, если количество четных
	элементов одномерного массива больше количества нечетных. В противном
	случае возвращает 0. Можно возвращать значение типа bool.*/

	srand(time(0));

	int arr[N]{ 0 }, sum_ch = 0, sum_nch = 0;

	for (int i = 0; i < N; i++) {
		arr[i] = rand() % 100;
		if (arr[i] % 2 == 0) sum_ch += arr[i];
		if (arr[i] % 2 == 1) sum_nch += arr[i];
		cout << arr[i] << " ";
	}

	cout << endl;
	cout << sum_ch<<"\t"<<sum_nch<<endl;

	if (sum_ch > sum_nch) {
		cout << "chet > ne_chet";
			return 1;
	}

	else {
		cout << "chet < ne_chet";
			return 0;
	}

}

void main() {
	setlocale(LC_ALL, "rus");
	string str;
	int res;
	res = First();
	cout << endl;
}




///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




int *Second (char str[], char*& result) {
	/*2) Написать функцию, которая принимает строку.В качестве результата возвращает
	число символов в строке, которые повторяются(идут подряд).К примеру,
	строка «б аааа ббб сс», результат работы функции – число 6 (а - 3, б – 2, с - 1).*/

	int len = strlen(str), count(1), char_count = 0;;
	result = new char[len]{ '\0' };
	int* MassCount = new int[len]{ 0 };

	for (int i = 0; i < len; i++)
	{
		char c1 = str[i];
		char c2 = str[i+1];

		if (c1 == c2)
			count++;
		else
		{
			result[char_count] = c1;
			MassCount[char_count] = count;
			char_count++;
			count = 1;
		}
	}
	return MassCount;
}



void main2() {
	setlocale(LC_ALL, "rus");

	char str[M];
	char* result;

	cout << "Enter the text: ";
	gets_s(str);

 	int* countS= Second (str, result);
	int len = strlen(result);

	for (int i = 0; i < len; i++)
	{
		cout << result[i] << " - " << countS[i] << endl;
	}
	system("pause");
}