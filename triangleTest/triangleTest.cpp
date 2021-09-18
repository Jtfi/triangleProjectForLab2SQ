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

		TEST_METHOD(TestThirdAngleCalc)
		{
			Triangle* obj = NULL;

			double result = obj->thirdAngleCalc(60.0, 60.0);

			Assert::AreEqual(60.0, result);
		}

		TEST_METHOD(TestPerimeterCalc)
		{
			Triangle* obj = NULL;

			double perimeter = obj->perimeterCalc(60.0, 60.0, 60);

			Assert::AreEqual(180.0, perimeter);
		}

		TEST_METHOD(TestDistanceFromOriginCalc)
		{
			Triangle* obj = NULL;

			double distance = obj->distanceFromOriginCalc(60.0, 60.0);

			Assert::AreEqual(180.0, distance);
		}
	};
}
