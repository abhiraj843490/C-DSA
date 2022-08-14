#include<bits/stdc++.h>
using namespace std;
int minswap(vector<int>a){
    int n=a.size();
    vector<pair<int, int>>t;
    for(int i=0;i<n;i++){
        t.push_back({a[i],i});
        cout<<t[i].second<<" ";
    }

    sort(t.begin(), t.end());
    for(int i=0;i<n;i++)
	    cout<<endl<<"sorted "<<t[i]<<" ";
	    int count =0;
	    for(int i=0;i<n; i++){
	        if(i!=t[i].second){
	            count++;
	            swap(t[i],t[t[i].second]);
	            i--;
	        }
	    }	   
	   return count;
	}
int main(){
    //vector<int>a={10,19,6,3,5};
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int ans=minswap(nums);
    cout<<"result "<<ans;
    //cout<<ans;
}