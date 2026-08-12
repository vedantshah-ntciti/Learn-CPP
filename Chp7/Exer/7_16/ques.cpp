#include <iostream>
#include <random>
#include <array>
#include <ctime>
using namespace std;

int main()
{
    array <int, 11> result = {};
    int die1, die2;
    default_random_engine engine(static_cast <unsigned int> (time(0)));
    uniform_int_distribution <unsigned int> randomInt(1,6);

    for (unsigned int i = 0; i<36000; i++)
    {
        die1 = randomInt(engine);
        die2 = randomInt(engine);

        result[die1 + die2 - 2]++;
    }

    cout << "  ";
    for (int i = 1; i<=6; i++)
    {
        cout << i << "    ";
    }
    cout << endl;
    for (int i = 1; i<=6; i++)
    {
        cout << i << " ";
        for (int j =1; j<= 6; j++)
        {
            cout << result[j + i -2] << " ";
        }
        cout << endl;
    }

}