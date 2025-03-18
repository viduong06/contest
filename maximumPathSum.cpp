#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[501][501];
long long ans=0;
void recur(int i, int j, long long sum)
{
    if(i == n  && j == m)
    {
        ans=max(ans,sum);
    }
    else{
        if( i+1<= n) 
      {
          recur(i+1,j, sum + a[i+1][j]);
      }
        if(j + 1 <= m){ 
        recur(i, j + 1, sum + a[i][j+1]);
        }
    }
}
int main()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        for (int j = 1; j  <= m; j++)
        {
             cin >> a[i][j];
        }
    }
    recur(1,1,a[1][1]);
    cout << ans;
    return 0;
}