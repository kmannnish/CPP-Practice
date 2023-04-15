// Constraints
// 1<=N<=100

// print answer module M
// Generaly for int M = 10^9+7
// where M = 47

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int M=47;
	int fact=1;
	for(int i = 2; i<=n;++i){
		fact = (fact * i)%M;
	}
	cout<<fact<<endl;
}