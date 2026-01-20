#include "string.h"
#include "iostream"

class dikd
{
	public:
	int x;
	int y;
	void dikd_alani();
};

class kare
{
	private:
	int x = 4;
	public:
	void kare_alani();	
};

void kare::kare_alani()
{
	std::cout << "karenin alani: " << x * x << std::endl; 
}

void dikd::dikd_alani()
{
	std::cout << "dikdörtgenin alani: "  << x * y << std::endl;
}

int main ()
{
	dikd mavi;
	mavi.x = 10;
	mavi.y = 4;
	mavi.dikd_alani();

	kare yesil;
	yesil.kare_alani();
}