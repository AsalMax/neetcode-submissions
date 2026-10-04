class Solution {
public:
    bool isAnagram(string s, string t) {
        int count = 0;
      if(s.size() >= t.size()){
        for(size_t i = 0; i < s.size(); i++){
            for(size_t j = 0; j <t.size(); j++){
                if(s[i] == t[j]){
                    count++;
                    t.erase(j,1);
                    break;
                }
            }
        }
      }
      else{
        for(size_t i = 0; i < t.size(); i++){
            for(size_t j = 0; j <s.size(); j++){
                if(t[i] == s[j]){
                    count++;
                    s.erase(j,1);
                    break;
                }
            }
        }
      }
        if(count == s.size()){
            return true;
        }
        return false;
    }
};
