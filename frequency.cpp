#include<bits/stdc++.h>
using namespace std;
map < int, int > fre;
bool cmp(int a, int b)
{
    if ( fre[a] != fre[b]) return fre[a] > fre[b];
    else return a < b;
}
bool cmp2(int a, int b)
{
    return fre[a]> fre[b];
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for ( int i = 0; i < n; i++)
    {
        cin>>a[i];
        b[i]=a[i];
        fre[a[i]]++;
    }
    sort(a, a + n, cmp);
    for( int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    stable_sort(b, b + n, cmp2);
    for( int i = 0; i < n; i++)
    {
        cout<<b[i]<<" ";
    }
   
}