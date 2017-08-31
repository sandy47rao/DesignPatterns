#ifndef _MALLARD_DUCK_
#define _MALLARD_DUCK_

#include "Duck.h"
#include "FlyWithWings.h"

class MallardDuck : public Duck
{
public:
	MallardDuck()
	{
		_flyBehavior = new FlyWithWings();
	}
};

#endif
