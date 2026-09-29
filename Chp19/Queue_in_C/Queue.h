#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

#define MAX_SIZE 100

typedef struct Queue
{
    int arr[MAX_SIZE];
    int front;
    int rear;
} Queue;

void initialize( Queue *queue);

bool isFull( Queue *queue);

bool isEmpty( Queue *queue); 

int dequeue( Queue *queue );

void enqueue( Queue *queue , int data );

int front( Queue *queue );

int rear( Queue *queue );

void printQueue( Queue *queue );

#endif
