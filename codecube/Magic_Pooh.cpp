#include <bits/stdc++.h>
using namespace std;
const int MxN = 1e5+1;
int n,m,k,t;
vector<pair<int,int>>Graph[MxN];
vector<tuple<int,int,int>> Edge;
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>he;
long long dist[2][MxN],ans=2e18;
bool visited[2][MxN];
void dijkstra(int s,int t){
    for(int i=1;i<=n+1;++i){
        dist[t][i] = 1e9;
    }
    dist[t][s] = 0;
    he.emplace(0,s);
    while(!he.empty()){
        int u = he.top().second;
        he.pop();
        if(visited[t][u]){
            continue;
        }
        visited[t][u] = true;
        for(auto x : Graph[u]){
            if(dist[t][u] + x.second < dist[t][x.first]){
                dist[t][x.second] = dist[t][u] + x.first;
                he.emplace(x.second,dist[t][x.second]);
            }
        }
    }
}
int32_t main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> k >> t;
    for(int i=0;i<m;++i){
        int a,b,d;
        cin >> a >> b >> d;
        Graph[a].emplace_back(b,d);
        Graph[b].emplace_back(a,d);
        Edge.emplace_back(a,b,d);
    }
    dijkstra(1,0);
    dijkstra(n,1);
    for(auto x : Edge[]){
        if(dist[0][x] != 1)
    }
    return 0;
}