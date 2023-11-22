
// Infix To Postfix
#include<bits/stdc++.h>

int priority(char ch){
	if(ch == '(' || ch == ')')return 0;
	if(ch == '+' || ch == '-')return 1;
	if(ch == '*' || ch == '/')return 2;
	if(ch == '^')return 3;
	return -1;
}
string infixToPostfix(string str){
	// Write your code here
	stack<char> st;
	string temp;
	for(int i = 0; i < str.size() ;i++){

		if(str[i] >= '0' && str[i] <= '9' || str[i] >= 'a' && str[i] <= 'z'){
			temp +=str[i];
		}else if(str[i] == '('){
			st.push(str[i]);
		}else if(str[i] == ')'){
			while(st.top() != '('){
				temp +=st.top();
				st.pop();
			}
			st.pop();
		}else{
			while(!st.empty() && priority(st.top()) >= priority(str[i])){
				temp +=st.top();
				st.pop();
			}
			st.push(str[i]);
		}

	}
	while(!st.empty()){
		temp += st.top();
		st.pop();
	}
	return temp;
}