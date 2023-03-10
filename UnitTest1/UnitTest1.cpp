#include "pch.h"
#include "CppUnitTest.h"
extern "C" int getPerimeter(int* , int* );
extern "C" int getArea(int* , int* );
extern "C" void setLength(int , int* );
extern "C" void setWidth(int , int* );

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Perimeter)
		{
			int num1 = 2;
			int num2 = 4;
			int result = 0;
			result = getPerimeter(&num1, &num2);
			Assert::AreEqual(12, result);


		};

		TEST_METHOD(Area)
		{
			int num1 = 2;
			int num2 = 4;
			int result = 0;
			result = getArea(&num1, &num2);
			Assert::AreEqual(8, result);


		};

		//--------------set Length unit test------------------------

		TEST_METHOD(TestLength1)
		{
			int length1 = 1;
			int input1 = 1;
			setLength(input1, &length1);
			Assert::AreEqual(input1, length1);
		};

		TEST_METHOD(TestLength2)
		{
			int length2 = 1;
			int input2 = -10;
			setLength(input2, &length2);
			Assert::AreEqual(input2, length2);
		};

		TEST_METHOD(TestLength3)
		{
			int length3 = 1;
			int input3 = 200;
			setLength(input3, &length3);
			Assert::AreEqual(input3, length3);
		};

		// -----------------------------------set Width Unit Test-----------------------------------------

		TEST_METHOD(TestWidth1)
		{
			int length1 = 1;
			int input1 = 30;
			setWidth(input1, &length1);
			Assert::AreEqual(input1, length1);
		};

		TEST_METHOD(TestWidth2)
		{
			int length2 = 1;
			int input2 = -25;
			setWidth(input2, &length2);
			Assert::AreEqual(input2, length2);
		};

		TEST_METHOD(TestWidth3)
		{
			int length3 = 1;
			int input3 = 170;
			setWidth(input3, &length3);
			Assert::AreEqual(input3, length3);
		};
		
	};
}





		