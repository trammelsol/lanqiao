/*
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
*/
#include<iostream>
#include<algorithm>
using namespace std;

int compare(int a,int b){
    //降序排序
    return a>b;
}

int main()
{
    int n,m,i;
    cin>>n;
    int a[n+1],b[n+1];
    
    for(i=1;i<=n;i++)
		cin>>a[i];
    
    int l,r,k,j;
    cin>>m;
    
    while(m--)
    { 
		cin>>l>>r>>k;
        for(i=l,j=1;i<=r;i++,j++)	//把要排序的 l 到 r 的数赋值给b[ ] 
			b[j]=a[i];
        sort(b+1,b+(r-l+2),compare);	//对b进行排序
									//因为j是从1开始的，所以起始位置为b+1,结束位置为 a[]传给 b[]的个数，即终止-起始+2
									//由于sort函数默认为从小到大，所以制定排序规则为compare从大到小 
        cout<<b[k]<<endl;
    }
    return 0;
}