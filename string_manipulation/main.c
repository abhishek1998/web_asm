#include <emscripten/emscripten.h>
#include <stdio.h>

int EMSCRIPTEN_KEEPALIVE add(int a, int b) { return a + b; }

int main(int argc, char **argv) {
  printf(" loading asm modules ");
  // int result = add(120,239);
  // printf("%i \n", result);
  return 0;
}
