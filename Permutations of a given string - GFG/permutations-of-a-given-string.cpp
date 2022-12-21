//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
    	void recurPermute(int idx,string s,vector<string>&ans)
    	{
    	    if(idx == s.length())
    	    {
    	        ans.push_back(s);
    	        return;
    	    }
    	    for(int i=idx;i<s.length();i++)
    	    {
    	        if(s[i] != s[i+1])
    	        {
    	            swap(s[i],s[idx]);
        	        recurPermute(idx+1,s,ans);
        	        swap(s[i],s[idx]);
    	        }
    	        
    	    }
    	}
    	
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string>ans;
		    recurPermute(0,S,ans);
		    sort(ans.begin(),ans.end());
		    return ans;
		    
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends