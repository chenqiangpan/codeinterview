using System;
using System.Collections.Generic;

namespace CodeInterview.DictionaryHashTable;

public class TwoSumSolutions
{
    public static int[] TwoSum(int[] nums, int target)
    {
        int arrayLength = nums.Length;

        Dictionary<int, int> resultDictionary = new();

        if (arrayLength < 2)
        {
            return Array.Empty<int>();
        }

        for (int i = 0; i < arrayLength; i++)
        {
            int firstNumber = nums[i];
            int secondNumber = target - firstNumber;

            if (resultDictionary.TryGetValue(secondNumber, out int index))
            {
                return new[]
                {
                    index,
                    i
                };
            }

            resultDictionary[firstNumber] = i;
        }

        return Array.Empty<int>();
    }
}