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

int food[] = {1,2,3,4,5,6,7,8};
bool can[10] = {false}; 

int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int num,n,m,i;
	cin >> n;
	cin >> m;
	f0(i,0,m)
	{
		cin >> num;
		can[num] = true;
	}
	do
	{
		if(can[food[0]]==false)
		{
			f0(i,0,n)
			{
				printf("%d ",food[i]);
			}
			cout << endl;
		}
	}while(next_permutation(food,food+n));

	return 0;
}
