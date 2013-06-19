package main

import "fmt"

/*
#include "callback.h"
*/
import "C"

//export iz
func iz() {
  fmt.Println("Go: iz")
}

func main() {
  fmt.Println("Go: main")
  C.registerIt(C.foo())
}
