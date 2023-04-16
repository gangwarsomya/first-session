#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    int count=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        a[i]=i+1;
	        if (a[i]%6==0){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}