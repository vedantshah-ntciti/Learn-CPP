#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int generateNumbers() {
    static unsigned int seed_generated = static_cast <unsigned int> (time(0));
    static int seed_made = 0;

    if (seed_made == 0) 
    {
        seed_made = 1;
        srand(seed_generated);
    }
    return rand() % 10;
}

int generateAns(int a, int b, int level) 
{
    switch (level) 
    {
        case 1: 
            return a+b;
        case 2:
            return a-b;
        case 3:
            return a*b;
        default:
            cerr << "Incorrect level number. Default to easy level" << endl;
            return a+b;
    }
}

int main() {
    int a,b;
    a = generateNumbers();
    b = generateNumbers();
    cout << "How much is " << a << " times " << b << " ?" << endl;
    int guess;
    while (cin >> guess) {
        if (guess == a*b)
        {
            cout << "Very Good!" << endl;
            break;
        }
        
        cout << "No. Please Try Again." << endl;
    }
}
