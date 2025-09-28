#include<iostream>
#include<cstdlib>
using namespace std;

int ReadPositiveNumber(string massage)
{
	int number;
	do {
		cout << massage << endl;
		cin >> number;
	} while (number < 0);
	return number;
}

int RandomNumber(int from, int to)
{
	int random = rand() % (to - from + 1) + from;
	return random;
}

void FillArrayWithRandomNumbers(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = RandomNumber(1, 100);
	}
}

void PrintArray(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

int FindNumberPositionInArray(int array[], int size, int number)
{
	for (int i = 0; i < size; i++)
	{
		if (array[i] == number)
			return i;
	}
	return -1;
}

bool CheckNumberIsFound(int array[], int size, int number)
{
	return FindNumberPositionInArray(array, size, number) != -1;
}

int main()
{
	srand((unsigned)time(NULL));
	int array[100];

	int size = ReadPositiveNumber("Enter how much size of array?");
	FillArrayWithRandomNumbers(array, size);

	cout << "Array 1 elements:" << endl;
	PrintArray(array, size);

	int number = ReadPositiveNumber("Please enter a number to search for?");

	cout << "Number you are looking for is: " << number << endl;

	if (CheckNumberIsFound(array, size, number))
		cout << "The number is found :-)" << endl;
	else
		cout << "The number is not found :-(" << endl;
	return 0;
}