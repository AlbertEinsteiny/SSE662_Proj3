// Radio.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Receivers.h"
#include "Executes.h"
using namespace std;
#include <iostream>

// user input
int button_1;
int button_2;
int button_3;
int button_4;

// state variable
int state;




int main()
{
	cout << "Press a button";
	cout << "\n";
	
	cin >> button_1;

	// determine which state to go into first

	if (button_1 == 0)
	{
		base_power_on.execute();
		state = Pwr_On;
		cout << "\n";
	}
	else if (button_1 == 1)
	{
		cout << "Radio is already off";
		cout << "\n";
		state = Pwr_Off;
	}
	else if (button_1 == 2)
	{
		cout << "Turn radio on first";
		cout << "\n";
		state = Pwr_Off;
	}
	else if (button_1 == 3)
	{
		cout << "Turn radio on first";
		cout << "\n";
		state = Pwr_Off;
	}
	else if (button_1 == 4)
	{
		base_zeroize.execute();
		state = Zeroize;
	}


	for (int i = 1; i = 100; i++)
	{
		cout << "\n";
		cout << "Press another button";
		cout << "\n";
		
		cin >> button_2;

		if ((state == Pwr_On) && (button_2 == 0))
		{
			cout << "Radio is already on";
			cout << "\n";
			state = Pwr_On;
		}
		else if ((state == Pwr_On) && (button_2 == 1))
		{
			base_power_off.execute();
			state = Pwr_Off;
		}
		else if ((state == Pwr_On) && (button_2 == 2))
		{
			base_volume_up.execute();
			state = Pwr_On;
		}
		else if ((state == Pwr_On) && (button_2 == 3))
		{
			base_volume_down.execute();
			state = Pwr_On;
		}
		else if ((state == Pwr_Off) && (button_2 == 0))
		{
			base_power_on.execute();
			state = Pwr_On;
		}
		else if ((state == Pwr_Off) && ((button_2 == 1) ||
			(button_2 == 2) || button_2 == 3))
		{
			cout << "Turn radio on first";
			cout << "\n";
			state = Pwr_Off;
		}
		else if (button_2 == 4)
		{
			base_zeroize.execute();
			state = Zeroize;
		}

	}

	return 0;
}




void Radio::power_on()
{
	// Auto-generated method
	cout << "ON";
}


void Radio::power_off()
{
	// Auto-generated method
	cout << "OFF";
}

void Radio::volume_up()
{
	// Auto-generated method
	cout << "VOLUME UP";
}

void Radio::volume_down()
{
	// Auto-generated method
	cout << "VOLUME DOWN";
}

void Radio::zeroize()
{
	// Auto-generated method
	cout << "ZEROIZE";
}

