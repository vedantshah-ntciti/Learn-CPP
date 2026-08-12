#include <iostream>
#include "classEncrypt.h"
using namespace std;

int classEncrypt::encrypt(int number){
    int new_num = 0;
    if (number < 1000 || number >9999) {
        cerr << "Invalid Input" << endl;
        return 0;
    }    
    new_num += 100*((7+number%10)%10);
    number/= 10;

    new_num += 1000*((7+number%10)%10);
    number/= 10;
    
    new_num += 1*((7+number%10)%10);
    number/= 10;

    new_num += 10*((7+number%10)%10);
    
    return new_num;
}

int classEncrypt::decrypt(int number){
    int new_num = 0;
    new_num += 100*((3+number%10)%10);
    number/= 10;

    new_num += 1000*((3+number%10)%10);
    number/= 10;
    
    new_num += 1*((3+number%10)%10);
    number/= 10;

    new_num += 10*((3+number%10)%10);
    
    return new_num;
}