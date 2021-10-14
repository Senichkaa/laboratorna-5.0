#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
#include "../pr.5.0/Source.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab51
{
	TEST_CLASS(UnitTestLab51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double  tmp = h(0, 3);
			Assert::AreEqual(9., tmp);
		}
	};
}
