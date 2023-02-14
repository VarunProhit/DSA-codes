class Solution
{
    public:
        string addBinary(string a, string b)
        {
            string ans;
            int cn = 0;
            int i = a.size() - 1, j = b.size() - 1;
            while (i >= 0 && j >= 0)
            {
                if (a[i] == '1' && b[j] == '1')
                {//cout<<"f";
                    if (cn)
                    {
                        ans += '1';
                    }
                    else ans += '0';
                    cn = 1;
                }
                else if (a[i] == '1' || b[j] == '1')
                {//cout<<"s";
                    if (cn)
                    {
                        ans += '0';
                        cn = 1;
                    }
                    else
                    {
                        ans += '1';
                        cn = 0;
                    }
                }
                else if (a[i] == '0' && b[j] == '0')
                {//cout<<"l";
                    if (cn)
                    {
                        ans += '1';
                    }
                    else ans += '0';
                    cn=0;
                }
               // cout<<cn<<" ";
                i--;
                j--;
            }
            while (i >= 0)
            {
                if (a[i] == '1')
                {
                    if (cn) ans += '0';
                    else
                    {
                        ans += '1';
                        cn = 0;
                    }
                }
                else
                {
                    if (cn)
                    {
                        ans += '1';
                        cn = 0;
                    }
                    else
                    {
                        ans += '0';
                        cn = 0;
                    }
                }
                i--;
            }
            while (j >= 0)
            {
                if (b[j] == '1')
                {
                    if (cn) ans += '0';
                    else
                    {
                        ans += '1';
                        cn = 0;
                    }
                }
                else
                {
                    if (cn)
                    {
                        ans += '1';
                        cn = 0;
                    }
                    else
                    {
                        ans += '0';
                        cn = 0;
                    }
                }
                j--;
            }
            if(cn)ans+='1';
            reverse(ans.begin(), ans.end());
            return ans;
        }
};