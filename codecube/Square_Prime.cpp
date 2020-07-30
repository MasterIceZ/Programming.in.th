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

bool isPrime(int n)
{
	int i;
	if(n==1)
	{
		return false;
	}
	if(n==2)
	{
		return true;
	}
	if(n%2==0)
	{
		return false;
	}
	for(i=3;i<=sqrt(n);i+=2)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}

void solution()
{
	int a,b,i,n,m;
	bool mark=false;
	cin >> n >> m;
	a=ceil(sqrt(n));
	b=floor(sqrt(m));
	for(i=a;i<=b;i++)
	{
		if(isPrime(i))
		{
			cout << pow(i,2) << " ";
			mark=true;
		}
	}	
	if(!mark)
	{
		cout << "-1" << endl;
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
