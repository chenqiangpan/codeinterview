namespace CodeInterview;

public class RemoveSpecificCharSolutions
{
    
    public static char[] RemoveSpecificChars(char[] inputString, char[] removeString)
    {
        int[] lookup = new int[128];

        char[] desString = new char[inputString.Length];

        //build lookup
        for (int i = 0; i < removeString.Length; i++)
        {
            lookup[removeString[i]] = 1;
        }

        int desIndex = 0;

        for (int i = 0; i < inputString.Length; i++)
        {
            int x = inputString[i];
            int index = lookup[x];

            if (lookup[inputString[i]]==0)
            {
                desString[desIndex] = inputString[i];
                inputString[i] = '\0';
                inputString[desIndex] = desString[desIndex];
                desIndex++;
            }
            else if (lookup[inputString[i]] == 1)
            {
                inputString[i] = '\0';
            }
        }

        return inputString;
    }
}