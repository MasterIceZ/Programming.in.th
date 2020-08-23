/*
 * AUTHOR : _IceBorworntat926
 * OS     : Ubuntu
 * TASK   : Beta.Programming.in.th
 * */

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define space " "
#define endl '\n'
#define dec(a,b) fixed<<setprecision(b)<<a 

template <class A> void read(vector<A>& v);
template <class A,size_t S> void read(array <A, S>& a);
template <class T> void read(T& x)
{
	cin >> x;
}
void read(double& d)
{
	string t;
	read(t);
	d = stod(t);
}
void read(long double& d)
{
	string t;
	read(t);
	d = stold(t);
}
template <class H,class... T> void read(H& h,T&... t)
{
	read(h);
	read(t...);
}
template <class A> void read(vector <A>& x)
{
	for(auto& a : x)
	{
		read(a);
	}
}
template <class A,size_t S> void read(array<A, S>& x)
{
	for(auto& a : x)
	{
		read(x);
	}
}

int dp[3030];

int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int w,h,n,l,r;
	read(w,h,n);
	for(int i=0;i<n;i++)
	{
		read(l,r);
		if(l<w)
		{
			dp[l]++;
		}
		if(l+r<w)
		{
			dp[l+r]--;
		}
	}
	for(int i=0;i<w;i++)
	{
		dp[i]+=dp[i-1];
	}
	int ans1=0;
	int ans2=0;
	for(int i=0;i<w;i++)
	{
		if(dp[i]==1)
		{
			ans2+=h;
		}
		else if(dp[i]==0)
		{
			ans1+=h;
		}
	}
	cout << ans1 << space << ans2 << endl;

	return 0;
}
