#include "pch.h"
#include "CppUnitTest.h"
#include "../triangleCode/Triangle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace triangleTest
{

	TEST_CLASS(triangleTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triangle* obj = NULL;

			double result = obj->hypotenuseCalc(6.0, 8.0);

			
			Assert::AreEqual(10.0, result);
		}
	};
}
