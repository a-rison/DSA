#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *front = NULL, *rear = NULL;

void enqueue(int x)
{
    struct Node *t;
    t = new struct Node;

    if (t == NULL)
        cout << "Queue is full" << endl;
    else
    {
        t->data = x;
        t->next = NULL;
        if (front == NULL)
            front = rear = t;
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue()
{
    struct Node *p;
    int x = -1;

    if (front == NULL)
        cout << "Queue is empty" << endl;
    else
    {
        p = front;
        x = p->data;
        front = front->next;
        free(p);
    }
    return x;
}

void display()
{
    struct Node *p = front;
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << "\n";
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(5);
    enqueue(6);

    display();

    dequeue();
    display();

    return 0;
}