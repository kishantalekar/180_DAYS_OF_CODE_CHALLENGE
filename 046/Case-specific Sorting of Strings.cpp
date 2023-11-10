//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        vector<char>upper_case;
        vector<char>lower_case;
        for(int i = 0; i <n ;i++){
            if(str[i]>='a' && str[i] <='z'){
                lower_case.push_back(str[i]);
            }else{
                upper_case.push_back(str[i]);
            }
        }
        sort(upper_case.begin(),upper_case.end());
        sort(lower_case.begin(),lower_case.end());
        
        int k=0,j=0;
        for(int i = 0; i <n ;i++){
            if(str[i]>='a' && str[i] <='z'){
                str[i] = lower_case[k++];
            }else{
                str[i] = upper_case[j++];
            }
        }
        return str;
        
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
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends