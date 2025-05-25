#include <iostream>
#include <string>
#include "SparseArr.h"

int main() {
	try {
		SparseArr<double> sal(2000000);
		sal[127649] = 1.1;
		sal[38225] = 1.2;
		sal[1999999] = 1.4;
		sal.Show("sal");

		std::cout << "sal[38225] = " << sal[38225] << std::endl;
		sal[38225] = sal[93]; // Создаст элемент 93 со значением 0.0
		std::cout << "After the modification of sal:" << std::endl;
		sal.Show("sal");

		SparseArr<std::string> sa2(1000);
		sa2[333] = "Nick";
		sa2[222] = "Peter";
		sa2[444] = "Ann";
		sa2.Show("sa2");
		sa2[222] = sa2[555]; // Создаст элемент 555 с пустой строкой
		sa2.Show("sa2");
	}
	catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	return 0;
}