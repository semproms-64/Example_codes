#include <stdio.h>

typedef struct Queue {
        int capacity;
        int size;
        int front;
        int rear;
        int *elements;
}Queue;

Queue * createQueue(int maxElements) {
        Queue *Q;
        Q = (Queue *)malloc(sizeof(Queue));
        Q->elements = (int *)malloc(sizeof(int)*maxElements);
        Q->size = 0;
        Q->capacity = maxElements;
        Q->front = 0;
        Q->rear = -1;
        return Q;
}

void Dequeue(Queue *Q) {
        if(Q->size==0)
        {
                printf("Queue is Empty\n");
                return;
        }
        else
        {
                Q->size--;
                Q->front++;
                if(Q->front==Q->capacity)
                {
                        Q->front=0;
                }
        }
        return;
}

int front(Queue *Q) {
        if(Q->size==0)
        {
                printf("Queue is Empty\n");
                exit(0);
        }
        return Q->elements[Q->front];
}

void Enqueue(Queue *Q,int element) {
    
        if(Q->size == Q->capacity)
        {
                printf("Queue is Full\n");
        }
        else
        {
                Q->size++;
                Q->rear = Q->rear + 1;
                if(Q->rear == Q->capacity)
                {
                        Q->rear = 0;
                }
                Q->elements[Q->rear] = element;
        }
        return;
}

int main() {
        Queue *Q = createQueue(5);
        Enqueue(Q,1);
        Enqueue(Q,2);
        Enqueue(Q,3);
        Enqueue(Q,4);
        printf("Front element is %d\n",front(Q));
        Enqueue(Q,5);
        Dequeue(Q);
        Enqueue(Q,6);
        printf("Front element is %d\n",front(Q));
}