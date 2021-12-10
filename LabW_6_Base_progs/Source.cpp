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
	First();
	cout << endl;
}




///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




void Second (char *str){
	/*2) Написать функцию, которая принимает строку.В качестве результата возвращает
	число символов в строке, которые повторяются(идут подряд).К примеру,
	строка «б аааа ббб сс», результат работы функции – число 6 (а - 3, б – 2, с - 1).*/

	char seps[] = " .,\t\n~!@#$%^&*():{}[]./-+<>?;", first('\0');
	char *token = NULL;

	int identical(1), len(0);

	token = strtok(str, seps);

	while (token != NULL) {
		len=strlen(token);

		for (int i = 0; i < len; i++) {
			first = token[i];

			if (first == token[i+1]) {
				identical++;
			}

			else {
				cout << first << " " << identical << endl;
				identical = 1;
			}
		}

		token = strtok(NULL, seps);
	}
}



void main2() {
	setlocale(LC_ALL, "rus");
	char str[M] = { "\0" };
	cout << "Enter the text: ";
	gets_s(str);
	Second (str);
}