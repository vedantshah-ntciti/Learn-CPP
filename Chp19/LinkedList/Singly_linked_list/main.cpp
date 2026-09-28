#include <iostream>
#include "LinkedList.hpp"
#include "Node.hpp"
using namespace std;

int main() {
    LinkedList list;

    list.prepend(200);
    list.append(10);
    list.append(20);
    list.append(30);


    list.insertAt( 50 , 2 );
    list.printList();

    list.remove( 10 );
    list.printList();

    cout << "Linked List: ";
    list.printList();
}
