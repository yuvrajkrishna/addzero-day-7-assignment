int isSelfDivide(int n) {

    int temp = n;

    while (temp > 0) {

        int digit = temp % 10;

        if (digit == 0 || n % digit != 0)
            return 0;

        temp /= 10;
    }

    return 1;
}