#include <iostream>
using namespace std;

int main(){
    unsigned long N;
    cin>>N;
    if(N%2){
        cout<<N * (N-1) * (N-2)<<endl;
    }
    else{
        if(N%3){
            cout<<N * (N-1) * (N-3)<<endl;
        }
        else{
            cout<< (N-1) * (N-2) * (N-3)<<endl;
        }
    }
    return 0;
}