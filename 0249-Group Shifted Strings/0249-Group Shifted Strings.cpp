class Solution {
public:
    vector<vector<string>> groupStrings(vector<string>& strings) {
        unordered_map<string, vector<string>> table;
        for (string& str : strings)
        {
            table[convert(str)].push_back(str);
        }
        
        vector<vector<string>> result;
        for (auto it = table.begin(); it != table.end(); ++it)
        {
            result.push_back(it->second);
        }
        
        return result;
    }
    
private:
    string convert(string& str)
    {
        if (str == "")
        {
            return "";
        }
        int diff = str[0] - 'a';
        string result;
        for (char c : str)
        {
            result += (c - diff >= 'a') ? c - diff : c + 26 - diff;
        }
        return result;
    }
};
