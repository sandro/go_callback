#include <stdio.h>
/* #include "callback.h" */
#include "_cgo_export.h"

void myCallback() {
  puts("C: myCallback");
  iz();
}

void registerIt(fcallback callback) {
  puts("C: registerIt");
  callback();
}

fcallback foo() {
  puts("C: foo");
  return myCallback;
}

/* int main() { */
/*   puts("C: main"); */
/*   registerIt(foo()); */
/* } */
