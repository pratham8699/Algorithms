#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,y;
	cin>>k>>y;
	int count = 0;
	int start = 0;//ith bit of the number k
	int end = 0;//ith bit of the number y
	int z = 0;
	int ans;
	for(int i = 32;i>=0;i--){
		int g = k>>i;
		if(g&1){
			start = 1;
		}
		else{
		    start = 0;
		}
	
	
		int p = y>>i;
		if(p&1){
			end = 1;
		}
		else{
			end = 0;
		}
		if(start == end){

		}
		else {
		if(start ==0){
			z = z|(1<<i);
			ans = z;
		}
		else{
			ans = -1;

		}


		}
	}
	cout<<ans<<endl;
    


}
