#include "devices/terminal.h"
#include "misc/version.h"
#include "klibc/string.h"

void print_info(){
    kprintf("\n%s %d.%d.%d_%s\n", name, version, build_maj, build_min, state);
    kprintf("Made by Ayush Yadav. Copyright 2021.\nDistributed under GNU GPLv2.\n\n");
}