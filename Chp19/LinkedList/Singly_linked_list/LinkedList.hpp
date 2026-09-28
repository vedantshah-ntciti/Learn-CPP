#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.hpp"
#include <iostream>

class LinkedList
{
    private:
        Node* header;
        int size;
    public:
        LinkedList()
        {
            this->header = nullptr;
            this->size = 0;
        }

        void prepend(int data)
        {
            Node* n = new Node( data );
            n->next = header;
            header = n;
            size++;
        }


        void append( int data )
        {
            Node * n = new Node( data );
            if ( header == nullptr )
            {
                header = n;
            }

            else
            {
                Node * current  = header;
                while ( current->next != nullptr )
                {
                    current = current->next;
                }
                current->next = n;
            }
            size++;
        }
        
        void insertAt( int data, int index)
        {
            if ( index < 0 || index > size)
            {
                std::cout << "Invalid index" << std::endl;
                return;
            }

            if ( index == 0 )
            {
                prepend( data );
            }
            else if ( index == size )
            {
                append( data );
            }
            else 
            {
                Node * current = header;
                Node * n = new Node( data );
                for ( int i = 0; i < index-1; ++i)
                {
                    current = current->next;
                }
                
                n->next = current->next;
                current->next = n;
            }
            size++;
        }
                

        void remove( int data )
        {
            if ( header == nullptr )
            {
                return;
            }

            if ( header->data == data )
            {
                Node * temp = header;
                header = header->next;
                delete temp;
                size--;
            }
            else
            {
                Node * current = header;
                Node * prev = nullptr;
                while ( current != nullptr )
                {
                    if ( current->data == data )
                    {
                        prev->next = current->next;
                        delete current;
                        size--;
                        return;
                    }
                    prev = current;
                    current = current->next;
                }
            }
        }

        void printList() const
        {
            if ( header == nullptr )
            {
                std::cout << "The list is empty." << std::endl;
            }

            Node * current = header;
            while ( current != nullptr )
            {
                std::cout << current->data << " -> ";
                current = current->next;
            }
            std::cout << "null" << std::endl;
        }

        ~LinkedList() 
        {
            Node * current = header;
            while ( current != nullptr )
            {
                Node * temp = current;
                current = current->next;
                delete temp;
            }
        }
};

#endif
