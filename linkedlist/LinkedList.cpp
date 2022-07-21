#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
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
    return x;
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
            return p;
        }
        q = p;
        p = p->next;
    }
    return NULL;
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

void insert(struct Node *p, int index, int x)
{
    struct Node *t;

    if (index < 0 || index > count(p))
        return;
    t = new Node;
    t->data = x;

    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
            p = p->next;
        t->next = p->next;
        p->next = t;
    }
}

void SortedInsert(struct Node *p, int x)
{
    struct Node *t, *q = NULL;
    t = new Node;
    t->data = x;
    t->next = NULL;
    if (first == NULL)
        first = t;
    else
    {
        while (p && p->data < x)
        {
            q = p;
            p = p->next;
        }
        if (p == first)
        {
            t->next = first;
            first = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}

int Delete(struct Node *p, int index)
{
    struct Node *q;
    int x = -1;

    if (index < 1 || index > count(p))
        return -1;
    if (index == 1)
    {
        q = first;
        x = first->data;
        first = first->next;
        delete q;
        return x;
    }
    else
    {
        p = first;
        q = NULL;
        for (int i = 0; i < index - 1; ++i)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
    }
    return x;
}

int isSorted(struct Node *p)
{
    int x = INT_MIN;
    p = first;
    while (p != NULL)
    {
        if (p->data < x)
            return false;
        x = p->data;
        p = p->next;
    }
    return true;
}

void RemoveDuplicate(struct Node *p)
{
    Node *q = p->next;
    while (q != NULL)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}

void Reverse1(struct Node *p)
{
    int *A, i = 0;
    struct Node *q = p;

    A = new int[count(p)];

    while (q != NULL)
    {
        A[i++] = q->data;
        q = q->next;
    }
    q = p;
    i--;
    while (p != NULL)
    {
        p->data = A[i--];
        p = p->next;
    }
}

void Reverse2(struct Node *p)
{
    struct Node *q = NULL;
    struct Node *r = NULL;
    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = p;
    }
}

void Reverse3(struct Node *q, struct Node *p)
{
    if (p != NULL)
    {
        Reverse3(p, p->next);
        p->next = q;
    }
    else
    {
        first = q;
    }
}

int main()
{

    // create(a, 8);
    //  display(first);

    // cout << "Recursive display: " << endl;
    // Rdisplay(first);
    // cout << endl;

    // cout << "Reverse recursive display: " << endl;
    // RRdisplay(first);
    // cout << endl;

    // cout << "Number of nodes: " << Rcount(first) << endl;

    // cout << "Sum of all nodes: " << Rsum(first) << endl;

    // cout << "Max number is: " << Max(first) << endl;

    // struct Node *temp;
    // temp = LSearch(first, 25);
    // if (temp)
    //     cout << "Key is found " << temp->data << endl;
    // else
    //     cout << "Key is not found" << endl;

    // insert(first, 8, 10);

    // display(first);

    int A[] = {10, 10, 10, 20, 30, 30, 40, 50};
    create(A, 5);

    // Inserted in a sorted linked list
    SortedInsert(first, 25);
    display(first);

    // Deleting element
    cout << "Deleted element: " << Delete(first, 1) << endl;
    display(first);

    // Checking if linked list is sorted or not
    if (isSorted(first))
    {
        cout << "Sorted" << endl;
    }
    else
    {
        cout << "Not Sorted" << endl;
    }

    // Removing Duplicate from a linked list
    RemoveDuplicate(first);
    display(first);

    Reverse1(first);
    display(first);

    return 0;
}