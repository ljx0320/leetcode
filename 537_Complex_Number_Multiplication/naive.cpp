class Solution {
public:
    string complexNumberMultiply(string a, string b) {
        int found_a = int(a.find("+"));
        int found_b = int(b.find("+"));
        
        int a_1 = 0;
        int a_2 = 0;
        int b_1 = 0;
        int b_2 = 0;
        
        string a_real(a.begin(),a.begin()+found_a);
        string a_complex(a.begin()+found_a+1, a.end()-1);
        
        string b_real(b.begin(),b.begin()+found_b);
        string b_complex(b.begin()+found_b+1, b.end()-1);
        
        
        //cout << a_complex;
        if (a_real.at(0) == '-') {
            string a_real_negative(a_real.begin()+1,a_real.begin()+found_a);
            //cout << a_real_negative;
            a_1 = 0 - stoi(a_real_negative);
        }
        else {
        
           a_1 = stoi(a_real); 
        }
        
        if (a_complex[0]== '-') {
            string a_complex_negative(a_complex.begin()+1,a_complex.end());
            //cout << a_complex_negative;
            a_2 = 0 - stoi(a_complex_negative);
        }
        else {
            a_2 = stoi(a_complex);
        }
        
        if (b_real[0] == '-') {
            string b_real_negative(b_real.begin()+1,b_real.begin()+found_b);
            b_1 = 0 - stoi(b_real_negative);
        }
        else {
           b_1 = stoi(b_real); 
        }
        
        if (b_complex[0]=='-') {
            string b_complex_negative(b_complex.begin()+1,b_complex.end());
            b_2 = 0 - stoi(b_complex_negative);
        }
        else {
            b_2 = stoi(b_complex);
        }
        
        
        int o_1 = a_1*b_1-a_2*b_2;
        int o_2 = a_1*b_2+a_2*b_1;
        
        //cout << o_1 << "+" << o_2 << "i";
        string output = to_string(o_1) + "+" + to_string(o_2) + "i";
        return output;
    }
};
