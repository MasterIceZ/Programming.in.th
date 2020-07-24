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

int dp[110];

int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int i,n;
	cin >> n;
	if(n<6)
	{
		cout << "no" << endl;
		return 0;
	}
	dp[0] = 1;
	for(i=6;i<=n;i++){
		if(dp[i-6]==1 && i>=6)
			dp[i] = 1;
		else if(dp[i-9]==1 && i>=9)
			dp[i] = 1;
		else if(dp[i-20]==1 && i>=20)
			dp[i] = 1;
		if(dp[i])
			cout << i << endl;
		//cout << endl;
	}

	return 0;
}
