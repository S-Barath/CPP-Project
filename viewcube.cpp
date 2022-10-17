#include <iostream>
using namespace std;
#include "basecontroller.h"
#include "baseview.h"
#include "basemodel.h"
#include "viewcube.h"


void cube::update()
{
	int x = ptr_model_->get_x();
	cout << "Cube : " << x * x * x<< "\n";
}

void cube::get_model(Model *ptr_model)
{
	ptr_model_ = ptr_model;
}

void cube::register_view(Controller_base* ptr_c)
{
	ptr_c->add(this);
};
void cube::deregister_view(Controller_base* ptr_c)
{
	ptr_c->remove(this);
};