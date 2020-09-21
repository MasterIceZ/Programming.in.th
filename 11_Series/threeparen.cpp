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

namespace tmw
{
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
}

int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T;
	tmw::read(T);
	while(T--)
	{
		string s;
		tmw::read(s);
		bool mk = true;
		stack <char> v;
		for(int i=0;i<s.length();++i)
		{
			if(s[i]=='('||s[i]=='['||s[i]=='{')
			{
				v.push(s[i]);
				continue;
			}
			if(!v.empty())
			{
				if(v.top()=='('&&s[i]!=')')
				{
					mk = false;
				}
				if(v.top()=='['&&s[i]!=']')
				{
					mk = false;
				}
				if(v.top()=='{'&&s[i]!='}')
				{
					mk = false;
				}
				v.pop();
			}
			else
			{
				mk = false;
			}
		}
		if(mk&&s.empty())
		{
			cout << "yes";
		}
		else
		{
			cout << "no";
		}
		cout << endl;
	}
	return 0;
}
