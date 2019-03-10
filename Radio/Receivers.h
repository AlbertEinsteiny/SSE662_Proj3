#pragma once


class Radio
{
public:
	// these are all of the receivers
	void power_on();
	void power_off();
	void volume_up();
	void volume_down();
	void zeroize();
};
Radio radio;



// variables to hold the radio state
int Pwr_On;
int Pwr_Off;
int Vol_Up;
int Vol_Dn;
int Zeroize;



