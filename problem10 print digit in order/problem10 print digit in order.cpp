#include <iostream>
#include <string>
using namespace std;


int readPositiveNumber(string msg)
{
	int num;
	do
	{
		cout << msg << endl;
		cin >> num;
	} while (num<=0);
	return num;
}

int reverseNumberDigits(int num)
{
	int num2 = 0;
	while (num > 0)
	{
		int reminder = num % 10;
		num = num / 10;

		num2 = num2 * 10 + reminder;
	}
	return num2;
}

void printNumberDigitsInOrder(int num)
{
	int reversedNumber = reverseNumberDigits(num);

	//int orderedNumber = 0;
	
	/*while (reversedNumber > 0)
	{
		int reminder = reversedNumber % 10;
		reversedNumber = reversedNumber / 10;

		orderedNumber = orderedNumber * 10 + reminder;
	}*/

	cout << reverseNumberDigits(reversedNumber) << endl;
}

int main()
{
	printNumberDigitsInOrder(readPositiveNumber("enter Number?"));

	return 0;
}




//int readNumber(string msg)
//{
//	int num;
//	cout << msg << endl;
//	cin >> num;
//	return num;
//}
//
//int getLength(string str)
//{
//	int length = 0;
//	int counter = 0;
//
//	while (str[counter])
//	{
//		length++;
//		counter++;
//	}
//	return length;
//}
//
//int getDigitFreq(int num, char digit)
//{
//	int freq = 0;
//
//	string str = to_string(num);
//
//	int length = getLength(str);
//	for (int i = 0; i < length; i++)
//	{
//		if (str[i] == digit)
//		{
//			freq++;
//		}
//	}
//	return freq;
//}
//
//void printAllDigits(int num)
//{
//	string str = to_string(num);
//	int length = getLength(str);
//
//	for (int i = 0; i < length; i++)
//	{
//
//		cout << str[i] << endl;
//	}
//}