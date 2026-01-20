#include "iostream"

// class exec
// {...}

// int main (){
// exec obj1, obj2;
// obj1 = obj2;
// }
// c++'da nesneler aynı class'a ait olsa da obj1 = obj2 gibi bir atama mümkün değildir.

class exec
{
	public:
	int x;
	int y;
	exec& operator=(const exec& aa);
};

exec& exec::operator=(const exec& nw)
{
	if (this != &nw) // a = a durumunda gereksiz işlemi önler
	{
		this->x = nw.x;
		this->y = nw.y;
	}
	return *this;
}

int main()
{
	exec a;
	exec b;

	a = b;
	std::cout << a.x << std::endl;
	std::cout << b.x << std::endl;
	(a = b).x = 42;
	std::cout << a.x << std::endl;
	std::cout << b.x << std::endl;
}

// operator overloading özel bir söz dizimine sahiptir "operaotor=()"
// eğer bunu kullanmak istemezek copy constructor oluşturabiliriz.

// exec& ifadesiyle referansını döndürüğümüz için (a = b).x = 42 ifadesini kullanabildik
// (a = b).x = 42 bu ifade a.x = 42 anlamına gelir.