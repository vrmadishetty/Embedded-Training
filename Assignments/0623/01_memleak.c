/* Program to check the memory leak with valgrind tool */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char *cptr = malloc(100);
	return 0;	
}


#if 0

valgrind command:

valgrind --tool=memcheck --leak-check=yes example1
==57164== Memcheck, a memory error detector
==57164== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==57164== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==57164== Command: ./01
==57164== 
==57164== 
==57164== HEAP SUMMARY:
==57164==     in use at exit: 100 bytes in 1 blocks
==57164==   total heap usage: 1 allocs, 0 frees, 100 bytes allocated
==57164== 
==57164== 100 bytes in 1 blocks are definitely lost in loss record 1 of 1
==57164==    at 0x483B7F3: malloc (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==57164==    by 0x10915E: main (in /home/skysense/course/Assignment/0623/01)
==57164== 
==57164== LEAK SUMMARY:
==57164==    definitely lost: 100 bytes in 1 blocks
==57164==    indirectly lost: 0 bytes in 0 blocks
==57164==      possibly lost: 0 bytes in 0 blocks
==57164==    still reachable: 0 bytes in 0 blocks
==57164==         suppressed: 0 bytes in 0 blocks
==57164== 
==57164== For lists of detected and suppressed errors, rerun with: -s
==57164== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)
	
#endif
