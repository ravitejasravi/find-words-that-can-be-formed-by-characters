class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        int len = 0, j;

        for(int i = 0; i < words.size(); i++) {
        
            string temp = chars;

            for(j = 0; j < words[i].length(); j++) {

                int index = temp.find(words[i][j]);
                if(index == -1)
                    break;
                temp.erase(index, 1);
                
            }
            
            if(j == words[i].length())
                len += words[i].length();   
        }

        return len;

    }
};