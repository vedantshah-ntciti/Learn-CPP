#include <array>

void printArr(std::array* arr)
{
	for (std::size_t i = 0; i < arr.size(); i++) {
		std::cout << std::setw(7) << i << std::setw(13) << arr[i] << std::endl;
	}
}
