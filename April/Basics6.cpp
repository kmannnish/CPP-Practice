#include <bits/stdc++.h>
using namespace std;

void printFunc(){
	cout<<"Hello Manish"<<endl;
}
int sum(int a, int b){
	int result = a+b;
	return result;
}
// using & = pass by Reference , means the change returns to it.
// Arrays always pass by Reference , else pass by value
void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

int main(){
	int a = 2;
	int b = 5;
	printFunc();
	cout<<sum(10, 5)<<endl;
	cout<<a<<" "<< b<<endl;
	swap(a,b);
	cout<<a<<" "<< b<<endl;
	cout<<max(a,b)<<endl;
	cout<<min(a,b)<<endl;
}