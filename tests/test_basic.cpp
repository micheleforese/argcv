#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "argcv/argcv.hpp"

int main(int argc, const char *argv[]) {
  argcv_parse(argc, argv);

  argcv_program prog;
  argcv_argument arg;

  argcv_program_init(
      &prog,
      "programma",
      "short description",
      "This is a long description\nof the app\nthat we are gone use.");
  argcv_argument_init(&arg,
                      "HOME",
                      "Home of the program",
                      "This is the Home Path of the program.");

  argcv_program_print(&prog);
  argcv_argument_print(&arg);

  return 0;
}
