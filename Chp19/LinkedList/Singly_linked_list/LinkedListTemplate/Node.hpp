#ifndef NODE_H
#define NODE_H

template < typename NODETYPE >
class Node
{
    public:
        NODETYPE data;
        Node * next;

        Node( NODETYPE data )
        {
            this->data = data;
            this->next = next;
        }
};

#endif
