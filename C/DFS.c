//DFS
#include <stdio.h>
#include <stdlib.h>

//Queue
struct Node
{
    int data;
    struct Node *next;
} *front = NULL, *rear = NULL;

int isEmpty()
{
    if (front == NULL)
    {
        return 1;
    }
    return 0;
}
void enqueue(int x)
{
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    if (t == NULL)
    {
        printf("Queue is full\n");
    }
    else
    {
        t->data = x;
        t->next = NULL;
        if (front == NULL)
        {
            front = rear = t;
        }
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue()
{
    int x = -1;
    struct Node *t;
    if (front == NULL)
    {
        printf("Queue is empty");
    }
    {
        x = front->data;
        t = front;
        front = front->next;
        free(t);
    }
    return x;
}

//Implementation of Depth First Search
void DFS(int G[][7], int start, int n)
{
    static int visited[7] = {0};
    if (visited[start] == 0)
    {
        visited[start] = 1;
        printf("%d ", start);
        for (int j = 1; j < n; j++)
        {
            if (G[start][j] == 1 && visited[j] == 0)
            {
                DFS(G, j, n);
            }
        }
    }
}
int main()
{
    // Adjacency matrix
    int G[7][7] = {
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 1, 1, 0, 0, 0},
        {0, 1, 0, 0, 1, 0, 0},
        {0, 1, 0, 0, 1, 0, 0},
        {0, 0, 1, 1, 0, 1, 1},
        {0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0},
    };

    // Graph
    //        1
    //     /     \
    //    2       3
    //     \    /
    //       4
    //     /   \
    //    5     6
    DFS(G, 1, 7);
}