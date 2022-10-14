#include<bits/stdc++.h>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *S;
};

void create(struct Stack *st)
{
    cout << "Enter Size: ";
    cin >> st->size;
    st->top=-1;
    st->S = new int[st->size];
}

void Display(struct Stack st)
{
    int i;
    for(i=st.top;i>=0;i--)
    {
        printf("%d ", st.S[i]);
    }
    cout << endl;
}

void push(struct Stack *st, int x)
{
    if(st->top==st->size-1)
        printf("Stack overflow\n");
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}

int pop(struct Stack *st)
{
    int x;
    if(st->top==-1)
        cout << "Stack Undeflow" << endl;
    else
    {
        x = st->S[st->top--];
    }
    return x;
}

int peek(struct Stack st, int index)
{
    int x = -1;
    if(st.top-index+1<0)
        cout << "Invalid Index" << endl;
    x = st.S[st.top-index+1];

    return x;
}

int isFull(struct Stack st)
{
    return st.top==st.size-1;
}

int isEmpty(struct Stack st)
{
    if(st.top==-1)
        return 1;
    return 0;
}

int stackTop(struct Stack st)
{
    if(!isEmpty(st))
        return st.S[st.top];
    return -1;
}

int main()
{
    struct Stack st;
    create(&st);

    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);
    push(&st, 50);

    cout << pop(&st) << endl;

    Display(st);

    return 0;
}