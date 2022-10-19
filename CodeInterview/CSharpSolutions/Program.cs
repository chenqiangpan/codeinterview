using System;
using CodeInterview;
using CodeInterview.DictionaryHashTable;

/*
//Two sum test
int[] myint = { 1, 2, 3, 4 };

Console.WriteLine($"{TwoSumSolutions.TwoSum(myint, 7)[0]},  {TwoSumSolutions.TwoSum(myint, 7)[1]}");


// first non repeated letter test

var targetChar = FirstNonRepeatCharSolutions.FirstNonRepeatedLetter_2("aavvxccddee");

Console.WriteLine(targetChar != null ? $"Find target letter is {targetChar}. " : "all letters are repeated.");



// unique string test

Console.WriteLine("Write a string: ");
string myString = Console.ReadLine();
Console.WriteLine(StringIsUniqueSolutions.StringIsUnique(myString) ? $"The char in this string are all unique. " : "The char in this string is not all unique"); 


// remove chars from a string
Console.WriteLine("Write a string: ");
char[] firstString = Console.ReadLine().ToCharArray();
Console.WriteLine("Write another string to be removed from the first string: ");
char[] toRemoveChars = Console.ReadLine().ToCharArray();

string s = new string(RemoveSpecificCharSolutions.RemoveSpecificChars(firstString, toRemoveChars));
Console.WriteLine($"The new string is {s}"); 

// remove chars from a string
Console.WriteLine("Write first string: ");
char[] stringA = Console.ReadLine().ToCharArray();
Console.WriteLine("Write second string: ");
char[] stringB = Console.ReadLine().ToCharArray();

Console.WriteLine(StringPermutationOrNotSolutions.PermutationOrNot_2(stringA,stringB) ? "Those two strings are permutation." : "Those two strings are not permutation.");


*/
    
    
// reverse words
Console.WriteLine("Write a string: ");
char[] stringO = Console.ReadLine().ToCharArray();

string s = new string(ReverseWordsSolutions.ReverseWords_2(stringO));
Console.WriteLine("the reversed string is :" + s);