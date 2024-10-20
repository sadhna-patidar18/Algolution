#include<iostream>
#include<climits>
using namespace std;
int Profit(int *prices,int n){
    int min=INT_MAX;
     int maxProfit = 0;

    for (int i = 0; i < n; i++) {
        if (prices[i] < min) {
            min = prices[i];
        }
    int Potential=prices[i]-min;
    if(Potential>maxProfit){
        maxProfit=Potential;
    }
    }
    return maxProfit;
}
int main() {
    int prices[]={2,4,6,1,3,8};
    int n=6;
    cout<<Profit(prices,n);
}