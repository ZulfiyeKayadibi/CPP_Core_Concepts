#include "string.h"
#include "iostream"
using namespace std;

// Nesne oluşturulurken çağrlan özel metodlardir
// Yapıcı(Parametreli) ve Kurucu(Parametresiz) method olarak ikiye ayrılır


class kare
{
	private:
	int x;
	public:
	kare(); //Default Constructor
	kare(int x); // Constructor
	void set_x(int x);
	int get_x();
};

kare::kare()
{
	this->x = 20;
}

kare::kare(int x)
{
	this->x = x;
}

void kare::set_x(int x)
{
	this->x = x;
}

int kare::get_x()
{
	return this->x;
}

int main ()
{
	int val = 10;
	kare a;
	kare b(5);
	kare c(val);

	c.set_x(22);
	std::cout << "a değeri: " << a.get_x() << std::endl;
	std::cout << "b değeri: " << b.get_x() << std::endl;
	std::cout << "c değeri: " << c.get_x() << std::endl;

}