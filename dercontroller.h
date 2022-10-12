#ifndef DERCONTROLLER_H
#define DERCONTROLLER_H
class Controller : public Controller_base
{
	public:
	Controller(Model* ptr_m) : ptr_m_(ptr_m) { }
	virtual void add(View* ptr_v);
	virtual void update();
	

	private:
	Model* ptr_m_;
	View *ptr_v1_;

};
#endif