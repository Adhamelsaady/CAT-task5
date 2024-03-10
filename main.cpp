#include <iostream>
#include <algorithm>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define el '\n'
#define int long long
#define FAST_IO cin.sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ss second
#define f first
#define srt(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define prntv(vec) for(auto i : vec) cout << i << " "
#define memo(m, v) memset(m, v, sizeof(m))
#define inpFile freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
const int MOD = /*998244353;*/ 1e9 + 7;
const long long oo = 1e16;
const int N = 1e5 + 5;
string yes = "YES", no = "NO";
/*
<--------------------CODE GOES FROM HERE --------------------->
*/
vector<int>adj[N];
bool vis[N];
int dis[N];
void BFS(int u){
		queue<int> q;
		q.push(u);
		vis[u] = 1;
		while (!q.empty()){
				int curr = q.front();
				q.pop();
				for(auto v : adj[curr]){
						if(!vis[v]){
								vis[v] = 1;
								q.push(v);
						}
				}
		}
}
void S(int T = 0){
		int n , m;
		cin >> n >> m;
		memo(dis,-1);
		for(int i = 0; i < m; i++){
				int u,v; cin >> u >> v;
				adj[u].push_back(v);
		}
}
signed main(){
		FAST_IO
		int TESTCASES = 1;
	//	cin >> TESTCASES;
		while(TESTCASES--){
				S();
		}
}