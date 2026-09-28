#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.hpp"
#include <iostream>

template<typename NODETYPE>
class LinkedList
{
    private:
        Node<NODETYPE>* header;
        int size;

    public:
        LinkedList()
        {
            this->header = nullptr;
            this->size = 0;
        }


        void prepend( NODETYPE data )
        {
            Node<NODETYPE> * n = new Node<NODETYPE>( data );
            n->next = header;
            header = n;
            size++;
        }
            
        void append( NODETYPE data )
        {
            Node<NODETYPE>* n = new Node<NODETYPE>( data );
            if ( header == nullptr )
            {
                header = n;
            }

            else
            {
                Node<NODETYPE> * current  = header;
                while ( current->next != nullptr )
                {
                    current = current->next;
                }
                current->next = n;
            }
            size++;
        }

        void insertAt( NODETYPE data , int index )
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
                Node<NODETYPE> * current = header;
                Node<NODETYPE> * n = new Node<NODETYPE>( data );
                for ( int i = 0; i < index-1; ++i)
                {
                    current = current->next;
                }
                
                n->next = current->next;
                current->next = n;
            }
            size++;
        }

        void remove( NODETYPE data )
        {
            if ( header == nullptr )
            {
                return;
            }

            if ( header->data == data )
            {
                Node<NODETYPE> * temp = header;
                header = header->next;
                delete temp;
                size--;
            }
            else
            {
                Node<NODETYPE> * current = header;
                Node<NODETYPE> * prev = nullptr;
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

            Node<NODETYPE> * current = header;
            while ( current != nullptr )
            {
                std::cout << current->data << " -> ";
                current = current->next;
            }
            std::cout << "null" << std::endl;
        }

        ~LinkedList() 
        {
            Node<NODETYPE> * current = header;
            while ( current != nullptr )
            {
                Node<NODETYPE> * temp = current;
                current = current->next;
                delete temp;
            }
        }

};

#endif
