//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        int n1 = str1.size();
int n2 = str2.size();

string s1 = str1;
string s2 = str2;

// Check if str1 is equal to the reversed version of str2 with the last two characters moved to the beginning
char last_second = s2[n2 - 1];
char last_first = s2[n2 - 2];
s2.insert(0, 1, last_second);
s2.insert(0, 1, last_first);
s2.pop_back();
s2.pop_back();

if (str1 == s2) {
    return true;
}

// Reset s2 to the original value
s2 = str2;

// Check if str2 is equal to the reversed version of str1 with the last two characters moved to the beginning
last_second = s1[n1 - 1];
last_first = s1[n1 - 2];
s1.insert(0, 1, last_second);
s1.insert(0, 1, last_first);
s1.pop_back();
s1.pop_back();

if (str2 == s1) {
    return true;
}

return false;

        
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends