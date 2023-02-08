#include <iostream>

int main() {

	for (int i = 0; i < 51; i++) {
		int pairNb = i % 2;

		if (pairNb == 0) {
			std::cout << i << " Is even" << std::endl;
		}
		else {
			std::cout << i << " Is odd" << std::endl;
		}
	}
	return 0;
}