#include<iostream>
using namespace std;
bool search(int arr[],int siz,int target){
    for(int i=0;i<siz;i++){
        if(arr[i]==target)
            return  true;
    }
    return false;
}
int main(){
int name[]={5,6,7,8,9,3};
for(int i=0;i<6;i++){
//cout<<name[i]<<" ";
}
if(search(name ,6,8)){
   cout<<"element found"<<endl;
   }
   else {
    cout<<"element not found"<<endl;
   }
return 0;
}
