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

void Insert(struct Node *p, int index, int x)
{
    struct Node *t;
    int i;

    if(index < 0 || index > Length(p))
        return;
    if(index==0)
    {
        t = new struct Node;
        t->prev = NULL;
        t->data = x;
        t->next = first->next;
        first = t;
    }
    else
    {
        t = new struct Node;
        for(int i=0;i<index-1;i++)
        {
            p=p->next;
        }
        t->data = x;
        if(p->next)p->next->prev = t;
        t->next = p->next;
        p->next = t;
        t->prev = p;
        
    }
}

int main()
{
    int A[] = {10,20,30,40,50};
    create(A,5);

    Insert(first,5,25);

    cout << "Length is: " << Length(first) << endl;

    Display(first);

    return 0;
}