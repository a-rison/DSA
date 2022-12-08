#include<bits/stdc++.h>

using namespace std;

struct Queue 
{
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct Queue *q, int size)
{
    q->Q = new int[size];
    q->front = q->rear = -1;
}

void enqueue(struct Queue *q, int x)
{
    if(q->rear == q->size-1)
        cout << "Queue is full" << endl;
    else
    {
        q->rear++;
        q->Q[q->rear] = x;
    }
}

int dequeue(struct Queue *q)
{
    int x = -1;
    if(q->front == q->rear)
        cout << "Queue is empty" << endl;
    else
    {
        q->front++;
        x = q->Q[q->front];
    }
    return x;
}

void Display(struct Queue q)
{
    for (int i = q.front + 1; i <= q.rear; i++)
        cout << q.Q[i] << " ";
    cout << endl;
}

int main()
{
    struct Queue q;
    cout << "Enter the size of queue: ";
    cin >> q.size;
    create(&q, q.size);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);

    dequeue(&q);

    Display(q);

    return 0;
}