struct Queue 
{
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct Queue *q, int size)
{
    q->Q = new int[size];
    q->front = q->rear = 0;
}

void enqueue(struct Queue *q, int x)
{
    if((q->(rear+1))%q->size == q->front)
        cout << "Queue is full" << endl;
    else
    {
        q->rear = (q->(rear+1))%q->size;
        q->Q[q->rear] = x;
    }
}

int dequeue(struct Queue *q)
{
    int x = -1;
    if(q->front == q->rear)
        cout << "Queue is empty" << endl;
    else
    {
        q->front = q->(front + 1) % q->size;
        x = q->Q[q->front];
    }
    return x;
}