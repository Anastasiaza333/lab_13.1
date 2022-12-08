#include "pch.h"
#include "CppUnitTest.h"
#include "../Project13.1/Var.h"
#include "../Project13.1/var.cpp"
#include "../Project13.1/dod.h"
#include "../Project13.1/dod.cpp"
#include "../Project13.1/sum.cpp"
#include "../Project13.1/sum.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest131
{
	TEST_CLASS(UnitTest131)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			x = 2, e = 0.001;
			nsSum::sum();
			Assert::AreEqual(atan(2),1.10715, 0.0001);
		}
	};
}
