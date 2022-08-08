#include<bits/stdc++.h>
using namespace std;

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
}*first = NULL;

void create(int A[],int n)
{
    struct Node *t,*last;
    int i;

    first = new struct Node;
    first->prev = NULL;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(i=1;i<n;i++)
    {
        t = new struct Node;
        t->data = A[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}

void Display(struct Node *p)
{
    while(p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int Length(struct Node *p)
{
    int len = 0;

    while(p)
    {
        len++;
        p=p->next;
    }
    return len;
}

int main()
{
    int A[] = {10,20,30,40,50};
    create(A,5);

    cout << "Length is: " << Length(first) << endl;

    Display(first);

    return 0;
}