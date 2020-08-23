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

/*
FlowChart
room people
1    500
2    800
5    1500
15   3000
*/

int de[5];

int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long ans,q;
	ans=0;
	read(q);
	ans += (q/15)*3000;
	q %= 15;
	for(;q>=9;q-=q)
	{
		ans += 3000;
	}
	for(;q>=5;q-=5)
	{
		ans += 1500;
	}
	for(;q>=4;q-=4)
	{
		ans += 1500;
	}
	for(;q>=2;q-=2)
	{
		ans += 800;
	}
	for(;q>=1;q--)
	{
		ans += 500;
	}
	
	//cout << de[0] << space << de[1] << space << de[2] << space << de[3] << endl;
	cout << ans << endl;

	return 0;
}
