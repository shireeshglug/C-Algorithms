#include<stdio.h>
#include<stdlib.h>
#define INFINITY 999
void dj(int n,int cost[10][10],int source,int d[10])
{
	int i,j,min,u,visit[10];
	for(i=1;i<=n;i++)
	{
		visit[i]=0;
		d[i]=cost[source][i];
	}
	visit[source]=1;
	for(i=1;i<=n;i++)
	{
		min=INFINITY;
		for(j=1;j<=n;j++)
		{
			if(visit[j]==0 && d[j]<min)
			{
				min=d[j];
				u=j;
			}
		}
		visit[u]=1;
		for(j=1;j<=n;j++)
		{
			if(visit[j]==0 && d[u]+cost[u][j] < d[j])
				d[j]=d[u]+cost[u][j];
		}
	}
}
void main()
{
	int i,j,n,source,d[10],cost[10][10];
	system("clear");
	printf("\n\tEnter the number of nodes present in the graph : ");
	scanf("%d",&n);
	printf("\n\tEnter the cost matrix : ");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&cost[i][j]);
	printf("\n\tEnter the source node : ");
	scanf("%d",&source);
	dj(n,cost,source,d);
	for(i=1;i<=n;i++)
		printf("\n\tThe shortest distance from %d to %d is %d ",source,i,d[i]);
}
