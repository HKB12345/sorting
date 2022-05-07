#include<iostream>
using namespace std;
int main()
{
    int arr[4][2]={23,34,4,5,6,7,8,9};
   /* int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
   // cout<<"matrix :\n";*/

    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            cout<<arr[i][j]<<" ";

}
cout<<endl;
    }
    return 0;
}

