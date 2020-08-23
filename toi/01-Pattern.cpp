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

const int MxN = 70;
char cloth[50010][100];

int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	memset(cloth,'o',sizeof cloth);
	int q,mx;
	mx = 0;
	read(q);
	while(q--)
	{
		int a,b,c;
		read(a,b,c);
		mx = max(a,mx);
		for(int i=0;i<c;++i)
		{
			if(b+i>70)
			{
				break;
			}
			cloth[a-1][b-1+i] = 'x';		
		}
	}
	for(int i=0;i<mx;i++)
	{
		for(int j=0;j<70;j++)
		{
			cout << cloth[i][j] ;
		}
		cout << endl;
	}
	return 0;
}
