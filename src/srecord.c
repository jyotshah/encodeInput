//
// Created by jyotshah on 29/01/25.
//
#include "srecord.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static void byteToHex(unsigned char byte, char *hex) {
    const char *hexDigits = "0123456789ABCDEF";
    hex[0] = hexDigits[(byte >> 4) & 0x0F];
    hex[1] = hexDigits[byte & 0x0F];
}


