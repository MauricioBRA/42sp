ex01:
int     main()
{
        int     one;

        one = 0;
        int     *pol1 = &one;
        int     **pol2 = &pol1;
        int     ***pol3 = &pol2;
        int     ****pol4 = &pol3;
        int     *****pol5 = &pol4;
        int     ******pol6 = &pol5;
        int     *******pol7 = &pol6;
        int     ********pol8 = &pol7;
        int     *********pol9 = &pol8;  
        ft_ultimate_ft(pol9);
        printf("%d", one);
}

ex02:
int     main()
{
        int     f;
        int     j;

        f = 52;
        j = 18;
        printf("valores originais:\n f = %d, j = %d", f, j);
        ft_swap(&f, &j);
        printf("\nObserve a troca dos valores:\n f = %d, j = %d", f, j);
}

ex03:


ex04:
int     main()
{
        int     car1;
        int     car2;

        car1 = 8;
        car2 = 5;
        ft_ultimate_div_mod(&car1, &car2);
        printf("Os valores de A e B, será o resultado da divisão e resto:\n Div = %d\n mod = %d", car1, car2);
}

ex05:
int     main(void)
{
        char    wolf[] = "baby";

        ft_putstr(wolf);
        return (0);
}

ex06:
int     main(void)
{
        int     resul;

        resul = ft_strlen("XABLAUstrike");
        printf("%d", resul);
        return (0);
}

