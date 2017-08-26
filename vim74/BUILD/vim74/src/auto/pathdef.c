/* pathdef.c */
/* This file is automatically created by Makefile
 * DO NOT EDIT!  Change Makefile only. */
#include "vim.h"
char_u *default_vim_dir = (char_u *)"/etc";
char_u *default_vimruntime_dir = (char_u *)"/usr/share/vim/vim74";
char_u *all_cflags = (char_u *)"gcc -c -I. -Iproto -DHAVE_CONFIG_H     -O2 -g -pipe -Wall -fexceptions -fstack-protector-strong --param=ssp-buffer-size=4 -grecord-gcc-switches   -m64 -mtune=generic -D_GNU_SOURCE -D_FILE_OFFSET_BITS=64 -U_FORTIFY_SOURCE -D_FORTIFY_SOURCE=1      ";
char_u *all_lflags = (char_u *)"gcc   -Wl,-z,relro  -L/usr/local/lib -Wl,--as-needed -o vim        -lm  -lselinux -lncurses -lacl -lattr -ldl          ";
char_u *compiled_user = (char_u *)"<bugzilla@redhat.com>";
char_u *compiled_sys = (char_u *)"";
