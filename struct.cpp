#include<bits/stdc++.h>
using namespace std;
struct vanPhong{
    string tenNV;
    string tenQL;
    string sdtNV;
    string sdtQL;
};
int main()
{
    struct vanPhong vp[100];
    int n; cin >> n;
    cin.ignore();
    for( int i = 0; i < n; i++)
    {
        cout<<"NHAP TEN NHAN VIEN THU "<< i + 1 <<endl;
        getline(cin,vp[i].tenNV);
        cout<<"NHAP TEN QUAN LY THU "<< i + 1 <<endl;
        getline(cin,vp[i].tenQL);
        cout<<"NHAP SDT NHAN VIEN THU "<< i + 1 <<endl;
        getline(cin,vp[i].sdtNV);
        cout<<"NHAP SDT QUAN LY THU "<< i + 1 <<endl;
        getline(cin,vp[i].sdtQL);
    }
    cout << "TA CO BANG SAU\n";
    for(int i = 0; i < n; i++)
    {
        cout << setw(3)<<i+1<<setw(10)<<vp[i].tenNV<<setw(10)<<vp[i].sdtNV<<endl;
        cout << setw(3)<<i+1<<setw(10)<<vp[i].tenQL<<setw(10)<<vp[i].sdtQL<<endl;

    }
}