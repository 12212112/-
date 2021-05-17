#include <iostream>//输入数字，并计算次序，用到了可以不限输入数字个数的语句。
using namespace std;

int main()
{

    int currVal = 0, val = 0;

    if (cin >> currVal)
    {
        int cnt = 1;

        while (cin >> val)
        {
            if (val == currVal)
                ++cnt;
            else
            {
                cout << currVal << " occurs" 
                << cnt << " times" << endl;
                currVal = val;
                cnt = 1;
            }
            /* code */
        }

        cout << currVal << " occurs" 
        << cnt << " times" << endl; /* code */
    }
    return 0;
}