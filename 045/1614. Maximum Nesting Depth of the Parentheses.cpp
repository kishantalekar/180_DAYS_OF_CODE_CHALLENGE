class Solution {
public:
    int maxDepth(string s) {
    int open = 0;
	int closed = 0;
	int maxnesting = -1;
	for(int i = 0; i <s.size();i++){
		if(s[i] == '('){
			open++;
		}else if(s[i] == ')'){
			closed++;
		}
			maxnesting= max(open-closed,maxnesting);
		if(open == closed){
			open = 0;
			closed = 0;
		}
	}
	return maxnesting;
    }
};