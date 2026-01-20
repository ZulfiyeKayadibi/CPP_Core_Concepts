#include "iostream"
#include "string.h"

class Template
{
	private:
	int *data;
	std::string name;
	public:
	Template(std::string name);
	~Template();
	void displayData();
};

Template::Template(std::string name)
{
	data = new int[5];
	this->name = name;
	std::cout << this->name << " tarafindan Constructor çağrildi." << std::endl;
}

Template::~Template()
{
	delete[] data; //Dinamik olarak tahsis edilmmiş belleği serbest bırakır.
	std::cout << this->name <<" tarafindan Destructor çağrildi." << std::endl;
}
void Template::displayData()
{
	for(int i = 0; i < 5; ++i)
	{
		data[i] = i;
		std::cout << data[i] << " ";
	}
	std::cout << std::endl;
}

int main()
{
	Template one("one");
	one.displayData();

	Template *two = new Template("two"); // Pointer olarak oluşturursak eğer
	two->displayData();
	delete two; // Kendimiz temizlemeliyiz
	return 0;
}


// new heap üzerinde adres ayırdığımız anlamına gelir. Ve bana o belleğin adresini(pointer) döner
// iki farklı new var.

// nesne oluşturma
// new Template;
// delete two;

// dizi oluşturma
// new int[5];
// delete[] data;