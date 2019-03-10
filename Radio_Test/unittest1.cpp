#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Radio/Executes.h"
#include "../Radio/Receivers.h"
#include "../Radio/Radio_Control.cpp"
#include "../Radio/Executes.h"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Radio_Test
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// Test 1
			if (button_1 == 0)
			{
				Assert::AreEqual(state, Pwr_On);
			}
			else if (button_1 == 4)
			{
				Assert::AreEqual(state, Zeroize);
			}
			else if (button_1 == 4)
			{
				Assert::AreEqual(state, Zeroize);
			}

			if ((state == Pwr_On) && (button_2 == 0))
			{
				Assert::AreEqual(state, Pwr_On);
			}
			else if ((state == Pwr_On) && (button_2 == 1))
			{
				Assert::AreEqual(state, Pwr_Off);
			}
			else if ((state == Pwr_On) && (button_2 == 2))
			{
				Assert::AreEqual(state, Pwr_On);
			}
			else if ((state == Pwr_On) && (button_2 == 3))
			{
				Assert::AreEqual(state, Pwr_On);
			}
			else if ((state == Pwr_On) && (button_2 == 4))
			{
				Assert::AreEqual(state, Zeroize);
			}
		}


		TEST_METHOD(TestMethod2)
		{
			// Test 2
			if (button_1 == 1)
			{
				Assert::AreNotEqual(state, Pwr_On);
			}
			if (button_1 == 2)
			{
				Assert::AreNotEqual(state, Pwr_On);
			}
			if (button_1 == 3)
			{
				Assert::AreNotEqual(state, Pwr_On);
			}
			else if (button_1 == 4)
			{
				Assert::AreNotEqual(state, Pwr_On);
			}
			else if (button_1 == 4)
			{
				Assert::AreNotEqual(state, Pwr_Off);
			}
		}

		TEST_METHOD(TestMethod3)
		{
			// If the radio is on before button 2
			if ((state == Pwr_On) && (button_2 == 1))
			{
				Assert::AreNotEqual(state, Pwr_On);
			}
			else if ((state == Pwr_On) && (button_2 == 2))
			{
				Assert::AreNotEqual(state, Pwr_Off);
			}
			else if ((state == Pwr_On) && (button_2 == 3))
			{
				Assert::AreNotEqual(state, Pwr_Off);
			}
			else if ((state == Pwr_On) && (button_2 == 4))
			{
				Assert::AreNotEqual(state, Pwr_Off);
			}
			else if ((state == Pwr_On) && (button_2 == 4))
			{
				Assert::AreNotEqual(state, Pwr_On);
			}

			// If the radio is off before button 2
		    if ((state == Pwr_Off) && (button_2 == 1))
			{
				Assert::AreNotEqual(state, Pwr_On);
			}
			else if ((state == Pwr_Off) && (button_2 == 2))
			{
				Assert::AreNotEqual(state, Pwr_Off);
			}
			else if ((state == Pwr_Off) && (button_2 == 3))
			{
				Assert::AreNotEqual(state, Pwr_Off);
			}
			else if ((state == Pwr_Off) && (button_2 == 4))
			{
				Assert::AreNotEqual(state, Pwr_Off);
			}
			else if ((state == Pwr_Off) && (button_2 == 4))
			{
				Assert::AreNotEqual(state, Pwr_On);
			}
		}
	};
}