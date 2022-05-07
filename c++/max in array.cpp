#include<iostream>


using namespace std;
/*int getmaxfromarray(int arr[] , int n){
    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        ans= max(ans , arr[i]);
    }
    return ans;
    */
    void swapAlternates(int arr[]), int n){
        int i=0;
        while(i<n){
            if(i+1<n){
                swap(arr[i],arr[i+1]);
            }
           i= i+2;
        }
    }

        int main()
    {
        int arr[] ={3,5,7,6,9,2,5,};
        // reversearray(arr ,8);
        //print the array
       // cout<<"maximum value is"<<getmaxfromarray(arr ,8)<<endl;
       swapAlternates(arr , 7);
        for(int i=0;i<7;i++){
            cout<<arr[i]<<" ";

        }
        cout<<endl;
        return 0;
    }
