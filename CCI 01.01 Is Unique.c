//implement an algorithm to determine if all characters in string s are unique
bool isUnique(char* astr) {
    char asc[128] = { 0 };
    for(int i = 0;astr[i] != '\0';i++)
    {
        asc[astr[i]]++;
    if (asc[astr[i]] > 1)   
    {
    return false;
    }
    }
    return true;
}
