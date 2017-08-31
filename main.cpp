// Program to show Strategy Design pattern
#include <iostream>
#include <stdlib.h>

#include "../Duck.h"
#include "../MallardDuck.h"
#include "../ModelDuck.h"

using namespace std;

int main()
{
	cout << "Strategy Design Pattern" << endl;
    Duck* duck = new MallardDuck;
    duck->performFly();

    Duck* duck1 = new ModelDuck;
    duck1->performFly();

    return 0;
}
