#include<iostream>
using namespace std;

enum  PlaceNumber
{
	Singly=1, Doxens=2, Hundred=3, 
	Thousand=4, Million=5, Billion=6
};

int ReadNumber()
{
	int num;
	cout << " Enter a Number? ";cin >> num;
	return num;
}

int ReversNumber(int number, int& i)
{
	int m = 0;
	int result=0;
	for (i = 0; i<number; i++)
	{
		m = number % 10;
		number /= 10;
		result =result * 10+m;
	}
	return result;
}

void NumberSingly(int mod)
{
	switch (mod)
	{
	case 1:cout << " One ";
		break;
	case 2:cout << " Tow ";
		break;
	case 3:cout << " Three ";
		break;
	case 4:cout << " Four ";
		break;
	case 5:cout << " Five ";
		break;
	case 6:cout << " Six ";
		break;
	case 7:cout << " Seven ";
		break;
	case 8:cout << " Eight ";
		break;
	case 9:cout << " Nine ";
		break;
	default:
		break;
	}
}

void NumberDoxens(int mod)
{
	
	switch (mod)
	{
	case 1:cout << " ten ";
		break;
	case 2:cout << " Twenty ";
		break;
	case 3:cout << " Thirty ";
		break;
	case 4:cout << " Forty ";
		break;
	case 5:cout << " Fifty ";
		break;
	case 6:cout << " Sixteen ";
		break;
	case 7:cout << " Seventeen ";
		break;
	case 8:cout << " Eighteen ";
		break;
	case 9:cout << " Nineteen ";
		break;
	default:
		break;
	}
}

bool NumberToString(int counter, int number)
{
	PlaceNumber place;

	if (number != 0)
	{
		switch (counter)
		{
		case Singly:NumberSingly(number % 10);
			break;
		case Doxens:NumberDoxens(number % 10);
			break;
		case Hundred:NumberSingly(number % 10); cout << " Hundreds ";
			break;
		case Thousand:NumberSingly(number % 10); cout << " Thousands ";
			break;
		case Million:NumberSingly(number % 10); cout << " Millions ";
			break;
		case Billion:NumberSingly(number % 10); cout << " Billions ";
			break;
		default:
			break;
		}
		counter--;
		NumberToString(counter, number / 10);
	}
	else
		return false;
}

int main()
{
	int i;
	NumberToString(i, ReversNumber(ReadNumber(), i));
	cout << endl;
	return 0;
}