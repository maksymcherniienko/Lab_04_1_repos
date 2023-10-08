// Lab_04_1.cpp
// Чернієнко Максима
// Лабораторна робота № 4.1
// Цикли
// Варіант 25

#include <iostream>
#include <cmath>

using namespace std;
double k, N, S;

int main()
{
	cout << "N = "; cin >> N;
	S = 1;
	k = N;
	while (k <= 19)
	{
		S *= (k - N) / (k + N) + 1; 
		k++;
	}
	cout << S << endl;

	S = 1;
	k = N;
	do {
		S *= (k - N) / (k + N) + 1;
		k++;
	} while (k <= 19);
	cout << S << endl;

	S = 1;
	k = N;

	for (k = N; k <= 19; k++)
	{
		S *= (k - N) / (k + N) + 1;
	}
	cout << S << endl;

	S = 1;

	for (k = 19; k >= N; k--)
	{
		S *= (k - N) / (k + N) + 1;
	}
	cout << S << endl;
}