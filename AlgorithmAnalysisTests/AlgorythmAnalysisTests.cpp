#include "stdafx.h"
#include "CppUnitTest.h"
#include "Test.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace AlgorithmAnalysisTests
{		
	TEST_CLASS(AATests)
	{
	public:
		
		TEST_METHOD(TestResults)
		{
			Test test;
			Assert::AreEqual(test.getResult(), 0);
		}

	};
}