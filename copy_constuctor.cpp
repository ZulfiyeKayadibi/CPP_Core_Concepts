#include "iostream"
#include "string.h"

class human
{
	private:
	int age;
	std::string name;
	std::string surname;
	public:
	human();
	human(std::string name, std::string surname, int age);
	human(const human& exec);
	std::string getName();
	std::string getSurname();
	int getAge();
	void setName(std::string name);
};

void human::setName(std::string name)
{
	this->name = name;
}

std::string human::getName()
{
	return name;
}

std::string human::getSurname()
{
	return surname;
}

int human::getAge()
{
	return age;
}

human::human()
{
	this->name = "name";
	this->surname = "surname";
	this->age = 0;
}

human::human(std::string name, std::string surname, int age)
{
	this->name = name;
	this->surname = surname;
	this->age = age;
}

human::human(const human& exec)
{
	this->name = exec.name;
	this->surname = exec.surname;
	this->age = exec.age;
}

int main ()
{
	human first;
	human second("Zulfiye", "Kayadibi", 21);
	human third(second);

	second.setName("Dilek");

	std::cout << first.getName() << " "
				<< second.getName() << " "
				<< third.getName() << std::endl;

	// second name için set kullanılsa da third nesnesi değişikliğe uğramaz.

	std::cout << first.getAge() << " "
				<< second.getAge() << " "
				<< third.getAge() << std::endl;
}