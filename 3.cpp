//BFS Algorithm
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
bool vis[N];
vector<int>adjlist[N];
int main()
{
   for(int i=0;i<N;i++)
       vis[i]=0;
    int edge,vertex;
        cin>>edge>>vertex;
     int source,dest;
        for(int i=0;i<vertex;i++)
        {
           cin>>source>>dest;
           adjlist[source].push_back(dest);
           adjlist[dest].push_back(source);
        }
        queue<int>q;
        q.push(1);
        vis[1]=true;
        while(!q.empty())
        {
        int node = q.front();
        q.pop();
        cout<<node<<endl;
        vector<int>::iterator it;
        for(it=adjlist[node].begin();it!=adjlist[node].end();it++)
        {
            if(!vis[*it])
            {
               vis[*it]=1;
               q.push(*it);
            }
        }
        }
return 0;
}

