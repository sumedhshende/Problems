#include <iostream>

class Base {

public:
	virtual void print(int a =10, int b=20) {
		std::cout << "Base     : " << a << " " << b << std::endl;
	}
};

class Derived1 : public Base {

public:
	void print(int a =30, int b=40) {
		std::cout << "Derived1 : " << a << " " << b << std::endl;
	}
};
class Derived2 : public Derived1 {

public:
	void print(int a =50, int b=60) {
		std::cout << "Derived2 : " << a << " " << b << std::endl;
	}
};

int main(void) {
	Base *ptr = nullptr;
	Base b;
	b.print();
	Derived1 d1;
	d1.print();
	Derived2 d2;
	d2.print();

	ptr = &b;
	ptr->print();
	 
	ptr = &d1;
	ptr->print(33, 44);

	ptr = &d2;
	ptr->print(11, 22);
	return 0;
}
