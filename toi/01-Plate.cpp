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

#define pb push_back

vector <int> row;

int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int i,j,n,m,num1,num2;
	cin >> n >> m;
	f0(i,0,m)
	{
		cin >> num1 >> num2;
	}
	char opr;
	while(1){
		cin >> opr;
		switch(opr)
		{
			case 'X' :
				cout << "0" << endl;
				return 0;
			case 'E' :
				cin >> num1;
				row.pb(num1);
			case 'D' :
				if(!row.empty())
				{
					cout << row.begin();
					row.pop();
				}
				else
				{
					cout << "empty" << endl;
				}
		}
	}
	return 0;
}
