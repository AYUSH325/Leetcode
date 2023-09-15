using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string check_valid = "";
        for (char letter : s) {
            if ((int(letter) >= 65) && (int(letter) <= 90)) {
                check_valid += tolower(letter); 
            } else if ((int(letter) >= 97) && (int(letter) <= 122)) {
                check_valid += letter;
            } else if ((int(letter) >= 48) && (int(letter) <= 57)) {
                check_valid += letter;
            }
        }

        if (check_valid == "") {
            return true;
        }
        int front = 0;
        int back =  check_valid.length() - 1;

        while (front <= back) {
            if (check_valid[front] != check_valid[back]) {
                return false;
            }
            front++;
            back--;
        }
        return true;

    }
};