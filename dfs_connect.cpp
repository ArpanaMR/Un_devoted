#include<bits/stdc++.h>

using namespace std;

int matrix[20][20],n,visit[20],S[20],top=-1,c=1,f=0;

void dfs(int v)
{
	visit[v]=1;
	S[++top]=v;
	
	for(int i=1;i<=n;i++)
	{
		if(matrix[v][i]==1 && !visit[i])
		{
			f=1;
			c++;
			dfs(i);
		}
		
	}
	if(f==0)
	{
		for(int j=1;j<=n;j++)
		{
			if(matrix[S[top]][j]==1 && !visit[j])
			{
				f=1;
				c++;
				dfs(j);
			}
			
		}
		if(f==0)
			top--;
	}
	

}

int main()
{
	int v;
	cout<<"Enter the no of vertices"<<endl;
	cin>>n;
	cout<<"Enter the adjacency matrix"<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			cin>>matrix[i][j];
	}

	for(int i=1;i<=n;i++)
		visit[i]=0;
	
	
	dfs(1);
	
	if(c==n)
		cout<<"Connected graph"<<endl;
	else
		cout<<"Graph is not connected"<<endl;
	

	return 0;
}