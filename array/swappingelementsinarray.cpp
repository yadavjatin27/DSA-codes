#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i = 0;
    int arr1[8] = {0,3,0,9,0,5,7,4};

    for(i = 0; i<=8;i++){
        cout<<arr1[i]<<" "<<endl;
    }
    
    while(i<=8){
        if(arr1[i]!= 0){
            swap(arr1[i],arr1[i+1]);
            i++;
        }
        else i++;
    }

    for(i = 0; i<=8;i++){
        cout<<arr1[i]<<" ";
    }
}
