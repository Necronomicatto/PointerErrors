#include <iostream>

class PresentDay {
	public:
		void printMessage() {
			std::cout << "Let's all love Lain!" << std::endl;
		}
};

int main() {
	//vazamento de memoria
	int* ptrA = new int;
	ptrA = new int;

	delete ptrA;

	//acesso indevido de memoria
	int arr[5] = {1,2,3,4,5};
	int* ptrB = &arr[0];

	std::cout << ptr[5] << std::endl;

	//referencia a objeto destruido
	PresentDay* ptrC = new PresentDay;
	delete ptrC;

	ptrC->printMessage();

	return 0;

}

