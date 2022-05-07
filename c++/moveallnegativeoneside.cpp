#include<iostream>
using namespace std;
 int firstMissingPositive(int A[], int n)
    {
        for(int i = 0; i < n; ++ i)
            while(A[i] > 0 && A[i] <= n && A[A[i] - 1] != A[i])
                swap(A[i], A[A[i] - 1]);

        for(int i = 0; i < n; ++ i)
            if(A[i] != i + 1)
                return i + 1;

        return n + 1;
    }
int main(){

int name[]={5,-  6,7,-8,9,-3};
for(int i=0;i<6;i++){
//cout<<name[i]<<" ";
firstMissingPositive(name,6);
cout<<name[i]<<" ";
}
return 0;
}
