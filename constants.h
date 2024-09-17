#ifndef CONSTANTS_HEADER
#define CONSTANTS_HEADER

#define handle(str)                                                            \
  do {                                                                         \
    perror(str);                                                               \
    exit(EXIT_FAILURE);                                                        \
  } while (0)

#define CAPACITY 256

#endif