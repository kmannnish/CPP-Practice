#include<bits/stdc++.h>
using namespace std;
int main(){

    bool flag= true;
    string str;
    cin >> str;
    int n=str.size();
    for(int index=0; index < n/2;index++){
        if (str[index]!=str[n-1-index]){
            cout<<"NOT PALNDROME!!"<<endl;
            flag=false;
        }
    }
    // if(flag==false){
    //     cout<<"NOT PALNDROME!!"<<endl;
    // }
    if (flag==true){
        cout<<"PALINDROME"<<endl;
    }
    return 0;
}