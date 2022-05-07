#include<iostream>
using namespace std;
int searchd( int arr[4][2],int target,int row,int col)
{
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                cout<<true;
            }
        }
    }
    cout<< false;
}
int main(){

    int arr[4][2]={12,34,45,36,56,78,6,5};

    /*for(int i=0;i<row;i++){
        for(int j=0;j<col; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }*/

    searchd(arr,6,4,2);
   return 0;

}
