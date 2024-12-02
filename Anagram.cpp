#include<iostream>
#include<string>
using namespace std;
bool Is_palind(string s){
    int freq[26]={0};
    for(int i=0;i<s.length();i++){
        char c = s[i];
        int index = c-'a';
        freq[index]++;
    }
    int oddcount=0;
    for(int i=0;i<26;i++){
        if(freq[i]%2!=0){
            oddcount++;
        }
    }
    return oddcount<=1;
}
int main() {
    int t;
    cout<<"Enter t:";
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(Is_palind(s)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}