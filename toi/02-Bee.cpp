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

int work[30],kn[30];

void build()
{
	for(int i=1;i<=24;i++)
	{
		work[i] = kn[i-1] + work[i-1] + 1;
		kn[i] = work[i-1];	
	}
}

int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	work[0] = 1;
	kn[0] = 0;
	build();
	int a;
	while(1)
	{
		cin >> a;
		if(a==-1)
			return 0;
		else
			cout << work[a] << " " << work[a]+kn[a]+1 <<endl;
	}

	return 0;
}
