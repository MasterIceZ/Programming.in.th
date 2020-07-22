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
#define low tolower

int n,m,len;
int di[] = r8i;
int dj[] = r8j;
char a[50][50];
char want[110];
bool check;

void play (int i,int j,int state); 

int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int i,j,k;
	cin >> n >> m;
	f0(i,0,n)
	{
		f0(j,0,m)
		{
			cin >> a[i][j];
			a[i][j] = low(a[i][j]);
		}
	}
	cin >> k;
	while(k--)
	{
		cin >> want;
	       	len = strlen(want);
		check = false;
		f0(i,0,len)
		{
			want[i] = low(want[i]);	
		}
		f0(i,0,n)
		{
			f0(j,0,m)
			{
				if(a[i][j]==want[0])
				{
					play(i,j,0);
					if(check)
					{
						cout << i << " " << j << endl;
						break;
					}
				}
			}
			if(check)
			{
				break;
			}
		}	
	}

	return 0;
}

void play(int i,int j,int state)
{
	int ii,jj,k;
	if(state==len-1)
	{
		check = true;
		return ;
	}	
	f0(k,0,8)
	{
		ii = di[k] + i;
		jj = dj[k] + j;
		if(ii>=n||ii<0||jj>=m||jj<0)
		{
			continue;
		}
		if(a[i][j]!=want)
		{
			continue;
		}
		play(ii,jj,state+1);
	}
}
