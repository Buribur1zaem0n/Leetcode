//givr an integer x, return true if x is a palindrome integer, and return false otherwise.
bool isPalindrome(int x) 
{
if (x < 0 || x % 10 == 0 && x != 0)
{
    return false;
}
int reverse_half = 0;
 while (x > reverse_half)
 {
    reverse_half = reverse_half * 10 + x % 10;
    x /= 10;
 }
 return (reverse_half == x || reverse_half / 10 == x) ;
}
