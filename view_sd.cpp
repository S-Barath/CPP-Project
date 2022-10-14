#include <iostream>
using namespace std;
#include "basecontroller.h"
#include "view_sd.h"
#include "basemodel.h"

static int sum_of_digit_(int digit)
{
	int sum = 0;
	while(digit)
	{
		sum +=digit % 10;
		digit /= 10;
	}
	return sum;
}

void sum_of_digit::update()
{
	int x = ptr_model_->get_x();
	cout << "Sum of digits : " << sum_of_digit_(x) << "\n";
}

void sum_of_digit::get_model(Model *ptr_model)
{
	ptr_model_ = ptr_model;
}

void sum_of_digit::register_view(Controller_base* ptr_c)
{
	ptr_c->add(this);
};
void sum_of_digit::deregister_view(Controller_base* ptr_c)
{
	ptr_c->remove(this);
};