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

const int di[] = {-1,0,0,1};
const int dj[] = {0,-1,1,0};

int n,m,k;
char key[]="NESW";
int mp[110][110];
int mark[110][110];
int check;

void play(int i,int j);

int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	read(n,m,k);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;i++)
		{
			read(mp[i][j]);
		}
	}
	while(k--)
	{
		check = -1;
		int pos1,pos2;
		memset(mark,0,sizeof mark);
		read(pos1,pos2);
		play(pos2,pos1);
	}
	return 0;
}

void play(int i,int j)
{
	int ii,jj,k,a;
	int mk = 0;
	mark[i][j] = 1;
	a = mp[i][j];
	ii = di[a] + i;
	jj = dj[a] + j;
	if(mark[ii][jj])
	{
		check = -1;
		cout << "NO" << endl;
		return ;
	}
	//NESW
	if(ii<1&&jj<=m&&j>0)
	{
		check = 0;
		mk = 1;
	}
	else if(jj>m&&ii>0&&ii<=n)
	{
		check = 1;
		mk =1;
	}
	else if(ii>n&&jj<=m&&jj>0)
	{
		check = 2;
		mk = 1;
	}
	else if(jj<1&&ii>0&&ii<=n)
	{
		check = 3;
		mk = 1;
	}
	if(mk)
	{
		cout << key[check];
		return ;
	}
	play(ii,jj);
}
