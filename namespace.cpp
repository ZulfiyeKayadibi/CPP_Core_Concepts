#include "iostream"

namespace val
{
	int a = 90;
	int b;
}

namespace func
{
	int toplam(int, int);
	int cikarma(int x, int y)
	{
		return x - y;
	}
}

int func::toplam(int x, int y)
{
	return x + y;
}
int  main()
{
	val::b = 10;
	std::cout << "a + b = " << func::toplam(val::a, val::b) << std::endl;
	std::cout << "a - b = " << func::cikarma(val::a, val::b) << std::endl;
}

// Namespace, isim çakışmalarını önlemek için kullanılır.
// Örneğin toplama işlemi iki farklı başlıkta
// Biri mat alanına bir fizik alanına özgü formülü ile

namespace matematik {
    int formul(int a, int b);
}

namespace fizik {
    int formul(int a, int b);
}

int matematik::formul(int a, int b)
{
	return a + b;
}

int fizik::formul(int a, int b)
{
	int sonuc = (a + b) * 2;
	return sonuc; 
}