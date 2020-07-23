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
#define let(a,b) int a=b

int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int i,m,n,x,z;
    let(q,20);
    while(q--)
    {
        cin >> m >> n;
        if(m>4*n)
        {
            z = 0;
        }
        else if(m<2*n)
        {
            z = 0;
        }
        else
        {
            x = m/2 - n;
            z = n-x;
            z++;
        }
        cout << z << endl;
    }
	return 0;
}
