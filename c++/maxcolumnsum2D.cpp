#include<iostream>
using namespace std;
int columnsum(int arr[4][2],int n,int m){
    int maxi=INT_MIN;

    for(int i=0; i<m; i++) {
            int sum=0;

        for(int j=0;j<n;j++) {
            cout<<arr[j][i ]<<" ";
            sum=sum+arr[j][i];
    }
      cout<<sum<<" ";
    maxi=max(maxi,sum);

    cout<<endl;
}

cout<<"maximum is"<<maxi<<endl;
}
int main()
{
int arr[4][2]={{1,2},{2,3},{3,4},{4,5}};
columnsum(arr,4,2);



    return 0;
}


