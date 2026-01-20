#include "iostream"
#include "string.h"

class dikdrtgn
{
	private:
	int x;
	int y;
	std::string name;
	public:
	dikdrtgn();
	dikdrtgn(int x, int y, std::string name);
	int get_x();
	int get_y();
};

dikdrtgn::dikdrtgn()
{
	this->x = 0;
	this->y = 0;
	this->name = "";
	std::cout << "Default Constructor çağrildi" << std::endl;
}

dikdrtgn::dikdrtgn(int x, int y, std::string name)
{
	this->x = x;
	this->y = y;
	this->name = name;
	std::cout << this->name << " Tarafindan constructor çağrildi." << std::endl;
	std::cout << "Değerler:\nx: " << this->x << "\ny: " << this->y << std::endl;
}

int main()
{
	dikdrtgn A;
	dikdrtgn B(10, 20, "B");

	dikdrtgn C[2]; //2 default constructor oluştu.
	dikdrtgn D[3] = {dikdrtgn(3, 4, "dizi_1"), dikdrtgn(5, 6, "dizi_2"), dikdrtgn(7, 8, "dizi_3")};
}