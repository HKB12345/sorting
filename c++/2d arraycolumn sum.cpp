#include<iostream>
using namespace std;
int  columnsum(int arr[3][3],int n,int m)
{

              //  int sum=0;
        for(int j=0; j<3; j++){
            cout<<arr[j][i]<<" ";
            sum=sum+arr[i][j];
      cout<<sum<<" ";
        }

        cout<<endl;


    }
    return sum;

}
int main()
{
    int arr[3][3]={2,3,4,5,6,7,8,9,12};


    columnsum(arr,3,3);




    return 0;
}

