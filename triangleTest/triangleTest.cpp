#include "pch.h"
#include "CppUnitTest.h"
#include "../triangleCode/Triangle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace triangleTest
{

	TEST_CLASS(triangleTest)
	{
	public:
		
		TEST_METHOD(TestHypotenuseCalc)
		{
			Triangle* obj = NULL;

			double result = obj->hypotenuseCalc(6.0, 8.0);

			Assert::AreEqual(10.0, result);
		}

		TEST_METHOD(TestAreaCalc)
		{
			Triangle* obj = NULL;

			double result = obj->areaCalc(10.0, 10.0);

			Assert::AreEqual(50.0, result);
		}

	};
}
