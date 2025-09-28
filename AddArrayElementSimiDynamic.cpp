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
void AddArray(int number, int array[], int size)
{
	array[size] = number; size++;
}
int  FillArray(int array[])
{
	 bool number=true;
	int i = 0;
	do
	{
	    AddArray(ReadPositiveNumber("Please enter a number? "), array ,i);
		number= ReadPositiveNumber("Do you want to add more numbers?[0]:No, [1]:Yes? ");
		i++;
	} while (number);
	return i;
}

void PrintArray(int array[], int size)
{
	cout << "Array Length: " << size << endl;
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

int main()
{
	
	int array[100];
    
	PrintArray(array, FillArray(array));


	return 0;
}