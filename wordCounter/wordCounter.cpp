// wordCounter.cpp : Defines the entry point for the console application.
//

#include ".h"
#include <iostream>
#include <string>

using namespace std;

int wordCount(char Anarray[], int Size);

int main()
{
	const int size = 99;
	char anArray[size];
	int count;
	int i = 0;

	cout << "Enter in a statement: ";
	cin.getline(anArray,size);
	
	count = wordCount(anArray, size);
	cout << "The number of words is: " << count << endl;
	system("pause");
    return 0;
}


int wordCount(char AnArray[], int Size)
{
	int count = 0;
	int length = 0;

	for (int i = 0; i < Size; i++)
	{
		if (AnArray[i] == ' ')
		{
			count++;
		}
	}

	return count;

}
