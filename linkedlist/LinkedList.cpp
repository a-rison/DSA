#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int a[], int n)
{
    int i;
    struct Node *t, *last;
    first = new Node;
    first->data = a[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void Rdisplay(struct Node *p) // Recursive display
{
    if (p != NULL)
    {
        printf("%d ", p->data);
        Rdisplay(p->next);
    }
}

void RRdisplay(struct Node *p) // Reverse Recursive display
{
    if (p != NULL)
    {
        RRdisplay(p->next);
        printf("%d ", p->data);
    }
}

int count(struct Node *p)
{
    int l = 0;
    while (p)
    {
        l++;
        p = p->next;
    }
    return l;
}

int Rcount(struct Node *p) // Recursive count
{
    if (p == 0)
        return 0;
    else
        return Rcount(p->next) + 1;
}

int sum(struct Node *p)
{
    int sum = 0;
    while (p)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}

int Rsum(struct Node *p) // Recursive sum
{
    if (p == 0)
        return 0;
    else
        return Rsum(p->next) + p->data;
}

int Max(struct Node *p)
{
    int max = INT_MIN;
    while (p)
    {
        if (p->data > max)
            max = p->data;
        p = p->next;
    }
    return max;
}

int RMax(struct Node *p) // recursive method
{
    int x = 0;
    if (p == 0)
        return INT_MIN;
    else
    {
        x = RMax(p->next);
    }
}

struct Node *LSearch2(struct Node *p, int key)
{
    Node *q = NULL;
    while (p != NULL)
    {
        if (p->data == key)
        {
            q->next = p->next;
            p->next = first;
            first = p;
        }
        q = p;
        p = p->next;
    }
}

struct Node *LSearch(struct Node *p, int key)
{
    while (p != NULL)
    {
        if (key == p->data)
            return p;
        p = p->next;
    }
    return NULL;
}

struct Node *RSearch(struct Node *p, int key)
{
    if (p == NULL)
        return NULL;
    if (p->data == key)
        return p;
    else
        return RSearch(p->next, key);
}

void insert(int pos, int x)
{
    Node *t, *p;
    if (pos == 0)
    {
        t = new Node;
        t->data = x;
        t->next = first;
        first = t;
    }
    else
    {
        p = first;
        for (int i = 0; i < pos; i++)
            p = p->next;
        if (p)
        {
            t = new Node;
            t->data = x;
            t->next = p->next;
            p->next = t;
        }
    }
}

int main()
{
    int a[] = {3, 4, 5, 6, 7, 8, 12, 56};

    create(a, 8);
    display(first);

    cout << "Recursive display: " << endl;
    Rdisplay(first);
    cout << endl;

    cout << "Reverse recursive display: " << endl;
    RRdisplay(first);
    cout << endl;

    cout << "Number of nodes: " << Rcount(first) << endl;

    cout << "Sum of all nodes: " << Rsum(first) << endl;

    cout << "Max number is: " << Max(first) << endl;

    struct Node *temp;
    temp = LSearch(first, 25);
    if (temp)
        cout << "Key is found " << temp->data;
    else
        cout << "Key is not found";

    return 0;
}