// https://assessment.hackerearth.com/challenges/college/iiit-allahabad-test-draft-2-15/problems/

// Every word of the input has been placed in the new line with characters in uppercase as well
// INPUT:
// subscribe to the luv channel
// OUTPUT:
// SUBSCRIBE
// TO
// THE
// LUV
// CHANNEL

#include<bits/stdc++.h>
using namespace std;

char upper(char c){
	return 'A'+(c-'a');
}

int main(){
	while(true){
		string s;
		cin>>s;
		if(s.size()==0){
			break;
		}
		for(int i=0;i<s.size();++i){
			s[i]=upper(s[i]);
		}
		cout<<s<<endl;
	}
}