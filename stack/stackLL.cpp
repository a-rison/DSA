#include <bits/stdc++.h>
using namespace std;

struct Node
{
    char data;
    struct Node *next;
} *top = NULL;

void push(char x) 
{
    struct Node *t;
    t = new struct Node;

    if (t == NULL)
        cout << "stack is full" << endl;
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

char pop()
{
    struct Node *t;
    char x = -1;
    if(top == NULL)
        cout << "Stack is empty" << endl;
    else
    {
        t = top;
        top = t->next;
        x = t->data;
        free(t);
    }
    return x;
}

void Display()
{
    struct Node *p;
    p = top;
    while(p!=NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

//Parenthesis matching code
int isBalanced(char *exp)
{
    int i;

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if(exp[i] == '(')
            push(exp[i]);
        else if(exp[i] == ')')
        {
            if(top == NULL)
                return 0;
            pop();
        }
    }
    if(top == NULL)
        return 1;
    else
        return 0;
}

int main()
{
    char *exp = "((a+b)*(c-d))";

    cout << isBalanced(exp) << endl;

    return 0;
}