ex00
int     main(void)
{
        char    lk1[] = "Ardoino";
        char    lk2[] = "ardoino";
        int     v;

        v = ft_strcmp(lk1, lk2);
        printf("%d\n", v);
}

ex01
int     main(void)
{
        char    tila[] = "togo";
        char    y2k[] = "Fire";
        int     va;

        va = ft_strncmp(tila, y2k, 3);
        printf("%d\n", va);
}

ex02
int     main(void)
{
        char    lk[] = "Sucesso ";
        char    ls[] = "Danke";

        printf("%s", ft_strcat(lk, ls));
}

ex03
int     main(void)
{
        char    mk[] = "The last Of";
        char    lk[] = "US";

        printf("%s", ft_strncat(mk, lk, 1));
}
