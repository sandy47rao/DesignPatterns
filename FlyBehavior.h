#ifndef _FLY_BEHAVIOR
#define _FLY_BEHAVIOR

#include <iostream>
using namespace std;

class FlyBehaviors
{
public:
	virtual void fly()
	{
		cout << "Fly" << endl;
	}

};

#endif
