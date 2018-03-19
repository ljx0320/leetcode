class Solution {
public:
    int numJewelsInStones(string J, string S) {
        // Know the difference between set and unordered_set
        // Know to use some functions of set and unordered_set
        // Such as constructor and count

        unordered_set <char> s(J.begin(), J.end());
        int count = 0;
        for (int i = 0; i < S.length(); i++) {
            count += s.count(S[i]);
        }
        return count;

    }
};