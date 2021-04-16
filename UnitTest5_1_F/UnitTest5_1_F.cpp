#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Student\oop5.1F\oop5.1F\Pair.cpp"
#include "D:\Student\oop5.1F\oop5.1F\Long_public.cpp"
#include "D:\Student\oop5.1F\oop5.1F\Long_private.cpp"
#include "D:\Student\oop5.1F\oop5.1F\MyExeption.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51F
{
	TEST_CLASS(UnitTest51F)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair a(1, 1);
			bool t = a.Init(1, 7);
			Assert::AreEqual(t, true);
		}
	};
}
