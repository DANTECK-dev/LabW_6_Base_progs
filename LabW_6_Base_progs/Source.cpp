#include <iostream>
#include <string>
#include <time.h>
#define N 10
#define M 200
using namespace std;

int First(int arr[N], int sum_ch, int sum_nch) {
	/*1) �������� �������, ������� ���������� 1, ���� ���������� ������
	��������� ����������� ������� ������ ���������� ��������. � ���������
	������ ���������� 0. ����� ���������� �������� ���� bool.*/


	for (int i = 0; i < N; i++)
		arr[i] = rand() % 100;

	for (int i = 0; i < N; i++)
	{
		if (arr[i] % 2 == 0) sum_ch += arr[i];
		else sum_nch += arr[i];
	}

	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
	cout << endl;

	if (sum_ch > sum_nch)
		return 1;				//return 1
	else
		return 0;					// return 0;
	//cout << endl << sum_ch << " " << sum_nch << endl;

}



int Second(int c, string str, string s, string n_str) {
	/*2) �������� �������, ������� ��������� ������.� �������� ���������� ����������
	����� �������� � ������, ������� �����������(���� ������).� �������,
	������ �� ���� ��� ��, ��������� ������ ������� � ����� 6 (� - 3, � � 2, � - 1).*/


	cout << "������� ������" << endl;
	getline(cin, str);
	c = str.length();
	cout << endl;
	str += " ";

	for (int i = 0; i < (c + 1); i++)
	{
		s = str[i];
		if (s != " ")
		{
			n_str += str[i];
		}
		else
		{
			cout << n_str[0] << " " << n_str.length() << endl;
			n_str = "\0";
		}
	}

}


int main() {
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int arr[N], sum_ch, sum_nch, b, c, v;
	string str, s, n_str;

	cout << "Work number (1 or 2): ";
	cin >> v;

	switch (v)
	{
	case(1):
	{
		First(0, 0, 0);
		break;
	}
	case(2):
	{
		Second(0, '\0', '\0', '\0');
		break;
	}
	default:
	{
		cout << "Error: invalid value";
		break;
	}
	}
}