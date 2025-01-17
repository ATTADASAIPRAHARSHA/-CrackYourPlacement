class Solution {
public:
    bool isValid(string s) {
        int si = s.length();
        stack<char> st;
        for (int i = 0; i < si; i++) {
            char c = s[i];
            if (c == '(' || c == '{' || c == '[')
                st.push(c);
            else if (c == ')') {
                if (st.empty() || st.top() != '(')
                    return false;
                else
                    st.pop();
            } else if (c == ']') {
                if (st.empty() || st.top() != '[')
                    return false;
                else
                    st.pop();
            } else if (c == '}') {
                if (st.empty() || st.top() != '{')
                    return false;
                else
                    st.pop();
            }
        }
        return st.empty();
    }
};
