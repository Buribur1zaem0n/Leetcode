//give a string s and a character letter, return thepercentage of character in s that equal letter rounded down to the nearest whole percent.
int percentageLetter(char* s, char letter) 
{
    if (s == NULL || s[0] == '\0') return 0;
    int count = 0;
    int i = 0;
for ( i = 0;s[i] != '\0';i++)
{
    if (s[i] == letter) count++;
}
return  100 * count / i;
}
