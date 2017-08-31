#ifndef _FLY_WITH_WINGS
#define _FLY_WITH_WINGS

#include "FlyBehavior.h"

class FlyWithWings : public FlyBehaviors
{
public:
	void fly()
	{
		cout << "Fly with Wings " << endl;
	}
};

#endif