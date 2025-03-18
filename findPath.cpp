#include<bits/stdc++.h>
using namespace std;
int a[500][500];
int n, m, s, t, u, v;
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
void recur(int i, int j){
    cout<< "DI TOI "<<i<<" "<<j<<endl;
    a[i][j] = 0;  // set that a[i][j] as visited
    for(int k = 0; k < 4; k++)
    {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 0 && i1 <= n && j1 >= 0 && j1 <= m && a[i1][j1] == 1)
       {
        recur(i1, j1);
       }
    }
}
int main()
{
   cin >> n >> m >> s >> t >> u >> v;
   for( int i = 1; i <= n; i++)
   {
    for( int j = 1; j <= m; j++) cin >> a[i][j];
   }
   recur(s,t);
   if(a[u][v]==0)
   {
    cout << "YES";
   }
   else{
    cout << "NO";
   }
}