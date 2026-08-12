#include <iostream>
using namespace std;

void useLocal();
void useStaticLocal();
void useGlobal();

int x = 1;

int main() {
    cout << "global x in main is" << x<< endl;
    int x = 5;
    
    cout << "local x in main inner scope is<"<< x << endl;

    {
        int x = 7;

        cout << "local x in main inner scope is " << x << endl;
    }

    cout << "local x in main outer scope is " << x << endl;

    useLocal() ;
    useStaticLocal();
    useGlobal();
    useLocal() ;
    useStaticLocal();
    useGlobal();

    cout << "\nlocal x in main is " << x << endl;

}


void useLocal() {
    int x = 25;

    cout << "\nlocal x is " << x << endl;
    ++x;
    cout << "local x is " << x << "on exiting useLocal" << endl;
}

void useStaticLocal() {
    static int x =50;

    cout << "\nlocal static is " << x << "on entering staticLocal " << endl;

    ++x;
    cout << "\nlocal static is " << x << "on exiting staticLocal " << endl;

}


void useGlobal(){
    cout << "\nglobal x is " << x << " on entering useGlobal" << endl;
    x*=10;
    cout << "\nglobal x is " << x << " on exiting useGlobal" << endl;
}