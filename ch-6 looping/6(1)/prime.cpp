#include<iostream>
using namespace std;
main(){
    int n, count =0;
    cout << "Enter the Number :=  ";
    cin >> n;
    for(int i=1; i<=n; i++){
        if(n % i==0){
            count ++;
        }
    }
    if(count == 2){
        cout << "Prime Number";
    }
    else{
        cout << "Not a Prime Number";
    }
}