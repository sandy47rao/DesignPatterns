#ifndef _FLY_WITHOUT_WINGS
#define _FLY_WITHOUT_WINGS

#include "FlyBehavior.h"

class FlyWithOutWings : public FlyBehaviors
{
public:
	void fly()
	{
		cout << "Fly without Wings " << endl;
	}
};

#endif