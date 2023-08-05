#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<char> st, revSt;
        int n;
        cin >> n;
        while (n--)
        {
            char c;
            cin >> c;

            // YG
            if (st.empty())
            {
                st.push(c);
            }
            else
            {
                if (c == st.top())
                {
                    st.pop();
                }
                else
                {
                    if (c == 'R')
                    {
                        if (st.top() == 'G')
                        {
                            st.pop();
                            st.push('Y');
                        }
                        else if (st.top() == 'B')
                        {
                            st.pop();
                            st.push('P');
                        }
                        else
                        {
                            st.push(c);
                        }
                    }
                    else if (c == 'G')
                    {
                        if (st.top() == 'R')
                        {
                            st.pop();
                            st.push('Y');
                        }
                        else if (st.top() == 'B')
                        {
                            st.pop();
                            st.push('C');
                        }
                        else
                        {
                            st.push(c);
                        }
                    }
                    else if (c == 'B')
                    {
                        if (st.top() == 'R')
                        {
                            st.pop();
                            st.push('P');
                        }
                        else if (st.top() == 'G')
                        {
                            st.pop();
                            st.push('C');
                        }
                        else
                        {
                            st.push(c);
                        }
                    }
                }
            }
        }

        while (!st.empty())
        {
            if (revSt.empty())
            {
                revSt.push(st.top());
            }
            else if (revSt.top() == st.top())
            {
                revSt.pop();
            }
            else
            {
                revSt.push(st.top());
            }
            st.pop();
        }
        while (!revSt.empty())
        {
            cout << revSt.top();
            revSt.pop();
        }
        cout << endl;
    }
    return 0;
}