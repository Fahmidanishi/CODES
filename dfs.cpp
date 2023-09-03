#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>G[1000];
int main()
{
    int nodes,edges;
    cout<<"enter the no of nodes=";
    cin>>nodes;
    cout<<"enter the no of edges=";
    cin>>edges;
    //adjacency list
    while(edges!=0)
    {
        int x,y;
        cin>>x>>y;
        G[x].push_back(y);
    edges--;
    }
    int visited[nodes]={0};
    int distance[nodes],parent[nodes];
    int source=0;
    visited[source]=1;
    //distance[source]=0;
    //parent[source]=-1;
    //vector<int>path;
    stack<int>q;
    q.push(source);
    while(!q.empty())
    {
        int v=q.top();
        q.pop();
        cout<<v<<" ";
        for(int i=0;i<G[v].size();i++)
        {
            int u=G[v][i];
            if(!visited[u])
            {
                visited[u]=1;
                q.push(u);
                //distance[u]=distance[v]+1;
                //parent[u]=v;
            }
        }
    }
    /*for(int i=0;i<nodes;i++)
    {
        cout<<distance[i]<<" ";
    }
    cout<<endl;
    //path
    int destination=6;
    if(visited[destination]==0)
    {
        cout<<"no path";
    }
    else
    {
        int x=destination;
        while(x!=-1)
        {
            path.push_back(x);
            x=parent[x];
        }
        reverse(path.begin(),path.end());
    }
    for(int i=0;i<path.size();i++)
    {
        cout<<path[i];
    }
    cout<<endl;*/

}

