#include "iostream"
#include "cstring"

class DeepCopy
{
	public:
	int size;
	int *data;
	DeepCopy(int size) : size(size) // this->size = size;
	{
		data = new int[size];
	}

	DeepCopy(const DeepCopy& exec) : size(exec.size) // this->size = exec.size;
	{
		data = new int[size];
		std::memcpy(data, exec.data, size * sizeof(int));
		std::cout << "Deep copy constuctor cağrildi." << std::endl;
	}
	~DeepCopy()
	{
		delete[] data;
	}
};

int main ()
{
	DeepCopy obj1(3);
	obj1.data[0] = 1;
	obj1.data[1] = 1;
	obj1.data[2] = 1;
	

	DeepCopy obj2(obj1);
	obj1.data[0] = 100;
	std::cout << "obj1.data[0]: " << obj1.data[0] << std::endl;
	std::cout << "obj1.data[1]: " << obj1.data[1] << std::endl;
	std::cout << "obj1.data[2]: " << obj1.data[2] << std::endl;
	std::cout << "obj2.data[0]: " << obj2.data[0] << std::endl;
	std::cout << "obj2.data[1]: " << obj2.data[1] << std::endl;
	std::cout << "obj2.data[2]: " << obj2.data[2] << std::endl;

}

