#include<iostream>

class stack {
	public:
		int a;

		stack(){
			this->a = 2;
		}

		~stack(){
			std::cout << "Destructor called" << std::endl;
		}
};
