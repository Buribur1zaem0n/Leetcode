//give a valid IP4 address, return a defang version of that IP address.
//a defanged IP address replaces every period '.' with '[.]'

char* defangIPaddr(const char* address) 
{
    if (address == NULL) return NULL;
    size_t len = strlen(address);
    size_t max_len = len * 3 + 1;

    char* address_new = (char*)malloc(max_len);
    if (address_new == NULL) return NULL;

    int j = 0;
    for (int i = 0; address[i] != '\0'; i++) 
    {
        if (address[i] == '.') 
        {
            address_new[j++] = '[';
            address_new[j++] = '.';
            address_new[j++] = ']';
        } 
        else 
        {
            address_new[j++] = address[i];
        }
    }
    address_new[j] = '\0'; 
    return address_new;
}
