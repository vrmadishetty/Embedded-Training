/* memleak using valgrind tool*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char *cptr;

	cptr = (char *)malloc(19);
	cptr = (char *)malloc(12);

	free(cptr);

	cptr = (char *)malloc(16);

	return 0;
}

#if 0

==57491== Memcheck, a memory error detector
==57491== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==57491== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==57491== Command: ./03
==57491==
==57491==
==57491== HEAP SUMMARY:
==57491==     in use at exit: 35 bytes in 2 blocks
==57491==   total heap usage: 3 allocs, 1 frees, 47 bytes allocated
==57491==
==57491== 16 bytes in 1 blocks are definitely lost in loss record 1 of 2
==57491==    at 0x483B7F3: malloc (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==57491==    by 0x1091A6: main (03_memleak.c:15)
==57491==
==57491== 19 bytes in 1 blocks are definitely lost in loss record 2 of 2
==57491==    at 0x483B7F3: malloc (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==57491==    by 0x10917E: main (03_memleak.c:10)
==57491==
==57491== LEAK SUMMARY:
==57491==    definitely lost: 35 bytes in 2 blocks
==57491==    indirectly lost: 0 bytes in 0 blocks
==57491==      possibly lost: 0 bytes in 0 blocks
==57491==    still reachable: 0 bytes in 0 blocks
==57491==         suppressed: 0 bytes in 0 blocks
==57491==
==57491== For lists of detected and suppressed errors, rerun with: -s
==57491== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)


#endif
