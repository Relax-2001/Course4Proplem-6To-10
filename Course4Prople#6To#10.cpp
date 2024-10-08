#include <cmath>
#include <iostream>
#include <string>
using namespace std;

// #6
struct stInfo
{
	string FirstName;
	string LastName;
};

stInfo ReadInfo()
{
	stInfo Info;

	cout << "Enter first name \n";
	cin >> Info.FirstName;

	cout << "Enter last name \n";
	cin >> Info.LastName;

	return Info;
}

string GetFullName(stInfo Info , bool Reversed)
{
	string FullName = "";

	if(Reversed)
		FullName = Info.LastName + " " + Info.FirstName;
	else
		FullName = Info.FirstName + " " + Info.LastName;

	return FullName;
}

void PrintFullName(string FullName)
{
	cout << "Your full name is " << FullName << "\n";
}

// #7
int ReadNumber()
{
	int Number;
	cout << "Enter a number \n";
	cin >> Number;

	return Number;
}

float CalculateHalfNumber(int Number)
{

	return (float)Number / 2;

}

void PrintHalfNumber(float Number)
{
	string Result = "";

	Result = "Half of Number " + to_string(Number) + " is " + to_string(CalculateHalfNumber(Number));

	cout << "\n" << Result << "\n";

}

// #8
enum enPassedOrFaild {Passed = 1 , Failed = 2};

int ReadMark()
{
	int Mark = 0;

	cout << "Enter your mark \n";
	cin >> Mark;
	
	return Mark;
}

enPassedOrFaild CheckMark(int Mark)
{
	if (Mark >= 50)
		return enPassedOrFaild::Passed;
	else
		return enPassedOrFaild::Failed;
}

void PrintResult(int Mark)
{
	if (CheckMark(Mark) == enPassedOrFaild::Passed)
		cout << "You Passed\n";
	else
		cout << "You failed\n";
}

// #9
void Read3Numbers(int& Num1 , int& Num2 , int& Num3)
{
	cout << "Enter first number\n";
	cin >> Num1;

	cout << "Enter second number\n";
	cin >> Num2;

	cout << "Enter third number\n";
	cin >> Num3;
}

int Sum3Numbers(int Num1, int Num2, int Num3)
{
	return Num1 + Num2 + Num3;
}

void PrintSumOf3Numbers( int result )
{
	cout << "Sum of 3 numbers is " << result << "\n";
}

// #10
void ReadMarks(int Marks[100] , int& length)
{
	cout << "How many marks do you want to enter\n";
	cin >> length;

	for (int i = 0; i <= length - 1; i++)
	{
		cout << "Enter mark " << i + 1 << "\n";
		cin >> Marks[i];
	}
}

int SumMarks(int Marks[100] , int length)
{
	int Sum = 0;

	for (int i = 0; i <= length - 1; i++)
	{
		Sum += Marks[i];
	}
	return Sum;
}

int CalculateMarksAvg(int Marks[100], int length)
{
	return (float) SumMarks(Marks , length) / length;
}

void PrintSumOfMarks(int result)
{
	cout << "Avrage of  marks is " << result << "\n";
}



int main()
{
	// #6
	//PrintFullName(GetFullName(ReadInfo() , false));

	// #7
	//PrintHalfNumber(ReadNumber());

	// #8
	//PrintResult(ReadMark());

	// #9
	/*int Num1, Num2, Num3;
	Read3Numbers(Num1 , Num2 , Num3);
	PrintSumOf3Numbers(Sum3Numbers(Num1, Num2, Num3));*/

	// #10
	int Marks[100];
	int length = 0;

	ReadMarks(Marks, length);
	PrintSumOfMarks(CalculateMarksAvg(Marks , length));

}

