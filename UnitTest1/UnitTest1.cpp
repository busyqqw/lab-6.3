#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 6.3.it/Source.cpp"

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
            Create(a, n, Low, High);

            // Add your test assertions here
            for (int i = 0; i < n; i++) {
                Assert::IsTrue(a[i] >= Low && a[i] <= High, L"Value not in range");
            }
        }

        TEST_METHOD(TestMethod2)
        {
            const int n = 5;
            int a[n] = { 1, 2, 3, 4, 5 };
            Inverse(a, n);

            // Add your test assertions here
            for (int i = 0; i < n; i++) {
                Assert::AreEqual(a[i], n - i, L"Value not inverted correctly");
            }
        }
    };
}

