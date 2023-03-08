#ifndef KINETIC_CLI_OUTLINE_H
#define KINETIC_CLI_OUTLINE_H

#include <stdlib.h>

/**
 * @brief Get the command that should trigger the extension.
 * @param name outputs the name.
 * @param name_length outputs the length of the name.
 */
void get_extension_command(char *name, size_t *name_length);

/**
 * @brief Run the command.
 * @param argc pass-through of the main function's argc
 * @param argv pass-through of the main function's argv
 * @return success value gets passed through and returned in the cli application
 */
int run(int argc, char **argv);

#endif // KINETIC_CLI_OUTLINE_H
