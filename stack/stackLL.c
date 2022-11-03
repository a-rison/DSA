#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    char data;
    struct Node *next;
} *top = NULL;

void push(char x)
{
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));

    if (t == NULL)
        printf("stack is full\n");
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

void pop()
{
    struct Node *t;
    char x = -1;
    if (top == NULL)
        printf("Stack is Empty\n");
    else
    {
        t = top;
        top = t->next;
        x = t->data;
        free(t);
    }
}

void Display()
{
    struct Node *p;
    p = top;
    while (p != NULL)
    {
        printf("%d", p->data);
        p = p->next;
    }
    printf("\n");
}

// Parenthesis matching code
int isBalanced(char *exp)
{
    int i;

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
            push(exp[i]);
        else if (exp[i] == ')')
        {
            if (top == NULL)
                return 0;
            pop();
        }
    }
    if (top == NULL)
        return 1;
    else
        return 0;
}

int isOperand(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/' || x == '(' || x == ')' || x == '^')
        return 0;
    else
        return 1;
}

int pre(char x)
{
    if (x == '+' || x == '-')
        return 1;
    else if (x == '*' || x == '/')
        return 2;
    else
        return 0;
}

int outPrecedence(char x)
{
    if (x == '+' || x == '-')
        return 1;
    else if (x == '*' || x == '/')
        return 3;
    else if (x == '^')
        return 6;
    else if (x == '(')
        return 7;
    else if (x == ')')
        return 0;
    return -1;
}

int inPrecedence(char x)
{
    if (x == '+' || x == '-')
        return 2;
    else if (x == '*' || x == '/')
        return 4;
    else if (x == '^')
        return 5;
    else if (x == '(')
        return 0;
    return -1;
}

char *InToPost(char *infix)
{
    int i = 0, j = 0;
    char *postfix;
    int len = strlen(infix);
    postfix = (char *)malloc((len + 2) * sizeof(char));

    while (infix[i] != '\0')
    {
        if (isOperand(infix[i]))
            postfix[j++] = infix[i++];
        else
        {
            if (pre(infix[i]) > pre(top->data))
                push(infix[i++]);
            else
            {
                postfix[j++] = top->data;
                pop();
            }
        }
    }

    while (top != NULL)
    {
        postfix[j++] = top->data;
        pop();
    }

    postfix[j] = '\0';

    return postfix;
}

char *InToPost2(char *infix)
{
    int i = 0, j = 0;
    int y = 0;
    char *postfix;
    int len = strlen(infix);
    postfix = (char *)malloc((len + 2) * sizeof(char));

    while (infix[i] != '\0')
    {
        if (isOperand(infix[i]))
            postfix[j++] = infix[i++];
        else
        {
            if (outPrecedence(infix[i]) > inPrecedence(top->data))
                push(infix[i++]);
            else if (outPrecedence(infix[i]) == inPrecedence(top->data))
                pop();
            else
            {
                postfix[j++] = top->data;
                pop();
            }
        }
    }

    while (top != NULL && top->data != ')')
        {
            postfix[j++] = top->data;
            pop();
        }

    postfix[j] = '\0';

    return postfix;
}

int main()
{
    char *infix = "((a+b)*c)-d^e^f";
    push('#');

    char *postfix = InToPost2(infix);

    printf("%s", postfix);

    return 0;
}