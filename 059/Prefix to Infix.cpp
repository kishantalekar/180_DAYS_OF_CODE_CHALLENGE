// Prefix to Infix

# include <bits/stdc++.h>
string prefixToInfixConversion(string &str){
	// Write your code here.
	int n = str.length();stack<string>st;
	// For prefix to infix for loop woll run in reverse order..
	for(int i=n-1; i>=0; i--){
		if(str[i]>='a' && str[i]<='z'){
			// You might think this step is not necessary, but it is..
			// We have declared stack of type string, if we directly st.push(str[i]) then it is error
			string temp= "";
			temp = str[i];
			st.push(temp);
		}else{
			string s1 = st.top();
			st.pop();
			string s2 = st.top();
			st.pop();
			string exp = '('+s1+str[i]+s2+')';
			st.push(exp);
		}
	}
	return st.top();
}