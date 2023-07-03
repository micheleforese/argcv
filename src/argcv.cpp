#include "argcv/argcv.hpp"

#include <stdio.h>

void argcv_argument_init(argcv_argument *argument,
                         const char *name,
                         const char *short_help,
                         const char *long_help) {
  (*argument).name = name;
  (*argument).short_help = short_help;
  (*argument).long_help = long_help;
}
void argcv_argument_print(argcv_argument *argument) {
  printf("argcv_argument: [\n");
  printf("%sname: %s\n", DEBUG_TAB, argument->name);
  printf("%sshort_help: %s\n", DEBUG_TAB, argument->short_help);
  printf("%slong_help: %s\n", DEBUG_TAB, argument->long_help);
  printf("]\n");
}

void argcv_program_init(argcv_program *program,
                        const char *name,
                        const char *short_help,
                        const char *long_help) {
  (*program).name = name;
  (*program).short_help = short_help;
  (*program).long_help = long_help;
}

void argcv_program_print(argcv_program *program) {
  printf("argcv_program %s: [\n", program->name);
  printf("%sname: %s\n", DEBUG_TAB, program->name);
  printf("%sshort_help: %s\n", DEBUG_TAB, program->short_help);
  printf("%slong_help: %s\n", DEBUG_TAB, program->long_help);
  printf("]\n");
}

void argcv_parse(int argc, const char *argv[]) {
  for (int i = 0; i < argc; i++) {
    printf("i: %d, %s\n", i, argv[i]);
  }
}