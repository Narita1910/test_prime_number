#include "pch.h"
#include "CppUnitTest.h"
#include "PrimeNumberLib/PrimeNumberLib.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int i;
			int max=1000;
			for (int i = 0;i < max;i++) {
				for (int j = i; j < i; j++)
				{
					/* 1とnum自身の他に約数が存在したら素数と判定する処理 */
					if (i % j == 0) {};
				}
				Assert::AreEqual(is_prime_number(i), true);
				
			}
			
		}
	};
}
