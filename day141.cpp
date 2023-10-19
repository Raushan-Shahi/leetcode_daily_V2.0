

class Solution
{
public:
    bool stack_check(stack<char> st1, stack<char> st2)
    {
        if (st1.size() != st2.size())
        {
            return false;
        }

        while (st1.empty() == false || st2.empty() == false)
        {
            if (st1.top() != st2.top())
                return false;
            st1.pop();
            st2.pop();
        }
        return true;
    }

    bool backspaceCompare(string s, string t)
    {
        stack<char> st_s;
        stack<char> st_t;
        int n = s.size(), m = t.size();

        for (char i : s)
        {
            if (i == '#' && st_s.empty() == false)
            {
                st_s.pop();
            }
            else if (i == '#' && st_s.empty() == true)
            {
                continue;
            }
            else
            {
                st_s.push(i);
            }
        }
        for (char i : t)
        {
            if (i == '#' && st_t.empty() == false)
            {
                st_t.pop();
            }

            else if (i == '#' && st_t.empty() == true)
            {
                continue;
            }

            else
            {
                st_t.push(i);
            }
        }

        return stack_check(st_s, st_t);
    }
};