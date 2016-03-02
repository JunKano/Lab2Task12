// 1.2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include "Functions.h"

using namespace std;

vector <double> ReadItems() 
{
	vector<double>arrayNumbers;
	double temp;
	while (cin >> temp)
	{
		arrayNumbers.push_back(temp);
	}
	return arrayNumbers;
}


void PrintArrayNumbers(vector<double> arrayNumbers)
{
	for (size_t i = 0; i < arrayNumbers.size(); i++)
	{
		cout << arrayNumbers[i] << ' ';
	}
}


int main(int argc, char* argv[])
{
	auto arrayNumbers = ReadItems();
	arrayNumbers = MultiplyVectorByMin(arrayNumbers);
	PrintArrayNumbers(arrayNumbers);
	return 0;
}


