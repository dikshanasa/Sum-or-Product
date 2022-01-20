#include<iostream>
using namespace std;

int main() {
    int n,c;
    int sum=0,pro=1;
    cin>>n>>c;
    if(c==1){
        for(int i=1;i<=n;i++){
            sum=sum+i;
        }
        cout<<sum<<endl;
    }
    else if (c==2){
        for(int i=1;i<=n;i++){
            pro = pro*i;
        }
        cout<<pro;
    }
    else {
        cout<<"-1";
    }
 
	
}
