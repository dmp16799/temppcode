#include<bits/stdc++.h>
using namespace std;
string s = "I am a man";
string xoacach(string s){
	for (int i =0;i<s.size();++i){
		if (s[i]==' '){
			s.erase(i,1);
			--i;
		}
	}
	cout << s << " ";
	return s;
}
int main(int argc, char const *argv[])
{
	xoacach(s);
	system("pause");
	return 0;
}