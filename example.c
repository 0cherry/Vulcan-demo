int func1(int x) {
    int y = 100;
    y = x;
    if (x >= 100) { // correct code: if (x > 100) {
        if (!(y != 200))
    return -y;
    }
    return y;
}
