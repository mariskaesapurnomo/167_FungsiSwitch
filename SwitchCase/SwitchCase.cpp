// SwitchCase.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int bilangan1, bilangan2;

int penjumlahan(int a, int b)
{
	return a + b;
}

int pengurangan(int a, int b)
{
	return a - b;
}

int perkalian(int a, int b)
{
	return a * b;
}

int pembagian(float a, float b)
{
	return a / b;
}

int inputData()
{
	cout << "\nMasukkan bilangan pertama: ";
	cin >> bilangan1;
	cout << "Masukkan bilangan kedua: ";
	cin >> bilangan2;
}


int main()
{
	int pilihan;
	do
	{
		system("CLS");
		cout << "Menu kalkulator sederhana" << endl;
		cout << "1. penjumlahan" << endl;
		cout << "2. pengurangan" << endl;
		cout << "3. perkalian" << endl;
		cout << "4. pembagian" << endl;
		cout << "5. keluar" << endl;
		cout << "Masukkan pilihan: ";
		cin >> pilihan;

		switch (pilihan)
		{
		case 1:
			inputData();
			cout << "\nHasil penjumlahan: " << penjumlahan(bilangan1, bilangan2) << endl;
			system("pause");
			break;
		case 2:
			inputData();
			cout << "\nHasil pengurangan: " << pengurangan(bilangan1, bilangan2) << endl;
			system("pause");
			break;



		}
	}
}
