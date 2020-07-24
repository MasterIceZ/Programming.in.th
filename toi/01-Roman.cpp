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
int ii,v,x,l,c;
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	//int ii,v,x,l,c;
	int n,j;
	cin >> n;
	for(j=1;j<=n;j++)
	{
		i = j;
		for(;i>=100;i-=100)
			c++;
		for(;i>=90;i-=90)
			c++,x++;
		for(;i>=50;i-=50)
			l++;
		for(;i>=40;i-=40)
			l++,x++;
		for(;i>=10;i-=10)
			x++;
		for(;i>=9;i-=9)
			x++,ii++;
		for(;i>=5;i-=5)
			v++;
		for(;i>=4;i-=4)
			ii++,v++;
		for(;i>=1;i--)
			ii++;
	}
	cout << ii << " " << v << " " << x << " " << l << " " << c << endl;
	return 0;
}
