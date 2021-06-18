/* Print current time in seconds, milliseconds
 * and nano seconds */

#include<stdio.h>
#include<sys/time.h>
#include<math.h>
#include<time.h>
//#include<inttypes.h>

/* gettimeofday() function defined in
 * sys/time.h header file
 *
 * structure timeval is define in same header
 * Two members of struct represent the value since the epoch 
 */

int main()
{
	struct timeval spec;
	struct tm *info;
	time_t curtime;
	gettimeofday(&spec, NULL);

	info = localtime(&curtime);
	printf("%02d:%02d:%02d:%03ld\n",
		info->tm_hour, info->tm_min, info->tm_sec, spec.tv_usec/1000);

	return 0;
}
