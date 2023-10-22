/*DFS and BFS Graph Traversal*/
#include<stdio.h>
#define V 7
int adjMatrix[V][V],visited[V],queue[100];
int front=0,rear=-1;

void createMx(int matrix[][V])
{
	int i,j;
	for(i=0;i<V;i++)
	{
		for(j=0;j<V;j++)
		{
			matrix[i][j]=0;
		}
	}
}

void addEdge(int matrix[][V], int i, int j)
{
	matrix[i][j]=1;
	matrix[j][i]=1;
}

void printAdjMx(int matrix[][V])
{
	int i,j;
	for(i=0;i<V;i++)
	{
		printf("%d: ",i);
		for(j=0;j<V;j++)
		{
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void DFS(int node)
{
	int i;
	printf("%d\t",node);
	visited[node]=1;
	for(i=0;i<V;i++)
	{
		if(!visited[i] && adjMatrix[node][i]==1)
		DFS(i);
	}
}

void BFS(int node)
{
	int i;
	if(!visited[node])
	{
		printf("%d\t",node);
	}
	visited[node]=1;
	for(i=0;i<V;i++)
	{
		if(adjMatrix[node][i]==1 && !visited[i])
			queue[++rear]=i;
	}
	if(front<=rear)
	{
		BFS(queue[front++]);
	}
}

int main()
{
	createMx(adjMatrix);

	for(int i = 0;i<V;i++)
	{
		visited[i]=0;
	}

	addEdge(adjMatrix,0,1);
	addEdge(adjMatrix,0,3);
	addEdge(adjMatrix,1,2);
	addEdge(adjMatrix,0,4);
	addEdge(adjMatrix,4,1);
	addEdge(adjMatrix,4,3);
	addEdge(adjMatrix,5,4);
	addEdge(adjMatrix,5,6);
	addEdge(adjMatrix,2,6);
	addEdge(adjMatrix,2,4);
	addEdge(adjMatrix,5,2);

	printAdjMx(adjMatrix);

	printf("BFS Traversal:\t");
	BFS(0);
	printf("\n");

	for(int i=0;i<V;i++)
		visited[i]=0;
	printf("DFS Traversal:\t");
	DFS(0);
	printf("\n");
}
