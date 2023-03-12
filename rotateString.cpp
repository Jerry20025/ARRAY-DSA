bool rotateString(string s1, string s2) {
       if(s1.size()!=s2.size()) return false;
    //    string check=s1+s2;
       return (s1+s1).find(s2)!=string::npos;
    }
    
    
   Example 1:

Input: s = "abcde", goal = "cdeab"
Output: true
   Example 2:

Input: s = "abcde", goal = "abced"
Output: false
