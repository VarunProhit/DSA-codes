class Solution
{
  void permutation (string s, string output, int i, vector < string > &ans)
  {
    //base case
    if (s.length () == i)
      {
	ans.push_back (output);
	return;
      }

    if (isdigit (s[i]))
      {
     output.push_back (s[i]);
	permutation (s, output, i + 1, ans);
      }
    else
      {
	output.push_back (s[i]);
	permutation (s, output, i + 1, ans);
	output.pop_back ();
	
	char a = s[i];
	if (islower (a))
	  {
	    output.push_back (toupper (s[i]));
	    permutation (s, output, i + 1, ans);
	  }
	else
	  {
	    char b = s[i];
	    output.push_back (tolower (s[i]));
	    permutation (s, output, i + 1, ans);
  }
  }
  }
public:
  vector < string > letterCasePermutation (string s)
  {
    vector < string > ans;
    string output = "";
    int i = 0;
    permutation (s, output, i, ans);
    return ans;
  }
};