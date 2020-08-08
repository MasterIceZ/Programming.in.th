/*
 *	AUTHOR : IceBorworntat
 * */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define us unsigned
#define pii pair<int,int>
#define f0(a,b,c) for(a=b;b<c;a++)
#define f1(a,b,c) for(a=b;b<=c;a++)
#define f2(a,b,c) for(a=b;a>c;a--)
#define f3(a,b,c) for(a=b;a>=c;a--)
#define r4i {-1,1,0,0}
#define r4j {0,0,-1,1}
#define r8i {-1,-1,-1,0,0,1,1,1}
#define r8j {-1,0,1,-1,1,-1,0,1}
#define INF 1e9
#define arr array
#define MOD 1e9+7
#define str string
#define st struct
#define def void
#define qi queue<int>
#define pb(a) push_back(a)
#define pq priority_queue
#define vt vector
#define vi vector<int>
#define infile() freopen("input.in","r",stdin)
#define outfile() freopen("sol.out","w",stdout)
#define sz(x) (int)(x).size()
#define all(c) (c).begin(),(c).end()
#define in cin
#define out cout
#define ld long double

const int d4i[] = r4i,d4j[] = r4j;
const int d8i[] = r8i,d8j[] = r8j;

vi ans;
int mp[1010];

void sieve(int MxN,int want)
{
	int i,j;
	for(i=2;i<=MxN;i++)
	{
		if(mp[i])
		{
			continue;
		}
		for(j=1;i*j<=MxN;j++)
		{
			if(mp[i])
			{
				continue;
			}
			ans.pb(i*j);
			mp[i*j] = 1;
		}
	}
}

void solution()
{
	int i;
	int n,m;	
	cin >> m >> n;
	sieve(m,n);
	//cout << ans[n-1];
	for(auto j : ans)
	{
		cout << ans[j] << " " ;
	}
	return ;
}

int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int q;
	//cin >> q;
	q = 1;
	while(q--)
	{
		solution();
	}

	return 0;
}
