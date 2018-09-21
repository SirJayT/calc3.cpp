
#include <iostream>
#include <cmath>
using namespace std;


int main ()
{
    int numb, answer = 0;
    char operate;
    
    cin >> numb;
    
    while (cin >> operate)
    {
        if (operate == '+')
        {
            answer += numb;
            cin >> numb;
        }
        else if (operate == '-')
        {
            answer += numb;
            cin >> numb;
            numb = -numb;
        }
        else if (operate == '^')
        {
            if (numb < 0)
                numb = -pow(numb,2);
            else
                numb = pow(numb,2);
        }
        else if (operate == ';')
        {
            answer += numb;
            cout << answer << endl;
            answer = 0;
            cin >> numb;
        }
    }
    
    return 0;
}
