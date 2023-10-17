vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector<int> l;
    int n = a.size();
    int max_element = INT_MIN;
    for(int i = n-1; i >=0; i--){
        if(a[i] > max_element){
            max_element = max(max_element,a[i]);
            l.push_back(a[i]);
        }
    }
    return l;
}