#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	cin.ignore();
	int dem=0;
	int count[256]={0};
	vector < string > res;
	for(int i = 0; i < n; i++){
	bool ok = true;
		string s;
		getline(cin, s);
		unsigned long long k = stoll(s);
		for(char x : s){
			dem++;
			count[x]++;
		}
		for(int j = 2; j <= dem; j++){
			int temp = k;
			k*=j;
			string check = to_string(k);
			for(char x : check)
			{
				if(count[x] == 0) ok = false;
			}
			k = temp;
		}
		if(ok) cout << "YES\n";
		else cout <<"NO\n";
	}
}