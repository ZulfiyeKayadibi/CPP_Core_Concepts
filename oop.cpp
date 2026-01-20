#include "iostream"
#include "string.h"
class Aday
{
	private :
	std::string isim;
	std::string cinsiyet;
	int yas;
	std::string meslek;
	std::string alani;
	public :
	Aday(std::string isim, int yas, std::string cinsiyet, std::string meslek)
	{
		this -> isim = isim;
		this -> yas = yas;
		this -> cinsiyet = cinsiyet;
		this -> meslek = meslek;
	};

	void kisi()
	{
		std::cout << isim << std::endl;
		std::cout << yas << std::endl;
		std::cout << cinsiyet << std::endl;
		std::cout << meslek << std::endl;
	}

	void kendini_tanit(std::string tanim)
	{
		std::cout << tanim << std::endl;
	};
	void uzman_alanin(std::string alani)
	{
		std::cout << "uzmanlik alanim: " << alani << std::endl;
	};
};

int main (int ac, char **av)
{
	Aday me("Zulfiye", 21, "kiz", "bt mimari uzmani");
	me.kisi();
	me.kendini_tanit("19 yaşinda ecole 42'de yazilim sektörüne adim atmiş hayallerinden bile otede buyuk isler basarmis bir genc.");
	me.uzman_alanin("backend");
}

// Constructor, bir nesne oluşturulduğu anda otomatik çalışan özel bir fonksiyondur.
// 📌 Class adıyla aynı isme sahiptir
// 📌 Geri dönüş tipi yoktur
// 📌 Nesne yaratılırken kendiliğinden çağrılır
// Nesneyi hazr ve geçerli hale getirir.
// Değerleri ilk anda atar
// Nesnenin boş kalmasını engeller

class Aday2 {
public:
    Aday2() {
        std::cout << "Nesne olustu" << std::endl;
    }
};

// this nesnenin kendisini işaret eder.
//   this->isim = isim;
//   this->isim ---> class'ın değişkenini
//   isim ---> fonskiyonun parametresi.