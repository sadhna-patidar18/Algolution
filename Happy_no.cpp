#include<iostream>
#include<unordered_set>
using namespace std;
int Sum_of_sq(int n){
    int sum=0;
    while(n>0){
    int digit =n%10;
    sum=sum+(digit*digit);
    n=n/10;
    }
    return sum;
}
bool ishappy_no(int n){
    unordered_set<int> seenNumbers;
    
    while (n != 1) { 
        n=Sum_of_sq(n);
        if (seenNumbers.find(n) != seenNumbers.end()) {
            return false; 
        }
        seenNumbers.insert(n);  
}
    return true;
    
}
int main() {
    int n;
    cout<<"enter input:";
    cin>>n;
    if(ishappy_no(n)){
        cout<< n <<" is a happy no"<<endl;
    }
    else{
        cout<< n <<" is not happy no";
    }
}