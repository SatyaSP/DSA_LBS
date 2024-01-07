//{ Driver Code Starts
/* Driver program to test above function */

#include"C:/stdc++.h"


// } Driver Code Ends
//User function Template for C++

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	//code here.
    	int M=A[0] ,m=A[0];
    	for(int i=0;i<N;i++){
    	    M=max(M,A[i]);
    	    m=min(m,A[i]);
    	}
    	return M+m;
    }

};

//{ Driver Code Starts.
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

// } Driver Code Ends