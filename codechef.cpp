#include<iostream>

using namespace std;


int main(){

   int a,c,ck=0,n,i,cc,dd,rem=0,rev=0,j=1;
   cin>>n;
   for(i=0; i<n; i++){
    cin>>a;
    while(a!=0){
        rem = a%10;
        rev = rev*10 + rem;
        a/=10;
    }
    cout<<rev<<endl;
    rev=0;
   }
}