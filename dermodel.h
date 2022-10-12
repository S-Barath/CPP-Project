#ifndef DERMODEL_H
#define DERMODEL_H
class Model1 : public Model 
{
	public:
	Model1(int x) : x_(x) { }
	
	virtual void set_controller(Controller_base* ptr_c);
	void change(int x);
	int get_x();
	
	private:
	Controller_base* ptr_c_;
	int x_;
	
};
#endif