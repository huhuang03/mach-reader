//
// Created by hwf on 2023/7/19.
//
#include <iostream>
#include <string>
#include <reader_util/reader_util.h>

static void read(std::string filePath) {
  reader_util::FileReader fr(filePath);
  char magic[4];
  fr.read(magic, 4);
  reader_util::printAsHex(magic, 4, "");
}

int main() {
// direct do the test
  read("../tests/for_test_projects/hello/runtime/hello.A.dylib");

  return 0;
}