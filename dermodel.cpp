#include<iostream>
#include "basecontroller.h"
#include "baseview.h"
#include "basemodel.h"
#include "dermodel.h"
#include "derview.h"
#include "dercontroller.h"
using namespace std;


void Model1::change(int x) 
{
	x_ = x;
	ptr_c_->update();
}

int Model1::get_x()
{
	return x_;
}
void Model1:: set_controller(Controller_base* ptr_c)
{
	ptr_c_ = ptr_c;
}