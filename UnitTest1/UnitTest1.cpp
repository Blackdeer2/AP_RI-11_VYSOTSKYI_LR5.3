#include "pch.h"
#include "CppUnitTest.h"
#include "../PR5.3/PR5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = z(1);
			Assert::AreEqual(t,0.449545, 0.001);
		}
	};
}
