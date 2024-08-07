#include <iostream>
#include <vector>

using namespace std;

// User Defined Functions....
int SplitWays(vector<int> S, int prmDay, int prmMonth)
{
    int Count = 0;
    for (int i = 0; i <= S.size() - prmMonth; i++)
    {
        int Sum = 0;
        for(int j = i; j < i + prmMonth; j++)
        {
            Sum += S[j];
        }
        if(Sum == prmDay) Count++;
    }
    return Count;
}

int main()
{
    int Num, Day, Month;

    cin >> Num;
    if (Num < 0 || Num >= 100)
    {
        return -1;
    }
    vector<int> S(Num);

    for (int i = 0; i < Num; i++)
    {
        cin >> S[i];
        if (S[i] < 0 || S[i] > 5)
        {
            return -1;
        }
    }

    cin >> Day;
    if (Day < 1 || Day > 31)
    {
        return -1;
    }

    cin >> Month;
    if (Month < 1 || Month > 12)
    {
        return -1;
    }

    cout << SplitWays(S, Day, Month);

    return 0;
}