//


#include<bits/stdc++.h>

using namespace std;

class BFStraversal {

    private:

    queue<int> q;

    vector<bool> visited(Nodes , false);

    vector<int> res;


    public:

        void BFS(){

            q.push(graph[0]);

            while(!q.empty()){
                auto ptr = q.front();
                q.pop();

                for( auto & a : graphList[ptr]){
                    if (visited[ a ])continue;
                    q.push(a);

                    res.push_back(a);
                    visited[a]= true;

                }
            }
        }
};

int main(){



    return 0;
}