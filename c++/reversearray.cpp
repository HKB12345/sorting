#include<iostream>
using namespace std;


    void reversearray(int arr[],int n){
        int i=0;
        int j=n-1;
        while(i<j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    int main()
    {
        int arr[] ={3,5,7,6,9,2,5,4};
         reversearray(arr ,8);
        //print the array
        for(int i=0;i<8;i++){
            cout<<arr[i]<<" ";

        }
        cout<<endl;
        return 0;
    }

