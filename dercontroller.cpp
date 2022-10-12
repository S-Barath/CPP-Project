#include<iostream>
#include "basecontroller.h"
#include "baseview.h"
#include "basemodel.h"
#include "dermodel.h"
#include "derview.h"
#include "dercontroller.h"
using namespace std;

void Controller::update() 
{
		ptr_v1_->update();
}
void  Controller::add(View* ptr_v)
{
ptr_v1_ = ptr_v; 
}