ex00
int     main()
{
        char    time[50];
        char    halo[] = "this my way";

        ft_strcnpy(time, halo);
        printf("%s", time);
}

ex01
int     main()
{
        char    lst[12] = "Enstudigug";
        char    plt[12];

        printf("%s\n", ft_strncpy(plt, lst, 12));
        return (0);
}


ex02
int     main(void)
{
        char    car[] = "Hgnarok";
        char    bmw[] = "";
        char    vw[] = "55";

        printf("%d\n", ft_str_is_alpha(car));
        printf("%d\n", ft_str_is_alpha(bmw));
        printf("%d\n", ft_str_is_alpha(vw));
}

ex03
int     main(void)
{
        char    apollo1[] = "enstchuligung";
        char    apollo2[] = "75";
        char    apollo3[] = "";

        printf("%d\n", ft_str_is_numeric(apollo1));
        printf("%d\n", ft_str_is_numeric(apollo2));
        printf("%d\n", ft_str_is_numeric(apollo3));
}

ex04
int     main(void)
{
        char    var1[] = "viele gut";
        char    var2[] = "";
        char    var3[] = "nice";
        printf("%d\n", ft_str_is_lowercase(var1));
        printf("%d\n", ft_str_is_lowercase(var2));
        printf("%d\n", ft_str_is_lowercase(var3));
}

ex05
int     main(void)
{
        char    eyes1[] = "";
        char    eyes2[] = "TRASH";
        char    eyes3[] = "hseyy";

        printf("%d\n", ft_str_is_uppercase(eyes1));
        printf("%d\n", ft_str_is_uppercase(eyes2));
        printf("%d\n", ft_str_is_uppercase(eyes3));
}

ex06
int     main(void)
{
        char    gpt1[] = "";
        char    gpt2[] = "\n";
        char    gpt3[] = "&#$%";

        printf("%d\n", ft_str_is_printable(gpt1));
        printf("%d\n", ft_str_is_printable(gpt2));
        printf("%d\n", ft_str_is_printable(gpt3));
}

ex07
int     main(void)
{
        char    mk1[] = "vieleDaneke";

        printf("%s", ft_strupcase(mk1));
        return (0);
}

ex08
int     main(void)
{
        char    mk1[] = "VIELEDANKE";

        printf("%s", ft_strupcase(mk1));
        return (0);
}

