int printf(const char* fmt, ...);

int global_init_var = 84;
int global_uninit_var;

void func1(int n) {
  printf("n = %d\n", n);
}

int main() {
  static int static_var = 85;
  static int static_var2;

  int a = 1;
  int b;

  func1(static_var + static_var2 + a + b);

  return 0;
}
