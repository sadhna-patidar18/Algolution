#include<iostream>
using namespace std;
void count_frequency(int *arr,int n){
    bool visited[n]={false};
    for(int i=0;i<n;i++){
        if(visited[i]==true){
            continue;
        }
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                visited[j]=true;
            }
        }
        cout << "Element " << arr[i] << " occurs " << count << " times." << endl;
    }
}
int main() {
    int arr[]={1, 2, 3, 2, 4, 5, 1, 6, 1, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    count_frequency(arr,n);
}