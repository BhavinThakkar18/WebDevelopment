#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,p=0,q=0,m;
	cout<<"Enter num of nodes in the graph"<<endl;
	cin>>n;
	int v[n];
	m=n;
	int G[n][n];
	cout<<"Enter ur graph here:"<<endl;
	for(i=0;i<n;i++)
	{
		v[i]=0;
		for(j=0;j<n;j++)
		{
			cin>>G[i][j];
		}
	}
	while(n!=2)
	{
		srand(time(0));
		p=rand()%n;
		q=rand()%n;
		if(G[p][q]!=0 && (v[p]!=1 || v[q]!=1))
		{
			G[p][q]=0;
			G[q][p]=0;
			v[q]=1;
			for(i=0;i<n;i++)
			{
				G[p][i]=G[p][i] | G[q][i];
				G[q][i]=0;
			}
			n--;
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<G[i][j]<<" ";
		}
		cout<<endl;
		//cout<<"i:"<<i<<" "<<"j:"<<j<<endl;
	}
	
	return 0;
}
