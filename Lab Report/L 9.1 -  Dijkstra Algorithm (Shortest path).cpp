#include <bits/stdc++.h>
#include <vector>
#include <queue>

//#define MAX 1024;
//#define INF 16261691;
using namespace std;
typedef unsigned long long int i64;

typedef  pair< int, int > pii;

const int MAX  = 1024;
const int INF  = 100000;// 1<<31;

/*
pair object for graph is assumed to be (node, weight). d[] array
holds the shortest path from the source. It contains INF if not
reachable from the source.
*/

vector  <pii> G[MAX];
int d[MAX],par[MAX];

/*
The dijkstra routine. You can send a target node too along with
the start node.
*/
int  dijkstra(int start,int n)
  {

    i64  u, v, i, c, w;

    priority_queue<pii, vector< pii >, greater< pii > >  Q;
    //cout<<INF<<endl;

     memset(d, INF, sizeof d);
     //memset(par,-1,sizeof(par));

     Q.push(pii(0, start));
     d[start] = 0;  //start==source


     while(!Q.empty())
     {
        u = Q.top().second; // node
        //cout<<15151<<endl;
        if(u==n)
        {
            return d[u];
        }

        c = Q.top().first;  // node cost so far
        Q.pop();            // remove the top item.

        if(d[u] < c)
        {
            continue;
        }

        for(i = 0; i < G[u].size(); i++)
        {
            v = G[u][i].first;     // node
            w = G[u][i].second;    // edge weight
            //cout<<d[v]<<" "<<d[u] + w<<endl;
            if(d[v] > d[u] + w)
            {
                d[v] = d[u] + w;
                //cout<<d[v]<<endl;
                par[v]=u;
                Q.push(pii(d[v], v));
            }
        }
    }
    return -1;
}



  int main()
  {

    int n, e, i, u, v, w, start; //start==source

     while(1)
        {
           cout<<"number of nodes & edges??";
           scanf("%d %d", &n, &e) ;

          for(i = 1; i <= n; i++)
          G[i].clear();
           cout<<"Path and cost ? "<<endl;



           for(i = 1; i <= e; i++) {
            scanf("%d %d %d", &u, &v, &w);
            G[u].push_back(pii(v, w));
            G[v].push_back(pii(u, w)); // only if bi-directional
        }

        /*
        For a start node call dijkstra.
        */

        cout<<"enter source node :";
        scanf("%d", &start);

        int ret= dijkstra(start,n);

        /*
        Output the shortest paths from the start node.
        */
        printf("Shortest path from node %d:\n", start);
        for(i = 1; i <= n; i++)
        {
            if(i == start)
            {
                continue;
            }

            if(d[i] >= INF)
            printf("\t to node %d: unreachable\n", i);

            else printf("\t to node %d: %d\n", i, d[i]);
        }


       if(ret==-1)
        cout<<"no path"<<endl;
        /*else
        {
            vector<int>vec;
            u=n;
            while(u!=-1)
            {
                vec.push_back(u);
                u=par[u];
            }

            reverse(vec.begin(),vec.end());

            for(i=0;i<vec.size();i++)
            cout<<vec[i]<<" ";
            cout<<endl;
       }*/
    }

}


