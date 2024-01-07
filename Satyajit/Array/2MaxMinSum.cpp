#include<bits/stdc++.h>
using namespace std;

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	int M=A[0],m=A[0];
    	
    	for(int i=0;i<N;i++){
    	    M=max(M,A[i]);
    	    m=min(m,A[i]);
    	}
    	
    	return M+m;
    }

};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}
