#include <iostream>
using namespace std;

void arrayy(int arr[],int n){
    // int cn=0;
    // int cp=0;
    int l=0;
    int m=0;
    int h=n-1;
    // for (int i=0;i<n;i++){
    //     if(arr[i]<0){
    //         cn++;
    //     }
    //     if(arr[i]>0){
    //         cp++;
    //     }
    // }

    while(m<h){
        if(arr[m]<0){
            int temp=arr[l];
            arr[l]=arr[m];
            arr[m]=temp;

            m++;
            l++;
            
        }
        if(arr[m]>0){
            m++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }



}
int main(){
    int n;
    int arr[6];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arrayy(arr,n);

}