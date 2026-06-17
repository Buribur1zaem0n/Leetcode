//a sentence cosist of some words sperated by single spaces, and there are no extra spaces at the beginning or end of the sentence.
//you are giving a string array sentences, where sentences[i] represents a single sentence.
//return the maximum number of words in a single sentence. 

int mostWordsFound(char** sentences, int sentencesSize) 
{
    if (sentences == NULL || sentencesSize <= 0) return 0;
    int max_num = 0;
    for (int i = 0; i < sentencesSize;i++)
    {
        if (sentences[i] == NULL) continue;
        int space = 1;
        for (int j = 0; sentences[i][j] != '\0';j++)
        {
            if (sentences[i][j] == ' ')
            {
                space++;
            }
        }
        if (max_num < space)   
        {
            max_num = space;
        }
}
    return max_num;
}
