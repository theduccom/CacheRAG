// A C / C++ program for Dijkstra's single source shortest path algorithm.
// The program is for adjacency matrix representation of the graph
  
#include <stdio.h>
#include <string.h>
#include <limits.h>
  
// Number of vertices in the graph
#define V 100
using namespace std;
int m,y;
  
// A utility function to find the vertex with minimum distance value, from
// the set of vertices not yet included in shortest path tree
int minDistance(int dist[], bool sptSet[])
{
   // Initialize min value
   int min = INT_MAX, min_index;
   int v;
  
   for (v = 0; v < m; v++)
     if (sptSet[v] == false && dist[v] <= min)
         min = dist[v], min_index = v;
  
   return min_index;
}
  
// A utility function to print the constructed distance array
void printSolution(int dist[], int n)
{
  printf("%d\n",dist[y-1]);
}
  
// Funtion that implements Dijkstra's single source shortest path algorithm
// for a graph represented using adjacency matrix representation
void dijkstra(int graph[V][V], int src)
{
      int i,u,v,count;
      int dist[V];     // The output array.  dist[i] will hold the shortest
                      // distance from src to i
  
      bool sptSet[V]; // sptSet[i] will true if vertex i is included in shortest
                     // path tree or shortest distance from src to i is finalized
  
     // Initialize all distances as INFINITE and stpSet[] as false
     for (i = 0; i < m; i++)
        dist[i] = INT_MAX, sptSet[i] = false;
  
     // Distance of source vertex from itself is always 0
     dist[src] = 0;
  
     // Find shortest path for all vertices
     for (count = 0; count < m-1; count++)
     {
       // Pick the minimum distance vertex from the set of vertices not
       // yet processed. u is always equal to src in first iteration.
       u = minDistance(dist, sptSet);
  
       // Mark the picked vertex as processed
       sptSet[u] = true;
  
       // Update dist value of the adjacent vertices of the picked vertex.
       for (v = 0; v < m; v++)
  
         // Update dist[v] only if is not in sptSet, there is an edge from 
         // u to v, and total weight of path from src to  v through u is 
         // smaller than current value of dist[v]
         if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX 
                                       && dist[u]+graph[u][v] < dist[v])
            dist[v] = dist[u] + graph[u][v];
     }
  
     // print the constructed distance array
     printSolution(dist, m);
}
  
// driver program to test above function
int main()
{
    int i,j,n,w,x,z;
    int graph[V][V],money[V][V];
    char str[200];

    while(1){ 
      fgets(str,sizeof(str),stdin);
      sscanf(str,"%d %d",&n,&m);
      if(n==0 && m==0) break;
      memset(graph, 0, sizeof(graph));
      memset(money, 0, sizeof(graph));
      for(i=0;i<n;i++){
        fgets(str,sizeof(str),stdin);
        sscanf(str,"%d %d %d %d",&w,&x,&y,&z);
        graph[w-1][x-1] = y;
        graph[x-1][w-1] = y;
        money[w-1][x-1] = z;
        money[x-1][w-1] = z;
      }
      fgets(str,sizeof(str),stdin);
      sscanf(str,"%d",&n);
      for(i=0;i<n;i++){
        fgets(str,sizeof(str),stdin);
        sscanf(str,"%d %d %d",&x,&y,&z);  
        (z==0 ? dijkstra(graph, x-1) : dijkstra(money, x-1));   
      }
    }
    /*for(i=0;i<m;i++){
      for(j=0;j<m;j++){
        printf("%d ",graph[i][j]);
      }
      printf("\n");
    }*/

    return 0;
}