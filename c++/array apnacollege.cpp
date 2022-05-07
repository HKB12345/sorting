#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
   // int b=INT_MIN;
  //  int c=INT_MAX;
     for(int i=0;i<n;i++){
         //b=max(b,arr[i]);
         //c=min(c,arr[i]);
        // int sum=0;
         sum=sum+arr[i];
     }
     cout<<sum;



    return 0;
}
