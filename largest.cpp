#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,10,15,25,35,45};
    int n=6;
    int largest =arr[0];
    for(int i =1;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"largest element ="<<largest;
    return 0;
}