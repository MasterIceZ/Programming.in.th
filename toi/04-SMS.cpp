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

char a[110];
char thumb[10][10] = { "ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
int now;

void sms (int pos,int time)
{
	int i,len;
	
	if(pos==1)
	{
		f0(i,0,time)
		{
			len = strlen(a);
			if(len==0)
			{
				return ;
			}
			a[now--] = '\0';
		}
	}
	else
	{
		if(pos==7 || pos==9)
		{
			time %= 4;
		}
		else
		{
			time %= 3;
		}
		a[now++] = thumb[pos-2][time-1];
	}

}

int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int q,pos,time,len,changex,changey;
	cin >> q;
	cin >> pos >> time;
	now = 0;
	sms(pos,time);
	q--;
	while(q--)
	{
		cin >> changex >> changey >> time;
		pos = pos + changex + (changey * 3);
		sms(pos,time);
	}
	len = strlen(a);
	if(len == 0)
	{
		cout << "null" << endl;
	}
	else
	{
		cout << a << endl;
	}
	return 0;
}
