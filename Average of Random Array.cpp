#include<iostream>
#include<cstdlib>
using namespace std;
int ReadNumber(string massage)
{
	int n;
	do {
		cout << massage << endl;
		cin >> n;
	} while (n < 0);
	return n;
}
int RandomNumber(int from, int to)
{
	int random = rand() % (to - from + 1) + from;
	return random;
}
void ReadArr(int a[], int& s)
{
	s = ReadNumber("Enter how number is size of array?");
	for (int i = 0; i < s; i++)
	{
		a[i] = RandomNumber(1, 100);
	}
}
void PrintArray(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
int SumNumber(int a[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += a[i];
	}
	return sum;
}
double AverageNumber(int a[], int size)
{ 
	 
	return (double)(SumNumber(a, size)) / size;
}
int main()
{
	srand((unsigned)time(NULL));
	int arr[100], size;
	ReadArr(arr, size);
	cout << "Array Elements: "; PrintArray(arr, size);
	cout << endl;
	cout << "Average of all number is: " << AverageNumber(arr, size) << endl;
	return 0;
}