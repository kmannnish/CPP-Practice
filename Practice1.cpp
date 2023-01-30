#include <bits/stdc++.h>
using namespace std;

int main(){
	// cout << "Manish111"<<endl;
	// string str, str2;
	// cin >> str>>str2;
	// string str3 = str +" "+ str2;
	// // cout<<str<<" "<<str2<<endl;
	// cout<<str3<<endl;
	// cin.ignore();
	// string str4;
	// getline(cin, str4);
	// cout<<str4<<endl;

	// getline(cin, str4);
	// cout<<str4<<endl;

	string str5;
	cin >> str5;
	string str_rev;
	for(int i = str5.size()-1;i>=0;--i){
		// str_rev += str5[i]; //Complexity higher then push_back(stringName[index])
		str_rev.push_back(str5[i]);
	}
	cout<<str_rev<<endl;

	// Palindrome 
	// Method 1
	if(str5==str_rev){
		cout<<"YES! It is Palindrome"<<endl;
	}
	else{
		cout<<"NO! It is not Palindrome"<<endl;
	}

	// Method 2
	bool flag = true;
	int n = str5.size();
	for(int i = 0; i<n/2;i++){
		if(str5[i]!=str5[n-1-i]){
			flag = false;
		}
	}	
	if(flag==true){
		cout<<"*YES! It is Palindrome"<<endl;
	}
	else if(flag==false){
		cout<<"NO! It is not Palindrome"<<endl;
	}
	// int i=0;
	// int n1=(str5[i]!=str5[n-1-i]);
	// cout<<n1<<endl;
}