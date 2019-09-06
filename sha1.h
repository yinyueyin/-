#ifndef _SHA1_H_
#define _SHA1_H_
#include <stdint.h>

static void sha1_pad(unsigned char *input, int len);
static void sha1_prepare(void);
static void sha1_calc(void);
unsigned long* sha1(void* input, int len);
 
#endif
