using namespace std;
class Solution {
    public:
        string reverseWords(string s) {
            vector<string> answer;
            string out = "";
            string word = "";

            for (int i = 0; i < s.length(); ++i) {
                while ((s[i] != ' ') && (i < s.length())) {
                    word = word + s[i];
                    i++;
                }
                if (word != "") {
                    answer.push_back(word);
                }
                word = "";
            }

            for (int i = answer.size() - 1; i >= 0;  --i) {
                out += answer[i];
                if (i != 0) {
                    out += ' ';
                }
            }

            return out;
        }
       
};
