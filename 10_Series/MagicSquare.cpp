/*
 *	AUTHOR : IceBorworntat
 * */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define us unsigned
#define pii pair<int,int>
#define f0(a,b,c) for(a=b;b<c;a++)
#define f1(a,b,c) for(a=b;b<=c;a++)
#define f2(a,b,c) for(a=b;a>c;a--)
#define f3(a,b,c) for(a=b;a>=c;a--)
#define r4i {-1,1,0,0}
#define r4j {0,0,-1,1}
#define r8i {-1,-1,-1,0,0,1,1,1}
#define r8j {-1,0,1,-1,1,-1,0,1}
#define let int

int check=0,mark[110];
int sum[11],tang[5];
int main (){
    int j,i,num,a;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=1;j<=a;j++){
            scanf("%d",&num);
            mark[num]++;
            sum[i]+=num ;
            if(i+1 == j)
                tang[0] += num ;
            if(i+j==a)
                tang[1] += num ;
            if(mark[num]!=1)
                check++;
        }
    }
    if(check==0)
    for(i=1;i<=a*a;i++){
        if(mark[i]==0){
            check++;
            break;
        }
    }
    if(check==0){
        for(i=1;i<a;i++){
            if(sum[0]!=sum[i]){
                check++;
                break;
            }
        }
    }
    if(check==0){
        for(i=1;i<2;i++){
            if(tang[0]!=tang[i]){
                check++;
                break;
            }
        }
    }
    if(check==0){
        if(tang[0]!=sum[0])
            check++;
    }
    if(check != 0)
        printf("No");
    else
        printf("Yes");
    return 0;
}

