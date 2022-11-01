using System;
using System.Collections.Generic;

namespace CSharpSolutions;

public class LinkedListRemoveRepeat
{
    public static void LinkedListRemovedRepeatSolution(LinkedList<string> list)
    {
        HashSet<string> lookUp = new HashSet<string>();

        foreach (var word in list)
        {
            if (lookUp.Contains(word))
            {
                continue;
            }
            else
            {
                lookUp.Add(word);
            }
        }

        lookUp.Clear();

        LinkedList<string> newList = new LinkedList<string>(lookUp);

        Display(newList);
    }
    
    static void Display(LinkedList<string> words)
    {
        foreach (var word in words)
        {
            Console.WriteLine(word + " ");
        }

    }
}