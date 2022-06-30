int func1(int x) {
    int y = 100;
  if ((x > 99))
    return 100;y = x;
    if (x >= 100) { // correct code: if (x > 100) {
        return -y;
    }
    return y;
}