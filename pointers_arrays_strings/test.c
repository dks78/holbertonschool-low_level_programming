 while (s[i] == ' ') {
        i++;
    }
    while (s[i] == '+' || s[i] == '-') {
        if (s[i] == '-') {
            sign *= -1;
        }
        i++;
    }