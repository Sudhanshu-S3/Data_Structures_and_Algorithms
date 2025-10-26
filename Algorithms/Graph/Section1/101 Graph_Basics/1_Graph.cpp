#include<bits/stdc++.h>

using namespace std;

// The Adjacency Matrix Implementation of Graph

class Graph {

    private:

        int nodes, edges;

        vector<vector<int>> graph;


    public:

        Graph(){

            cin>> nodes >> edges;

            graph.resize(nodes, vector<int> (nodes, -1));

            cout<<"Enter" << edges << " number of edges like ( node1 , node2 , weight :)" << endl;

            for(int i=0 ; i< edges ; i++){
                
                int a , b , weight;
                cin>>a>>b>> weight ;

                graph[a][b] = weight;
                graph[b][a] = weight;
            }
        }

        void printGraph(){

            for(int i =0 ; i<nodes; i++){
                cout<<"Edges from Nodes : " << i << endl;
                for(int j = 0 ; j < nodes; j++){

                    if(i == j) continue;
                    if(graph[i][j] == -1) continue;

                    
                    cout<< "Node " << i << " to Node " << j<< " weight " << graph[i][j] <<endl;
                }
            }
        }
};


// Now Lets implement the Adjacency List implementation 

class GraphList {

    private:
        int nodes , edges ;

        map<int, vector<pair<int, int>>> graphList;

    public:

        GraphList(){

            cin>> nodes >> edges;

            for(int i = 0 ; i< edges ; i++){
                int u , v ,weight;
                cin>>u >> v >> weight;
                graphList[u].push_back({v,weight});
                graphList[v].push_back({u,weight});

            }

        }

        void printGraph(){

            for(int i = 0 ; i< nodes; i++){
                cout<< "Edges from Node " << i << " : "<<endl;
                
                for(auto & a : graphList[i] ){
                    cout<< "From Node" << i << " to Node " << a.first << " weight :" <<a.second <<endl;
                }
            }

        }

};

int main(){

    GraphList abc;

    abc.printGraph();

    Graph de;

    de.printGraph();

    return 0;
}