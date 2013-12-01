#include <iostream>

int main(void)
{
	int sum = 0, value;

	while (std::cin >> value)
		sum += value;
	std::cout << sum << std::endl;

	return 0;
}
