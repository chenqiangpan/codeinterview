using System.Collections.Generic;

namespace CodeInterview;

public class StringIsUniqueSolutions
{
    
    public static bool StringIsUnique(string inputString)
    {
        int stringLength = inputString.Length;

        int repeatAmount = 0;

        Dictionary<char, bool> lookupDic = new();

        for (int i = 0; i < stringLength; i++)
        {
            if (lookupDic.ContainsKey(inputString[i]))
            {
                lookupDic[inputString[i]] = true;
            }
            else
            {
                lookupDic[inputString[i]] = false;
            }
        }

        foreach (var kvp in lookupDic)
        {
            if (!kvp.Value)
            {
                repeatAmount += 1;
            }
        }

        if (repeatAmount == lookupDic.Count)
            return true;
        else
        {
            return false;
        }
    }


    public static bool StringIsUnique_2(string inputString)

    {
        int stringLength = inputString.Length;

        if (stringLength > 128) return false;

        bool[] char_set = new bool[128];

        for (int i = 0; i < stringLength; i++)
        {
            int val = inputString[i];

            if (char_set[val])
            {
                return false;
            }

            char_set[val] = true;
        }

        return true;
    }
}