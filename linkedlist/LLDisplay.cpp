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

    return 0;
}