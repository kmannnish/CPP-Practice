#include <bits/stdc++.h>
using namespace std;

int main(){
	cout<<"Hello"<<endl;
	// while(true){
	// 	int num;
	// 	cin>>num;
	// 	if(num==42){
	// 		break;
	// 	}
	// 	cout<<num<<endl;
	// }

	int t;
	cin>>t;
	while(t--){
		int num1;
		cin>>num1;
		int digit_sum=0;
		while(num1>0){
			int rem = num1%10;
			digit_sum += rem;
			num1 /=10;
		}
		cout<<digit_sum<<endl;
	}
}