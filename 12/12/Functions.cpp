#include "stdafx.h"
#include "Functions.h"
#include "assert.h"


std::vector<double> MultiplyVectorByMin(std::vector<double> arrayNumbers)
{
	assert(!arrayNumbers.empty());
	sort(arrayNumbers.begin(), arrayNumbers.end());
	double arrayMin = arrayNumbers[0];
	for (size_t i = 0; i < arrayNumbers.size(); i++)
	{
		arrayNumbers[i] *= arrayMin;
	}
	return arrayNumbers;
}