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
#define change tolower

char a[30][30];
int n,m,len,k;
char want[110];
bool Check;

int di[] = {-1,-1,-1,0,0,1,1,1};
int dj[] = {-1,0,1,-1,1,-1,0,1};

void play (int i,int j,int state) {
    int ii,jj;
    if(Check){
        return ;
    }
    if(state==len-1) {
        Check = true;
        return ;
        }
    ii = di[k] + i;
    jj = dj[k] + j;
    if(ii>=n||ii<0||jj>=m||jj<0) {
        return ;
        }
    if(a[ii][jj]==want[state+1]) {
        play(ii,jj,state+1);
        }
    }

int main () {
    int q,i,j;
    cin >> n >> m;
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            cin >> a[i][j];
            a[i][j] = change(a[i][j]);
            }
        }
    cin >> q;
    while(q--) {
        cin >> want;
        len = strlen(want);
        Check = false;
        for(i=0; i<len; i++) {
            want[i] = change(want[i]);
            }
        for(i=0; i<n; i++) {
            for(j=0; j<m; j++) {
                if(a[i][j]==want[0]) {
                    for(k=0; k<8; k++) {
                        play(i,j,0);
                    }
                    if(Check){
                        cout << i << " " << j << endl;
                        break;
                    }
                }
                if(Check){
                    break;
                }
            }
            if(Check){
                break;
            }
        }
    }
    return 0;
    }

