#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Даша\Лабораторні\Laboratorna 5.3\Laboratorna 5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 1;
			int z;
			z = (1 + exp(x) + sin(x));
			Assert::AreEqual(z, 0);
		}
	};
}
