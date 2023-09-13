#include <iostream>
#include <string>
using namespace std;


int readNumber(string msg)
{
	int num;
	cout << msg << endl;
	cin >> num;
	return num;
}

int getLength(string str)
{
	int length = 0;
	int counter = 0;

	while (str[counter])
	{
		length++;
		counter++;
	}
	return length;
}

int getDigitFreq(int num, char digit)
{
	int freq = 0;

	string str = to_string(num);

	int length = getLength(str);
	for (int i = 0; i < length; i++)
	{
		if (str[i] == digit)
		{
			freq++;
		}
	}
	return freq;
}

void printAllDigits(int num)
{
	string str = to_string(num);
	int length = getLength(str);

	for (int i = 0; i < length; i++)
	{

		cout << str[i] << endl;
	}
}

int main()
{
	printAllDigits(readNumber("enter Number?"));

	return 0;
}