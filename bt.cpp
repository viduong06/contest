#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    map < char , bool > mp;
    int dem[256]={0};
    getline(cin, s1);
    getline(cin, s2);
    for(auto x : s1) mp[x]=false;
    for(auto x : s2) mp[x]=false;


    for ( auto x : s1)
    {
        dem[x]=1;
    }
    for(auto x : s2)
    {
        if(dem[x] == 1 ) dem[x]=2;
        else dem[x]=-1;
    }
    for( int i = 0; i < 256; i++)
    {
        if(dem[i]==2) cout <<  (char) i;
    }
    cout << endl;
    for( int i = 0; i < 256; i++)
    {
        if(dem[i]!=0) cout << (char) i;
    }

}