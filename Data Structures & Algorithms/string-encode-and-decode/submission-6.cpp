class Solution {
   public:

    string encode(vector<string>& strs) {
   
        int n = strs.size();
        string s = "";
        for (int i = 0; i < n; i++) {
          s += to_string(strs[i].size()) + "#" + strs[i];
        }
        cout << s;
        return s;
    }

    vector<string> decode(string s) {
        if(s.empty()) return {};
        int m = s.length();
        vector<string> v;
        int i = 0;
        while (i < m) {
          int j = i;
          while(j<m and s[j]!='#') j++;
          int a = stoi(s.substr(i,j-i)) ;
          cout<<a<<endl;
          string x  = s.substr(j+1,a);
          v.push_back(x);
          i = j+a+1;
        }
        return v;
    }
};
