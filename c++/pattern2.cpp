#include<iostream>
using namespace std;
int main()
{
    int n=6;
    for( int row=1;row<=n;row++){
        for(int col=1;col<=n-row;col++){
            cout<<" ";
        }
        for(int col=1;col<=row;col++){
            cout<<col;
        }
        cout<<endl;
    }
    return 0;
}
