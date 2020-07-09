#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    void Find_Max(int *,int *);
    int len;
    cin>>len;
    int *Num = new int[len];
    for(int i=0;i<len;i++){
        cin>>Num[i];
    }
    int Much;
    cin>>Much;
    int (* Search)[3] = new int[Much][3];
    for(int i=0;i<Much;i++){
        cin>>Search[i][0]>>Search[i][1]>>Search[i][2];
    }
    for(int i=0;i<Much;i++){
        Find_Max(Num,&*Search[i]);
    }
    delete []Num;
    delete []Search;
    return 0;
}

void Find_Max(int *Num,int *Search){
    sort(Num+Search[0]-1,Num+Search[1]-1);
    cout<<Num[Search[1]-Search[2]]<<endl;
}