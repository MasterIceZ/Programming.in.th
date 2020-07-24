/*
 *	AUTHOR : IceBorworntat
 * */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define us unsigned
#define f0(a,b,c) for(a=b;b<c;a++)
#define f1(a,b,c) for(a=b;b<=c;a++)
#define f2(a,b,c) for(a=b;a>c;a--)
#define f3(a,b,c) for(a=b;a>=c;a--)
#define r4i {-1,1,0,0}
#define r4j {0,0,-1,1}
#define r8i {-1,-1,-1,0,0,1,1,1}
#define r8j {-1,0,1,-1,1,-1,0,1}
#define pb push_back

vector <int> prime;
const int MxN = 1e7;
bool isPrime[MxN+10];

int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int i,j;
	prime.pb(2);
	for(i=3;i<=sqrt(MxN);i+=2)
	{
		if(isPrime[i])
		{
			continue;
		}
		for(j=i*i;j<=MxN;j+=i)
		{
			isPrime[j] = true;
		}
	}
	for(i=3;i<=MxN;i+=2)
	{
		if(!isPrime[i])
		{
			prime.pb(i);
		}
	}
	int a;
	cin >> a;
	cout << prime[a-1] << endl;

	return 0;
}
