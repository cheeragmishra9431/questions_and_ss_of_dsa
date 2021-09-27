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
int main(){
//code;
vector<int> adj[7];
addE(adj, 0,1);
addE(adj, 0,2);
addE(adj, 0,4);
addE(adj, 0,3);
bfs(adj, 0, 5);
return 0;
}