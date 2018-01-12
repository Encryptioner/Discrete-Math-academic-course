#include<bits/stdc++.h>

using namespace std;

int main()
{
    int matrix[10][10];
    vector<vector<int>>matrix1(10,vector<int>(10));
    map<int,int>mymap;
    int n,i,j;
    int node1,node2,cost,node,edge;

    /*cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        printf("\n");
    }
    cout<<"Enter number of node & edge : ";
    cin>>node>>edge;
    for(i=0;i<edge;i++)
    {
        cout<<"Enter edge node1-node2 & cost : ";
        cin>>node1>>node2>>cost;
        matrix1[node1][node2]=cost;
        matrix1[node2][node1]=cost;
    }
    cout<<" Graph in matrix : ";
    for(i=1;i<=edge;i++)
    {
        for(j=1;j<=edge;j++)
        {
            cout<<matrix1[i][j]<<" ";
        }
        printf("\n");
    }*/
    int assign=1,compressed[100],c=0,x,y;
    //mymap[100]=1,mymap[1000]=2,mymap[400]=3;
    cout<<"Enter number of node & edge : ";
    cin>>node>>edge;
    for(i=0;i<edge;i++)
    {
        cout<<"Enter edge node1-node2 & cost : ";
        cin>>node1>>node2>>cost;
        if(mymap.find(node1)==mymap.end())
        {
            mymap[node1]=assign;
            printf("Mapping %d with %d\n",node1,assign);
            assign++;
        }
        x=mymap[node1];
        //compressed[c++]=x;
        if(mymap.find(node2)==mymap.end())
        {
            mymap[node2]=assign;
            printf("Mapping %d with %d\n",node2,assign);
            assign++;
        }
        y=mymap[node2];
        //compressed[c++]=y;
        matrix1[x][y]=cost;
        matrix1[y][x]=cost;
    }
    cout<<"Graph in matrix :\n";
    for(i=1;i<=edge;i++)
    {
        for(j=1;j<=edge;j++)
        {
            cout<<matrix1[i][j]<<" ";
        }
        printf("\n");
    }
    return 0;
}
