#include <bits/stdc++.h>
using namespace std;

/* 
    undirected
    6 nodes 7 vertices
    1 2
    1 3
    1 6
    2 5
    3 5 
    3 4
    4 5

    directed 
    4 nodes 5 vertices
    1 2
    1 3
    3 1
    2 4
    4 3
*/


int main(){
    system("cls");
    int node, vertices;
    //! Adjacency matrix representation
    /*
        An adjacency matrix is a 2D array of V x V vertices. Each row and column represent a vertex.
        If the value of any element a[i][j] is 1, it represents that there is an edge connecting vertex i and vertex j.

        Pros:
            Representation is easier to implement and follow.
            Removing an edge takes O(1) time. Queries like whether there is an edge from vertex ‘u’ to vertex ‘v’ are efficient and can be done O(1).
        Cons:
            Consumes more space O(V^2).
            Even if the graph is sparse(contains less number of edges), it consumes the same space. Adding a vertex is O(V^2) time.
    */

    //? Undirected graph 
    //* a - b edge implies b - a edge 
    cin>>node>>vertices;
    int * * undir_graph = new int * [node + 1];
    for(int i = 0; i < node; ++i){
        undir_graph[i] = new int [node + 1];
        memset(undir_graph[i], 0, (node + 1) * sizeof(int));
    }

    for(int i = 0; i  < node + 1; ++i){
        for(int j = 0; j < node + 1; ++j){
            cout<<undir_graph[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<endl;

    for(int i = 0; i < vertices; ++i){
        int x, y;
        cin>>x>>y;
        undir_graph[x][y] = 1;
        undir_graph[y][x] = 1;
        cout<<endl<<x<<" "<<y<<endl;
        for(int i = 0; i  < node + 1; ++i){
            cout<<i<<" : ";
            for(int j = 0; j < node + 1; ++j){
                cout<<undir_graph[i][j]<<" ";
            }
            cout<<endl;
        }
    }


    return 0;
}