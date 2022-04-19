#include <string>;

class SubSetOfString
{

private:
    string S;
    vector<string> ans;

public:
    SubSetOfString(string _s)
    {
        S = _s;
        ans.clear();
    }

    vector<string> FindSubset()
    {
        _findSubset(0, "");
        return ans;
    }
    void _findSubset(int i, string curr)
    {
        if (i >= S.size())
        {
            ans.push_back(curr);
            return;
        }
        _findSubset(i + 1, curr);
        _findSubset(i + 1, curr + S[i]);
    }

    void SetString(string _s)
    {
        S = _s;
        ans.clear();
    }
};