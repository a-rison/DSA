#include <bits/stdc++.h>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *S;
};

void create(struct Stack *st)
{
    printf("Enter Size: ");
    scanf("%d", &st->size);
    st->top = -1;
    st->S = new int[st->size];
}

void Display(struct Stack st)
{
    int i;
    for (int i = st.top; i >= 0; i--)
        cout << st.S[i] << " ";
    cout << endl;
}

void push(struct Stack *st, int x)
{
    if(st->top == st->size-1)
        cout << "Stack overflow \n";
    else 
    {
        st->top++;
        st->S[st->top] = x;
    }
}

int pop( struct Stack *st)
{
    int x = -1;
    
    if(st->top == -1)
        cout << "Stack Underflow" << endl;
    else
    {
        x = st->S[st->top--];
    }
    return x;
}

int peek(struct Stack st, int pos)
{
    int x = -1;
    if(st.top-pos < 0)
        cout << "Invalid index" << endl;
    x = st.S[st.top - pos + 1];

    return x;
}

int isEmpty(struct Stack st)
{
    if(st.top == -1)
        return 1;
    return 0;
}

int isFull(struct Stack st)
{
    if(st.top == st.size - 1)
        return 1;
    return 0;
}

int main()
{
    struct Stack st;
    create(&st);

    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);

    cout << peek(st, 3) << endl;

    return 0;
}