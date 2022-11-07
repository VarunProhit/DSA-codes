//Key Idea behind this solution.
//In case of 9669 we have to add 3 * 100 to get 9969
class Solution
{
    public:
        int maximum69Number(int num)
        {
            int x = num, index = 0, index6 = -1;	//index6 will store the index position of 6
            while (x > 0)
            {
                if (x % 10 == 6)
                {
                    index6 = index;
                }
                index++;
                x = x / 10;
            }
            if (index6 == -1)
                return num;
            else
                return (num + 3* pow(10, index6));	//converting 6 to 9,this can be done by Adding 3*equivalent place value
        }
};