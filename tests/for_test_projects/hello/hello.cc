//
// Created by hwf on 2023/7/19.
//
#include <stdio.h>
#include "hello.h"

#define EXPORT __attribute__((visibility("default")))

EXPORT
void hello() {
  printf("hello from helloWorld\n");
}
