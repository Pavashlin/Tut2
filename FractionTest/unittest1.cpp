#include "stdafx.h"
#include "CppUnitTest.h"
#include "Fraction.h"
#include <iostream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
namespace FractionTest
	
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Fraction a, b;
			a.setn(1);
			a.setd(0);
			Assert::AreNotEqual(0, a.getd(),L"Denominator is zero",LINE_INFO());
			// TODO: Your test code here
		}

	};
}