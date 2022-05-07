#include<iostream>
using namespace std;
bool isprime(int n){
    if(n==1 || n==0){
        return 0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0) return 0;
    }
    return true;
}
int main(){
    int sum=0;
    int N=10;
    for( int i=1;i<=N;i++){
        if(isprime(i)){
            int sum=0;
             sum=sum+i;


           cout<< i<<" "<<endl;
            // sum=sum+i;

        }
            cout<<sum;

}
 return 0;
}


