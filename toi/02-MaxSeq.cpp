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

int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	bool can = false;
	read(n);
	vector <int> a(n);
	
	for(int i=0;i<n;i++)
	{
		read(a[i]);	
		if(a[i]>0)
		{
			can = true;
		}
		
	}
	if(!can)
	{
		cout << "Empty sequence" << endl;
		return 0;
	}
	int start,stop,t,mx,b,s;
	mx = -1e9;
	start = stop = t = b = s = 0;
	for(int i=0;i<n;i++)
	{
		t += a[i];
		if(t > mx)
		{
			start = s;
			stop = i;
			mx = t;
		}
		if(t < 0)
		{
			s = i+1;
			t = 0;
		}
	}
	for(int i=start;i<=stop;i++)
	{
		cout << a[i] << space;
	}
	cout << endl << mx << endl;
	return 0;
}
