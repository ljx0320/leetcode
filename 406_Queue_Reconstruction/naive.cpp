class Solution {
public:
    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
        int min = 100;
        vector<int> min_pos;
        map <int,vector<int>> m;
        vector<pair<int, int>> ans;
        for (int i = 0; i < people.size(); i++) {
            if (m[people[i].first].size() == 0) {
                vector<int> v;
                v.push_back(people[i].second); 
                m[people[i].first] = v;
            }
            else {
                m[people[i].first].push_back(people[i].second);
            }
            
            if (min > people[i].first) {
                min = people[i].first;
            }
            ans.push_back(make_pair(-1,-1));
            
        }
        

        
        // rank from the shortest to the tallest
        
        // loop through all the map
        for (auto it = m.begin();it!=m.end();it++) {
            
            sort(it->second.begin(), it->second.end());
            
            // loop through all the people with the same height
            

            
            for (int i = 0; i < it->second.size(); i++) {
                int count_n1 = 0;
                int count_p = 0;
                int a = 0;
                for (int j = 0; j < ans.size();j++) {
                    
                    if (count_n1+count_p == it->second[i]) {
                        a = j;
                        break;
                    }
                    
                    
                    if (ans[j].second == -1) {
                        count_n1++;
                    }
                    if (ans[j].second != -1 && ans[j].first == it->first) {
                        count_p++;
                    }
                }
                
                
                while (ans[a].second != -1 && a < ans.size()) {
                    a ++;
                }
                
                ans[a] = make_pair(it->first,it->second[i]);
            }
        }
        
        
        
                
        
        
        return ans;    
    }
};
