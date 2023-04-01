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
}

//Time Complexity Calculation


#include <iostream> 
 #include <algorithm> 
 using namespace std; 
  
 void intersection(int *arr1, int *arr2, int n, int m) 
 { 
     sort(arr1, arr1 + n); //
     sort(arr2, arr2 + m); 
     int i = 0, j = 0; 
     while (i < n && j < m) //nm
     { 
         if (arr1[i] == arr2[j]) //n
         { 
             cout << arr1[i] << " "; 
             i++; 
             j++; 
         } 
         else if (arr1[i] < arr2[j]) //n
         { 
             i++; 
         } 
         else //n^2
         { 
             j++; 
         } 
     } 
 } 
  
 int main() 
 { 
     int t; 
     cin >> t; 
     while (t--) // from t, t-1 ......1, 0
     { 
  
         int size1, size2; 
  
         cin >> size1; 
         int *input1 = new int[size1]; 
  
         for (int i = 0; i < size1; i++) // n = input from user
         { 
             cin >> input1[i]; 
         } 
  
         cin >> size2; 
         int *input2 = new int[size2]; 
  
         for (int i = 0; i < size2; i++) // n
         { 
             cin >> input2[i]; 
         } 
  
         intersection(input1, input2, size1, size2); 
  
         delete[] input1; 
         delete[] input2; 
  
         cout << endl; 
     } 
  
     return 0; 
 }