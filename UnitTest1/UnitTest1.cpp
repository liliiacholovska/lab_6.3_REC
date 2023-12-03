#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.3(2)/lab6.3(2).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod)
		{
			const int size = 5;
			int arr[size] = { 1, 2, 3, 4, 5 };

			int minElement = findMinRecursive(arr, size, 0, arr[0]);

			Assert::AreEqual(1, minElement);
		}

		TEST_METHOD(TestMethodT)
		{
			const int size = 5;
			int arr[size] = { 1, 2, 3, 4, 5 };

			int minElementT = findMinTemplateRecursive(arr, size, 0, arr[0]);

			Assert::AreEqual(1, minElementT);
		}
	};
}