using System;
using System.Collections.Generic;
using System.Text;

namespace CSharpSolutions;

public class LinkedListTest
{
    public static void LinkedListInternalTest()
    {
        string[] words = { "code", "math", "literature", "music", "craft", "dance" };

        LinkedList<string> sentence = new LinkedList<string>(words);

        Display(sentence, "the linked list value is ");


        //add first
        sentence.AddFirst("design");
        Display(sentence, "after add first: ");

        //add last
        sentence.AddLast("stastic");
        Display(sentence, "add last, now is: ");

        //remove last
        sentence.RemoveLast();
        Display(sentence, "removed last, now is: ");

        //move first to last
        LinkedListNode<string> mark1 = sentence.First;
        sentence.RemoveFirst();
        sentence.AddLast(mark1);
        Display(sentence, "move first to last:  ");
        
        //insert
        LinkedListNode<string> current = sentence.Find("music");

        sentence.AddAfter(current, "keyboard");
        sentence.AddBefore(current, "drum");
        Display(sentence,"insert keyboard after music");

        
        //insert two more

        sentence.AddAfter(current, "1");
        sentence.AddAfter(current, "2");
        Display(sentence,"insert 1, 2 after music");
        

        static void Display(LinkedList<string> words, string test)
        {
            Console.WriteLine(test);
            foreach (var word in words)
            {
                Console.WriteLine(word + " ");
            }

            Console.WriteLine();
            Console.WriteLine();
        }
    }
}