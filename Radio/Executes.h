#pragma once
#include "Receivers.h"

//every command must have an execute option
class Command
{
public:
	virtual void execute() = 0;
};

class Base_Power_On : public Command
{
public:
	void execute()
	{
		radio.power_on();
	}
};

Base_Power_On base_power_on;

class Base_Power_Off : public Command
{
public:
	void execute()
	{
		radio.power_off();
	}
};

Base_Power_Off base_power_off;


class Base_Volume_Down : public Command
{
public:
	void execute()
	{
		radio.volume_down();
	}
};

Base_Volume_Down base_volume_down;


class Base_Volume_Up : public Command
{
public:
	void execute()
	{
		radio.volume_up();
	}
};

Base_Volume_Up base_volume_up;


class Base_Zeroize : public Command
{
public:
	void execute()
	{
		radio.zeroize();
	}
};

Base_Zeroize base_zeroize;
