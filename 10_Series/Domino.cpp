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

#define fi first
#define se second

bool isde(pair<int,int>pos)
{
	if(pos.fi>=50000 || pos.fi<=-50000)
	{
		return true;
	}
	if(pos.se>=50000 || pos.se<=-50000)
	{
		return true;
	}
	return false;
	
}

int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T,pl;
	bool dead = false;
	pair<int,int> pos;
	int face;
	pos.fi = 0;
	pos.se = 0;
	face = 0;
	read(T);
	string s;
	while(T--)
	{
		read(s,pl);
		if(dead)
		{
			continue;
		}
		if(s=="LT")
		{
				
		}
		else if(s=="RT")
		{
			
		}
		else if(s=="BW")
		{
			
		}
		else
		{
			
		}
		dead = isde(pos);
	}
	if(dead)
	{
		cout << "DEAD" << endl;
	}
	else
	{
		cout << pos.fi << space << pos.se << endl;
	}
	return 0;
}
