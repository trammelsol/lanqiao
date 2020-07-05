#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"please input the length of number:"<<endl;
	cin>>n;
	int *list = new int[n];
	int i;
	for(i=0;i<n;i++){
		cout<<"please input the number"<<i+1<<endl;
		cin>>list[i];
	}
	int search;
	cout<<"please input the number you find:"<<endl;
	cin>>search;
	for(i=0;i<n;i++){
		if(list[i]==search){
			cout<<i+1<<endl;
			break;
		}
	}
	if(i==n) cout<<-1<<endl; //not find
	delete []list;
	return 0;
}
