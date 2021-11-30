#include <iostream>
using namespace std;

int main(){
   int n=0;
    cin>>n;
    if (numeroprimo(n, n-1)){
        cout<< "numero primo";
    }else{
        cout<<"numero non primo";
    }
  return 0;
}
