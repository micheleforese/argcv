#ifndef ARGCV_H_
#define ARGCV_H_

#define DEBUG_TAB "  "

typedef struct {
  const char *name;
  const char *short_help;
  const char *long_help;
} argcv_argument;

void argcv_argument_init(argcv_argument *argument,
                         const char *name,
                         const char *short_help,
                         const char *long_help);
void argcv_argument_print(argcv_argument *argument);

typedef struct {
  const char *name;
  const char *short_help;
  const char *long_help;
  argcv_argument *arguments[];
} argcv_program;

void argcv_program_init(argcv_program *program,
                        const char *name,
                        const char *short_help,
                        const char *long_help);
void argcv_program_print(argcv_program *program);

void argcv_parse(int argc, const char *argv[]);

#endif  // ARGCV_H_