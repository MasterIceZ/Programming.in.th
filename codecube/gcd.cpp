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

long long gcd(long long a,long long b)
{
	if(a==0)
	{
		return b;
	}
	if(b==0)
	{
		return a;
	}
	if(a%b==0)
	{
		return b;
	}
	return gcd(b,a%b);
}

int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n,m;
	read(n);
	read(m);
	cout << gcd(n,m) << endl;
	return 0;
}
