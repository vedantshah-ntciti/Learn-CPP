#include <stdio.h>
#include <stdbool.h>
#include "Queue.h"

void initialize( Queue *queue)
{
    queue->front = -1;
    queue->rear = 0;
}

bool isFull( Queue *queue)
{
    return queue->rear == MAX_SIZE ;
}

bool isEmpty( Queue *queue)
{   
    return ( queue->front == queue->rear -1 );
}

void enqueue( Queue *queue , int data )
{
    if ( isFull( queue )  )
    {
        printf( "Queue is full\n" );
        return;
    }

    queue->arr[queue->rear] = data;
    queue->rear++;
}

int dequeue( Queue *queue )
{
    if ( isEmpty( queue ))
    {
        printf( "Queue is empty\n" );
        return -1;
    }

    int front = queue->arr[queue->front];
    queue->front++;
    return front;
}

int front( Queue *queue )
{
    if ( isEmpty( queue ))
    {
        printf( "Queue is empty\n" );
        return -1;
    }
    return queue->arr[queue->front + 1];
}
    

int rear( Queue *queue )
{
    if ( isEmpty( queue ))
    {
        printf( "Queue is empty\n" );
        return -1;
    }
    return queue->arr[queue->rear-1];
}

void printQueue( Queue *queue )
{
    if ( isEmpty( queue ))
    {
        printf( "Queue is empty\n" );
        return;
    }
    for ( int i = queue->front+1; i < queue->rear ; i++ )
    {
        printf( "%d " , queue->arr[i] );
    }
    printf( "\n" );
}
