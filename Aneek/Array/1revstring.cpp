#include<iostream>
#include<string>
using namespace std;
class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        int p=0;
        int q=str.length()-1;
        while(p<=q){
            int temp=str[p];
            str[p]=str[q];
            str[q]=temp;
            p++;
            q--;
        }
        return str;
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
    	string s;
    	cin >> s;
    	Solution ob;
    	cout << ob.reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends