#ifndef _MODEL_DUCK_
#define _MODEL_DUCK_

#include "Duck.h"
#include "FlyWithOutWings.h"

class ModelDuck : public Duck
{
public:
	ModelDuck()
	{ 
		cout << "Model Duck" << endl;
		_flyBehavior = new FlyWithOutWings();
	}
};

#endif