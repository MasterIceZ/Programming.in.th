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

void sms (int pos,int time,int state)
{
	int i,len;
	switch(pos)
	{
		case '1' :
			f0(i,0,time)
			{
				len = strlen(a);
				if(len==0)
				{
					return;
				}
				a[len-1] = '\0';
				state--;
			}
			break;
	}
}

int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int q,pos,time,now,len,changex,changey;
	cin >> q;
	cin >> pos,time;
	sms(pos,time,now);
	q--;
	while(q--)
	{
		cin >> changex >> changey >> time;
		pos = pos + changex + (changey * 3);
		play (pos,time,now);
	}
	len = strlen(a);
	if(len == 0)
	{
		cout << "null";
	}
	else
	{
		cout << a;
	}
	return 0;
}
