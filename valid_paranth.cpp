#include<iostream>
using namespace std;
bool Check_string(string s1){
    int low=0,high=0;
    for(int i=0;i<s1.length();i++) {
        char c=s1[i];
        
       if(c=='('){
          low++;
          high++;
       }
       else if(c==')'){
           low--;
           high--;
       }
       else if(c=='*'){
           low--;
           high++;
       }
       if(high<0){
           return false;
       }
       low=max(low,0);
    }
    return low==0;
}
int main() {
    string s1="(()))";
    cout<<Check_string(s1)<<endl;;
}