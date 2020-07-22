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
int i;

const int N = 5e5 + 100;
ll a[N],b[N],ans;

int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n,i;
	cin >> n;
	f0(i,0,n)
	{
		cin >> a[i];
	}
	f0(i,0,n)
	{
		cin >> b[i];
	}
	sort(a,a+n);
	sort(b,b+n,greater<int>());
	f0(i,0,n)
	{
		a[i] += b[i];
	}
	sort(a,a+n);
	f0(i,1,n)
	{
		ans += a[i] - a[i-1];
	}
	cout << ans << endl;
	return 0;
}
