#include <stdio.h>
#include "Queue.h"

int main()
{
    Queue q;
    initialize(&q);

    // Enqueue elements
    enqueue(&q, 10);
    printQueue(&q);

    enqueue(&q, 20);
    printQueue(&q);

    enqueue(&q, 30);
    printQueue(&q);

    // Peek front element
    printf("Front element: %d\n", front(&q));
    printf("Rear element: %d\n", rear(&q));

    // Dequeue an element
    dequeue(&q);
    printQueue(&q);

    // Peek front element after dequeue
    printf("Front element after dequeue: %d\n", front(&q));

    return 0;
}
