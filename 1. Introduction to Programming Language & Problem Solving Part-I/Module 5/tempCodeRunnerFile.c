int a, b;
    scanf("%d %d", &a, &b);
    if ((a >= b && a % b == 0) || (a < b && b % a == 0))
    {
        printf("Multiples");
    }
    else
    {
        printf("No Multiples");
    }
    return 0;