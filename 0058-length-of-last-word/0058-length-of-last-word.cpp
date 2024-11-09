class Solution {
public:
    int lengthOfLastWord(string s) {
        int counter = 0;
        int last_letter_idx = s.length()-1 ; 
        for( int i = s.length()-1; i >= 0; i--)
        {
            if(s[i] != ' ')
            {
                last_letter_idx = i; 
                break; 
            }
        }
        for( int i = last_letter_idx; i >= 0 ; i--)
        {
            if(s[i] == ' ')
            {
                return counter; 
            }
            counter++;
        }
        return counter;
    }
};