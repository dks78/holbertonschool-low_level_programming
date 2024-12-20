char *_strncpy(char *dest, char *src, int n)
{
int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

    return (dest);
}
int main(void)
{
    char s1[98];
    char *ptr;
    int i;

    for (i = 0; i < 98 - 1; i++)
    {
        s1[i] = '*'; /* dans le tableau s1 remplie les cases par   * */
    }
    s1[i] = '\0';
    printf("%s\n", s1);


    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5); // 5 = remplace les 5 premiere case  du tableau par first F=0 
    printf("%s\n", s1);
    printf("%s\n", ptr);

    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
    printf("%s", s1);
    printf("%s", ptr);
    for (i = 0; i < 98; i++)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", s1[i]);
    }
    printf("\n");
    return (0);
}