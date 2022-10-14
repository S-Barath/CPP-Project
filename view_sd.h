
#ifndef VIEW_SD_H
#define VIEW_SD_H
#include<iostream>
#include "baseview.h"
using namespace std;
class sum_of_digit : public View
{
	public:
	virtual void update();
	virtual void get_model(Model *ptr_model);
	virtual void  register_view(Controller_base* ptr_c);
	virtual void deregister_view(Controller_base* ptr_c);

	private:
	Model *ptr_model_;

};
#endif