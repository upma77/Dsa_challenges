#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter number of elements: ";
    cin>>n;

    int arr[n];

    cout<<"enter position to delete : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pos;
    cout<<"enter position to delete : ";
    cin>>pos;

    if(pos < 0 || pos >= n){
        cout<<"invalid position";
    }else{
        for(int i = pos;i<n-1;i++){
            arr[i] = arr[i+1];
        }
        n--;

        cout<<"After deletion: ";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}