#include <iostream>
using namespace std;

int main() {
    int rows = 5;
     for(int i=1;i<=rows;i++){
         for(int s=1;s<=(rows-i);s++){
             cout<<" ";
         }
         for(int j=1;j<=(2*i-1);j++){
             cout<<"*";
         }
         cout<<endl;
     }
}

