// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution
{
    public:
    string reverseWord(string str)
    {
        int p=0;
        int q=str.length()-1;
        while(p <= q){
            char t= str[p];
            str[p]=str[q];
            str[q]=t;
            p++;    q--;
        }
        return str;
    }
};


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
