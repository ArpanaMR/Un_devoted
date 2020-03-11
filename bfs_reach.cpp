#include<iostream>
using namespace std;

int f=0;
int r=-1;
int matrix[20][20],Q[20],visit[20],n,i,j,flag=0;
void bfs(int v)
{
	int w;
	visit[v]=1;
	Q[++r]=v;
	while(f<=r)
	{
		v=Q[f++];
		for(w=1;w<=n;w++)
		if((matrix[v][w]==1)&&(visit[w]==0))
		{
			visit[w]=1;
			flag=1;
			cout<<w<<" ";
			Q[++r]=w;
		}
	}
			
}
int main()
{
	int v;
	cout<<"Enter the no. of vertices"<<endl;
	cin>>n;
	
	
	cout<<"Enter the adjacency matrix"<<endl;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>matrix[i][j];
			
		}
	}
	for(i=1;i<=n;i++)
	{
		
		visit[i]=0;
	}
	cout<<"Enter the start vertex"<<endl;
	
	cin>>v;
	cout<<"The nodes reachable from "<<v<<" are "<<"\t";
	bfs(v);
	
	if(flag==0)
		cout<<"No nodes reachable"<<endl;
	return 0;
}
