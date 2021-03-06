#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void addE(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void bfs(vector<int> adj[], int s, int v){
    bool visited[v]={false};
    queue<int> q;
    visited[s]=true;
    q.push(s);
    while(q.empty()==false){
        int temp=q.front();
        q.pop();
        cout<<temp<< " ";
        for(int i: adj[temp]){
            if(visited[i]==false){
                visited[i]==true;
                q.push(i);
            }
        }
    }
}
void dfsrec(vector<int> adj[], int u ,bool visited[] ){
    visited[u]=true;
    cout<< u<< " ";
    for(int i: adj[u]){
        if(visited[i]==false){
            dfsrec(adj, i, visited);

        }
    }
}
void dfs(vector<int> adj[], int v){
    bool visited[v]={false};
    for(int i=0; i<v; i++){
        if(visited[i]==false){
            dfsrec(adj, i, visited);

        }
    }
}
int main(){
//code;
vector<int> adj[7];
addE(adj, 0,1);
addE(adj, 0,2);
addE(adj, 0,4);
addE(adj, 0,3);
// bfs(adj, 0, 5);
dfs(adj,5);
return 0;
}