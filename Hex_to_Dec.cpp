#include<iostream>
#include<string>
//#include<math.h>
using namespace std;

int main(){
    string num;
    cin>>num;
    unsigned long result=0;
    for(int i=0;i<num.size();i++){
        //cout<<num[i];
        switch(num[i]){
            case '0':{result<<=4;result+=0;}break;
            case '1':{result<<=4;result+=1;}break;
            case '2':{result<<=4;result+=2;}break;
            case '3':{result<<=4;result+=3;}break;
            case '4':{result<<=4;result+=4;}break;
            case '5':{result<<=4;result+=5;}break;
            case '6':{result<<=4;result+=6;}break;
            case '7':{result<<=4;result+=7;}break;
            case '8':{result<<=4;result+=8;}break;
            case '9':{result<<=4;result+=9;}break;
            case 'A':{result<<=4;result+=10;}break;
            case 'B':{result<<=4;result+=11;}break;
            case 'C':{result<<=4;result+=12;}break;
            case 'D':{result<<=4;result+=13;}break;
            case 'E':{result<<=4;result+=14;}break;
            case 'F':{result<<=4;result+=15;}break;
            default:cout<<"impossible !";
        }
        //cout<<hex<<result<<endl;
    }
    cout<<dec<<result;
    return 0;
}