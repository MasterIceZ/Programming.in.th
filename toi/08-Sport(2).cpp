#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define int long long
#define pii pair<int,int>
#define FOR(i,n,k) for(int i=n; i<k; ++i)
#define ROF(i,n) for(int i=n; i>-1; --i)
#define V_IN(v); for(auto& x : v){cin >> x;}
#define V_1IN(v,n) for(int i=1;i<=n;++i){cin>>v[i];}
int gcd(int a,int b){if(a%b==0)return b; return gcd(b%a,b);}
int lcm(int a,int b){return a*b/gcd(a,b);}
std::string reverse(string s){int n = s.size(),cnt=0; std::string rev = s; for(int i=n-1;i>=0;--i)rev[cnt++] = s[i]; return rev;}
typedef long long ll;
bool Q=0;
const int INF = 2e18;
int con;
void play(int len,int win,int lose,char ans[]){
	if(lose==con||win==con){
		for(int i=0;i<len;++i){
			cout << ans[i] << space ;
		}
		cout << endl;
		return ;
	}
	ans[len]='W';
	play(len+1,win+1,lose,ans);
	ans[len]='L';
	play(len+1,win,lose+1,ans);
}
void solution(){
	char ans[1010];
	int win,lose;
	memset(ans,'\0',sizeof ans);
	cin >> con >> win >> lose;
	play(0,win,lose,ans);
	return ;
}

int32_t main (){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T=1;
	if(Q){
		cin >> T;
	}
	do{
		solution();
		cout << '\n';
	}while(--T);
	return 0;
}
