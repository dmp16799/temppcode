#include<iostream>
#include<string>
#include<vector>
#include<map>
#include <bits/stdc++.h>
using namespace std;
string s;
int n;
vector<string> v;
map <char,long long> m;

string xoacach(string s){
	for (int i =0;i<s.size();++i){
		if (s[i]==' '){
			s.erase(i,1);
			--i;
		}
	}
	return s;
}
void demvain(string str){
	cout << str << "\n";
	int sum=0,sumsp=0;
	n = str.length();
	str=xoacach(str);
	cout << str << "\n";
	for (int i =0;i<n;++i){
		m[str[i]]++;
	}
	for (auto x:m){
		if (x.second>=2){
			sum+=x.second;
		}
	}
	cout << sum<< "\n";
	for (auto x:m){
		cout << x.first << " | " << x.second << "\n";
	}
	cout << "\n" << "sumsp = " << sumsp;

}
void inp(){
	cin >> n;
	for (int i =0;i<n;++i){
		getline(cin, s);
		v.push_back(s);
	}
}
void solve(){
	inp();
	demvain("I am a man");
}
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("DL6.inp","r",stdin);
	freopen("KQ6.out","w",stdout);
	solve();
	return 0;
}