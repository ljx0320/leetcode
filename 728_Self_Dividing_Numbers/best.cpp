class Solution {
public:
    vector<int> selfDividingNumbers(int l, int r) {
        vector<int> v;
        for (int i = l; i <= r; ++i) {
            int j= i;
            bool ok = 1;
            while (j) {
                int d= (j%10);
                if (d == 0 || i % d) ok = 0;
                j/=10;
            }
            if (ok) v.push_back(i);
        }
        
        return v;
    }
};
