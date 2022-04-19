#include <bits/stdc++.h>

class Josephus
{

private:
    int numberofPeople;
    int killed;

public:
    Josephus(int _numberofPeople, int _killed)
    {
        numberOfDisc = _numberofPeople;
        killed = _killed;
    }

    int FindAns();
    {
        _findans(numberofPeople);
    }
    int _findans(int n)
    {
        if (n == 1)
            return 0;
        return (_findans(n - 1) + killed) % numberofPeople;
    }
};