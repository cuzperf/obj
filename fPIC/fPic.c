static int static_a = 3;
extern int extern_b;
extern void ext();

static void bar() {
  static_a = 1;
  extern_b = 2;
}

void foo() {
  bar();
  ext();
}
