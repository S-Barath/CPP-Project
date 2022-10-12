#ifndef BASECONTROLLER_H
#define BASECONTROLLER_H
class Controller_base;
class View;
class Controller_base 
{
	public:
	virtual ~Controller_base() { }
	virtual void update() = 0;
	virtual void add(View* ptr_v) = 0;

};
#endif