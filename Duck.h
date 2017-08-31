// A Duck Interface
#ifndef _DUCK_
#define _DUCK_

#include "FlyBehavior.h"

class Duck
{
public:
	void performFly()
	{
		_flyBehavior->fly();
	}

	FlyBehaviors* _flyBehavior;

	void setFlyBehavior(FlyBehaviors* fb)
	{
		_flyBehavior = fb;
	}

};

#endif