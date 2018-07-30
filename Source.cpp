#include<iostream>
#include<conio.h>
using namespace std;

void StringCopy(char[], char[]);

void main()
{
	const int SIZE = 80;
	char String1[SIZE] = { 0 };
	char String2[SIZE] = { 0 };

	cout << "Please Enter String 1:- ";
	cin.getline(String1, SIZE, '\n');
	cout << "Please Enter String 2:- ";
	cin.getline(String2, SIZE, '\n');
	cout << "The String 1 is Now:- ";

	StringCopy(String1, String2);

	for (int i = 0; String1[i] != '\0'; i++)
	{
		cout << String1[i];
	}
	cout << endl << "The String 2 is Now:- ";
	for (int i = 0; String2[i] != '\0'; i++)
	{
		cout << String2[i];
	}
	_getch();

}
void StringCopy(char String1[], char String2[])
{
	for (int i = 0; String1[i] != '\0'; i++)
	{
		String2[i] = String1[i];
		String2[i + 1] = '\0';
	}
}