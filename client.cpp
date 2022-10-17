#include<iostream>
#include"viewcube.h"
#include"view_sd.h"
#include "viewbit.h"
#include "dermodel.h"
#include "derview.h"
#include "dercontroller.h"
#include "baseview.h"
#include "basecontroller.h"
#include "basemodel.h"
using namespace std;
int main()
{
	/*Model1 m(20);
	Controller c(&m);
	m.set_controller(&c);
	
	View_sq view_sq;
	view_sq.register_view(&c);
	view_sq.get_model(&m);
	view_sq.update();
	
	cube Cube;
	Cube.register_view(&c);
	Cube.get_model(&m);
	Cube.update();

	sum_of_digit SOD;
	SOD.register_view(&c);
	SOD.get_model(&m);
	SOD.update();
	
	bits bit;
	bit.register_view(&c);
	bit.get_model(&m);
	bit.update();

	
	cout<<"\n";
	m.change(65);
	view_sq.update();
	Cube.update();
	SOD.update();*/
	
	int n,st;
	
	cout<< "Enter a num:";
	cin>>n;
	Model1 m(n);
	Controller c(&m);
	m.set_controller(&c);
	
	View_sq view_sq;
	cube Cube;
	sum_of_digit SOD;
	bits bit;
	
	while(true)
	{
		cout<<"Choose the option:"<<"\n";
		cout<<"1.Change model\n\n2.Square view register\n\n3.Cube view register\n\n4.Bit view register\n\n5.Sum of Digit view register\n\n6.Deregister Square view\n\n"
				"7. Deregister Cube view\n\n8.Deregister Bit count view\n\n9.Deregister Digits sum view\n\n0 to EXIT\n";
	cin>>st;
	
	switch(st)
		{
			case 0: exit(0);
			case 1: cout << "Enter a new number: ";
					cin >> n;
					m.change(n);
					break;
			case 2: view_sq.register_view(&c);
					view_sq.get_model(&m);
					//view_sq.update();
					break;

			case 3: Cube.register_view(&c);
					Cube.get_model(&m);
					//Cube.update();
					break;
			
			case 4: bit.register_view(&c);
					bit.get_model(&m);
					//bit.update();
					break;

			case 5: SOD.register_view(&c);
					SOD.get_model(&m);
					//SOD.update();
					break;

			case 6: view_sq.deregister_view(&c);
					break;

			case 7: Cube.deregister_view(&c);
					break;

			case 8: bit.deregister_view(&c);
					break;

			case 9:SOD.deregister_view(&c);
					break;
		
			default: cout << "Invalid choice";
					break;
	
	}
	}
}
