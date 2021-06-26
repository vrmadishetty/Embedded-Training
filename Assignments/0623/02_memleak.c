/* finding invalid pointer use with vlagrind */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char *cptr = malloc(10);
	cptr[10] = 'a';
	return 0;
}

#if 0
==57320== Memcheck, a memory error detector
==57320== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==57320== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==57320== Command: ./02
==57320== 
==57320== Invalid write of size 1
==57320==    at 0x10916B: main (02_memleak.c:9)
==57320==  Address 0x4a5304a is 0 bytes after a block of size 10 alloc'd
==57320==    at 0x483B7F3: malloc (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==57320==    by 0x10915E: main (02_memleak.c:8)
==57320== 
==57320== 
==57320== HEAP SUMMARY:
==57320==     in use at exit: 10 bytes in 1 blocks
==57320==   total heap usage: 1 allocs, 0 frees, 10 bytes allocated
==57320== 
==57320== 10 bytes in 1 blocks are definitely lost in loss record 1 of 1
==57320==    at 0x483B7F3: malloc (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==57320==    by 0x10915E: main (02_memleak.c:8)
==57320== 
==57320== LEAK SUMMARY:
==57320==    definitely lost: 10 bytes in 1 blocks
==57320==    indirectly lost: 0 bytes in 0 blocks
==57320==      possibly lost: 0 bytes in 0 blocks
==57320==    still reachable: 0 bytes in 0 blocks
==57320==         suppressed: 0 bytes in 0 blocks
==57320== 
==57320== For lists of detected and suppressed errors, rerun with: -s
==57320== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

#endif
