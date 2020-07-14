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