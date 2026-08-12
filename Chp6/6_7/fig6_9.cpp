#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main() {
    unsigned int f1 =0;
    unsigned int f2 =0;
    unsigned int f3 =0;
    unsigned int f4 =0;
    unsigned int f5 =0;
    unsigned int f6 =0;
    for (unsigned int i = 1 ; i<=6000000; i++) {
        unsigned int num = (1+rand() %6);
        
        switch(num) {     
        case 1:
            f1++;
            break;
        case 2:
            f2++;
            break;
        case 3:
            f3++;
            break;
        case 4:
            f4++;
            break;
        case 5:
            f5++;
            break;
        case 6:
            f6++;
            break;
        default:
            cout << "How?" << endl;
        }
    }
    cout << "Face" << setw(13) << "Frequency" << endl;
    cout << "  1" << setw(13) << f1 << endl;
    cout << "  2" << setw(13) << f2 << endl;
    cout << "  3" << setw(13) << f3 << endl;
    cout << "  4" << setw(13) << f4 << endl;
    cout << "  5" << setw(13) << f5 << endl;
    cout << "  6" << setw(13) << f6 << endl;
}