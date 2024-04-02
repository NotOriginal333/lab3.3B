#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3.3B/Money.h"
#include "../lab3.3B/Money.cpp"
#include "../lab3.3B/Pair.h"
#include "../lab3.3B/Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair t(1, 2);
			Assert::AreEqual(1, t.getFirst());
		}
	};
}
