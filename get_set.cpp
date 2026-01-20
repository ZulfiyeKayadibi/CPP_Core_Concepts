#include "string.h"
#include "iostream"

class kare
{
	private:
	int x;
	public:
	int get_x();
	void set_x(int new_x);
};

int kare::get_x()
{
	return x;
}
void kare::set_x(int x)
{
	this->x = x;
}

int main ()
{
	kare first;

	first.set_x(10);
	std::cout << "x değeri: " << first.get_x() << std::endl;
}