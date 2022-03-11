int func1(int x) {
    int y = 100;
    y = x;
    if (x == 10) {
        return -y;
    }
    if (x == 20) {
        return -y;
    }
    if (x == 30) {
        return -y;
    }
    if (x == 40) {
        return -y;
    }
    if (x == 50) {
        return -y;
    }
    if (x >= 100) { // correct code: if (x > 100) {
        return -y;
    }
    return y;
}