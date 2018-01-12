#include<bits/stdc++.h>
using namespace std;

#define MAX 100000 //maximum node
vector<int>EDGES[MAX];
vector<int>COST[MAX]; //parallel vector to store costs;

int main()
{

    int node,edge,i,j,k;
    int node1,node2,cost;
    scanf("%d %d",&node,&edge);
    vector<int>indegree(node+1);//vector<int>indegree[node] gives error
    for(i=1;i<=edge;i++)
    {
        scanf("%d%d",&node1,&node2);
        EDGES[node1].push_back(node2);
        indegree[node2]=indegree[node2]+1;
        //EDGES[node2].push_back(node1);//for bidirectional graph
        COST[node1].push_back(1);//for not weighted matrix
        //COST[node2].push_back(1);
    }
    for(i=1;i<=node;i++)
    {
        k=EDGES[i].size();
        cout<<"Connected node with node "<<i<<" :";
        for(j=0;j<k;j++)
        {
            cout<<" "<<EDGES[i][j]<<"*"<<COST[i][j];
        }

        cout<<" & indegree = "<<indegree[i]<<" & outdegree = "<<k<<endl;
        printf("\n");
    }
    return 0;
}
