namespace CodeInterview;

public class StringPermutationOrNotSolutions
{
    
    public static bool PermutationOrNot(char[] stringA, char[] stringB)
    {
        int[] lookUpA = new int[128];
        
        int[] lookUpB = new int[128];
        
        int[] lookUpC = new int[128];
        
        //build lookup
        foreach (var i in lookUpA)
        {
            lookUpA[i] = 0;
        }
        foreach (var i in lookUpB)
        {
            lookUpB[i] = 0;
        }

        foreach (var t in stringA)
        {
            lookUpA[t] += 1;
        }
        foreach (var t in stringB)
        {
            lookUpB[t] += 1;
        }

        for(int i=0; i<128; i ++)
        {
            lookUpC[i] = Math.Abs(lookUpA[i] - lookUpB[i]);
        }

        foreach (var i in lookUpC)
        {
            if (i != 0)
                return false;
        }

        return true;

    }

    public static bool PermutationOrNot_2(char[] stringA, char[] stringB)
    {
        int[] lookup = new int[128];
        if (stringA.Length != stringB.Length)
            return false;
        else
        {
            foreach (var c in stringA)
            {
                lookup[c]++;
            }

            foreach (var c in stringB)
            {
                lookup[c]--;
                if (lookup[c] < 0)
                {
                    return false;
                }
            }

            return true;
        }
        
        
    }
}