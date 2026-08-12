#include <iostream>
#include <iomanip>
#include <random>
#include <ctime>
#include <array>
using namespace std;

int main() {
    default_random_engine engine(static_cast <unsigned int> (time(0)));
    uniform_int_distribution <unsigned int> randomInt(1,6);

    const size_t arrSize = 7;
    array <unsigned int, arrSize> frequency = {};

    for (unsigned int i = 0; i<6000000; i++) 
    {
        (frequency[randomInt(engine)])++;
    }

    cout << "Face" << setw(13)<< "Frequency" << endl;

    for (size_t i = 1; i<frequency.size(); i++) 
    {
        cout << setw(4) << i << setw(13) << frequency[i] << endl;
    }
  
}