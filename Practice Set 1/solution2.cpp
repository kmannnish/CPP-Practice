// https://assessment.hackerearth.com/challenges/college/iiit-allahabad-test-draft-2-15/problems/
// Jiya likes a sequence if all its elements when multiplied yields a number , whose least significant digit is either 2, 3 or 5
// For the first testcase,considering the sequence 2 2 2 2 2, when we multiply all the elements get 32 as the product.The least significant digit of 32 is 2 , so the string is liked by Jiya.
// Input:
// 2
// 5
// 2 2 2 2 2
// 4
// 2 2 2 2
// Output:
// YES
// NO

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long product=1;
		for(int i=0;i<n;++i){
			int x;
			cin>>x;
			product = product * x;
		}
		int digit=product%10;
		if(digit==2||digit==3||digit==5){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}