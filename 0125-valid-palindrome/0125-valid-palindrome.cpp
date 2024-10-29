class Solution {
public:
    bool isPalindrome(string s) {
        string alph = "";   
        //remove non-alphanumeric char
        for(int i = 0; i < s.size(); i++)
        {
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z' ) || (s[i] >= '0' && s[i] <= '9'))
            {
                if( s[i] >= 'A' && s[i] <= 'Z' )
                {
                    s[i] = s[i] + ('a' -'A'); 
                }
                alph += s[i]; 
            }
        }
        
        for(int low = 0, high = alph.size()-1; low < high ; low++, high--)
        {
            if( (alph[low] != alph[high]))
            {
                return false; 
            }
        }
        return true; 
    }
};