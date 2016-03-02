// 1.2tests.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <vector>
#include "../12/Functions.h"

using namespace std;

bool VectorsAreEqual(vector<double> const& x, vector<double> const& y)
{
	return x == y;
}

BOOST_AUTO_TEST_CASE(EmptyVector)
{
	vector<double> numbers;
	numbers = MultiplyVectorByMin(numbers);
	BOOST_CHECK(numbers.empty());
}

BOOST_AUTO_TEST_CASE(MultyplyVectorByPositivElement)
{
	vector<double> numbers = { 1.3, 1.4, 2.0, 3.6 };
	numbers = MultiplyVectorByMin(numbers);
	BOOST_CHECK(VectorsAreEqual(numbers, { (1.3 * 1.3), (1.4 *1.3), (2.0 * 1.3), (3.6 * 1.3) }));
}

BOOST_AUTO_TEST_CASE(MultyplyVectorByNegativeElement)
{
	vector<double> numbers = { 1.2, -1.0, 2.2, 3.8 };
	numbers = MultiplyVectorByMin(numbers);
	BOOST_CHECK(VectorsAreEqual(numbers, { (-1.0 * (-1.0)), (1.2 * (-1.0)), (2.2 * (-1.0)), (3.8 * (-1.0)) }));
}

