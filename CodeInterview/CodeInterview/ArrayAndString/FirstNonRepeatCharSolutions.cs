namespace CodeInterview;

public static class FirstNonRepeatCharSolutions
{
    public static char? FirstNonRepeatedLetter(string inputString)

    {
        int stringLength = inputString.Length;

        Dictionary<char, int> lookUpDictionary = new(); // use int to track repeat letter

        for (int i = 0; i < stringLength; i++)
        {
            if (lookUpDictionary.ContainsKey(inputString[i]))
            {
                lookUpDictionary[inputString[i]] += 1;
            }
            else
            {
                lookUpDictionary.Add(inputString[i], 1);
            }
        }

        for (int i = 0; i < lookUpDictionary.Count; i++)
        {
            if (lookUpDictionary.Values.ElementAt(i) == 1)
            {
                return lookUpDictionary.Keys.ElementAt(i);
            }
        }

        return null;
    }


    public static char? FirstNonRepeatedLetter_2(string inputString)

    {
        int stringLength = inputString.Length;

        Dictionary<char, bool> lookUpDictionary = new(); // use boolean to track repeat letter

        for (int i = 0; i < stringLength; i++)
        {
            if (lookUpDictionary.ContainsKey(inputString[i]))
            {
                lookUpDictionary[inputString[i]] = true;
            }
            else
            {
                lookUpDictionary.Add(inputString[i], false);
            }
        }

        for (int i = 0; i < lookUpDictionary.Count; i++)
        {
            if (lookUpDictionary.Values.ElementAt(i) == false)
            {
                return lookUpDictionary.Keys.ElementAt(i);
            }
        }


        return null;
    }
}