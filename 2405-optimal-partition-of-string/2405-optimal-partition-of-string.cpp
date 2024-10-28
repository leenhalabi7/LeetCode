class Solution {
public:
    int partitionString(string s) {
        //histogram for the 26 letters in English
        int hist[26] = {0}; 
        int counter = 1; 
        //if encounter a letter we want to put '1' in the cell that matches the letter
        for( int i = 0; i < s.size(); i++ )
        {
            if(hist[s[i] - 'a'] != 0) //new substring
            {
                counter++;
                for( int j = 0; j < 26; j++)
                {
                        hist[j] = 0; 
                }
            }
            hist[s[i] - 'a']++; 
        }
        return counter; 
    }
};