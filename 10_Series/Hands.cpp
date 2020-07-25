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
#define let int
int a[2010];

int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int i,n,k;
	cin >> n >> k;
	f0(i,0,n)
	{
		cin >> a[i];
	}
	let sum = 0;
	sort(a,a+n,greater<int>());
	for(i=0;i<n;i+=k)
	{
		sum += a[i];
	}
	cout << sum;
	return 0;
}
