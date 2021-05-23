int exercise001(int n) {
    int s = 0;

    for (int i = 0; i < n + 1; i++) {
        s = s + i;
    }
    return s;
}

int exercise002(int n) {
    unsigned long long sum = 0;
    for (int i = 1; i < n + 1; i++) {
        sum = sum + i * i;
    }
    return sum;
}

double exercise003(int n) {
    double sum = 0;
    for (int i = 1; i < n + 1; i++) {
        sum = sum + 1.0 / i;
    }
    return sum;
}

double exercise004(int n) {
    double sum = 0;
    for (int i = 1; i < n + 1; i++) {
        sum = sum + 1.0 / (2.0 * i);
    }
    return sum;
}

double exercise005(int n) {
    double sum = 0;
    for (int i = 0; i < n + 1; i++) {
        sum = sum + 1.0 / (2 * i + 1);
    }
    return sum;
}

double exercise006(int n) {
    double sum;
    for (int i = 0; i < n + 1; i++) {
        sum = sum + 1.0 / (i * (i + 1));
    }
    return sum;
}

double exercise007(int n) {
    double sum;
    for (float i = 1; i < n + 1; i++) {
        sum = sum + i / (i + 1);
    }

    return sum;
}

double exercise008(int n) {
    double sum = 0;
    for (float i = 1; i < n + 1; i++) {
        sum = sum + (2 * i + 1) / (2 * i + 2);
    }

    return sum;
}

unsigned long long exercise009(int n) {
    unsigned long long product = 1;
    for (int i = 0; i < n + 1; i++) {
        product = product * i;
    }
    return product;

}

unsigned long long exercise010(int x, int n) {
    int base = x;
    int exponent = n;
//    in this case, we consider to calculate natural number power
//    For real number implementation, checkout internet
    unsigned long long answer = 1;
    for (int i = 1; i < exponent+1; ++i) {
        answer = answer*base;
    }
    return answer;
}


int exercise011(int n);

int exercise012(int n);

int exercise013(int n);

int exercise014(int n);

int exercise015(int n);

int exercise016(int n);

int exercise017(int n);

int exercise018(int n);

int exercise019(int n);

int exercise020(int n);