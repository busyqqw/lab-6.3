#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 6.3.rk/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int n = 10;
			int a[n];
			int Low = -5;
			int High = 5;
			Create(a, n, Low, High, 0);
			for (int i = 0; i < n; i++) {
				Assert::IsTrue(a[i] >= Low && a[i] <= High, L"Значення не знаходиться в межах Low та High");
			}
		}

		TEST_METHOD(TestMethod2)
		{
			const int n = 5;
			int a[n] = { 1, 2, 3, 4, 5 };
			Inverse(a, n, 0);		
			int expected[n] = { 5, 4, 3, 2, 1 };
			for (int i = 0; i < n; i++) {
				Assert::AreEqual(expected[i], a[i], L"Значення не інвертовано правильно");
			}
		}
	};
}
		
