using CodeInterview;
using CodeInterview.DictionaryHashTable;


//Two sum test
int[] myint = { 1, 2, 3, 4 };

Console.WriteLine($"{TwoSumSolutions.TwoSum(myint, 7)[0]},  {TwoSumSolutions.TwoSum(myint, 7)[1]}");


// first non repeated letter test

var targetChar = FirstNonRepeatCharSolutions.FirstNonRepeatedLetter_2("aavvxccddee");

Console.WriteLine(targetChar != null ? $"Find target letter is {targetChar}. " : "all letters are repeated.");