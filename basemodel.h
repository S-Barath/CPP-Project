#ifndef BASEMODEL_H
#define BASEMODEL_H
class Model;
class Controller_base;
class Model 
{
	public:
	virtual ~Model() { }
	virtual void set_controller(Controller_base* ptr_c) = 0;
	virtual void change(int) = 0;
	virtual int get_x() = 0;
};
#endif