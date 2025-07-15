using System;
using System.Collections.Generic;

namespace RomanConverter
{
    /// <summary>
    /// This class provides a method to convert a Roman numeral string to its integer value.
    /// </summary>
    public class Solution
    {
        public int RomanToInt(string s)
        {
            int val = 0;    // a variable to hold the total

            // constants in the dictionary
            Dictionary<char, int> dict = new Dictionary<char, int>()
            {
                {'I', 1},
                {'V', 5},
                {'X', 10},
                {'L', 50},
                {'C', 100},
                {'D', 500},
                {'M', 1000},
            };

            for (int i = 0; i < s.Length; i++)
            {
                // if the next one is greater than the previous one
                if (i + 1 < s.Length && dict[s[i]] < dict[s[i + 1]])
                {
                    val -= dict[s[i]];
                }
                // if the next one is smaller than the previous one
                else
                {
                    val += dict[s[i]];
                }
            }
            // return the result
            return val;
        }
    }
}
