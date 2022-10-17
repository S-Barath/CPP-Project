#include <iostream>
using namespace std;
#include "viewbit.h"
#include "basecontroller.h"
#include "basemodel.h"


static int bits_(int digit)
{
	int count;
	while (digit)
	{
		++count;
		digit >>= 1;
	}
	return count;
}

void bits::update()
{
	int x = ptr_model_->get_x();
	cout << "Bit count : " << bits_(x) << "\n";
}
 
void bits::get_model(Model *ptr_model)
{
	ptr_model_ = ptr_model;
}

void bits::register_view(Controller_base* ptr_c)
{
	ptr_c->add(this);
};

void bits::deregister_view(Controller_base* ptr_c)
{
	ptr_c->remove(this);
};