
#include "c:/stdc++.h"
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        map<int,int> mp;
        
        int count=0;
        for(int i=0;i<n;i++){
            if(mp.count(a[i])==0){
                mp[a[i]]==1;
                count++;
            }
        }
        
        
        for(int i=0;i<m;i++){
            if(mp.count(b[i])==0){
                mp[b[i]]==1;
                count++;
            }
        }
        return count;
    }
    
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends