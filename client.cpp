#include<iostream>
#include "basecontroller.h"
#include "baseview.h"
#include "basemodel.h"
#include "dermodel.h"
#include "derview.h"
#include "dercontroller.h"

using namespace std;
int main()
{
	Model1 m(10);
	Controller c(&m);
	m.set_controller(&c);
	
	View_sq view_sq;
	view_sq.register_view(&c);
	view_sq.get_model(&m);
	
	m.change(25);
	
	
	
	
}
