// lab_6.1_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void mas(int* t, const int size, const int max, const int min, int i)
{
	int M;
	M = t[i] = min + rand() % (max - min + 1);
	cout << M << " ";
	if (i < size - 1)
		mas(t, size, max, min, i + 1);
}
void sum(int* t, const int size, int i, int S)
{
	if ((t[i] > 0) && (i % 4 != 0))
	{
		S += t[i];
	}
	if (i < size - 1)
		sum(t, size, i + 1, S);
	else {
		cout << endl;
		cout << "Sum = " << S << endl;
	}
}
void count(int* t, const int size, int i, int C)
{
	if ((t[i] > 0) && (i % 4 != 0))
	{
		C++;
	}
	if (i < size - 1)
		count(t, size, i + 1, C);
	else {
		cout << endl;
		cout << "Count = " << C << endl;
	}
}
void mas2 (int* t, const int size, int i)
{
	if ((t[i] > 0) && (i % 4 != 0))
	{
		t[i] = 0;
	}
	cout << t[i] << " ";
	if (i < size - 1)
		mas2(t, size, i + 1);
}
int main()
{
	srand((unsigned)time(NULL));
	const int n = 20;
	int t[n];
	int i = 0;
	int S = 0;
	int C = 0;
	int max = 7;
	int min = -14;
	mas(t, n, max, min, i);
	sum(t, n, i, S);
	count(t, n, i, C);
	mas2(t, n, i);
	return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
