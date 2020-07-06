#include <algorithm>
#include<cstring>
#include<string>
#include<iostream>
using namespace std;

string to_str(int __val){
	char ch[10];
	sprintf(ch, "%d", __val);
    string str(ch, ch + strlen(ch));
    return str;
}

bool to_int(string A,int n){
    int sum=0;
    for(int i=0;i<A.size();i++){
        sum+=A[i];
    }
    if(sum==n) return 1;
    else return 0;
}

int main(){
    int n;
    cin>>n;
    for(int i=800000;i<=999999;i++){
        string s = to_str(i);
        string s_reverse = s;
        reverse(s.begin(),s.end());
        if(s==s_reverse&&to_int(s_reverse,n))
        //if(to_int(s_reverse,n))
        cout<<s_reverse<<endl;
    }
    cout<<"over!"<<endl;
    return 0;
}