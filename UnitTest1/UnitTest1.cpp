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
					/* 1‚ÆnumŽ©g‚Ì‘¼‚É–ñ”‚ª‘¶Ý‚µ‚½‚ç‘f”‚Æ”»’è‚·‚éˆ— */
					if (i % j == 0) {};
				}
				Assert::AreEqual(is_prime_number(i), true);
				
			}
			
		}
	};
}
