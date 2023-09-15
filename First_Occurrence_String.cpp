using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if ((needle == " ") || (haystack == " ") || (needle.length() > haystack.length())){
            return -1;
        }
        char first_letter = needle[0];
        //first occurrance
        int fo = 0;
        int traverse = 0;
        while ((abs(fo) < haystack.length()) && (traverse < haystack.length())) {
            // cout << "1 " << fo << endl;
            // cout << "traverse " << traverse << endl;
            // cout << haystack[traverse] << " == " << first_letter << endl;
            if (haystack[traverse] == first_letter){
                int temp_traverse = traverse;
                fo = traverse;
                for (int i = 0; i < needle.length(); ++i){
                    if (haystack[temp_traverse] != needle[i]){
                        fo = -1;
                        break;
                    }
                    temp_traverse++;
                }
                if (fo != -1){
                    return fo;
                } else {
                    traverse = traverse + 1;
                    // cout << "2 " << fo << endl;
                }
            } else {
                traverse++;
            }
           
        }
        // cout << (fo < haystack.length()) << endl;
        // cout << haystack.length() << " fo " << fo << " traverse " << traverse << endl;
        return -1;
    }
};