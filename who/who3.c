#include <stdio.h>
#include <stdlib.h>
#include <utmp.h>
#include <fcntl.h>
#include <sys/types.h>
#include <time.h>

/* #define SHOWHOST */

void showtime(time_t);
void show_info(struct utmp *);

int main()
{
	struct utmp *utbufp, *utmp_next();

	if (utmp_open(UTMP_FILE) != -1){
		perror(UTMP_FILE);
		exit(1);
	}

	while (( utbufp = utmp_next()) != ((struct utmp *) NULL))
		show_info(utbufp);
	utmp_close();
	return 0;
}

void show_info( struct utmp *utbufp)
{
	if (utbufp->ut_type != USER_PROCESS)
		return;

	printf("%-8.8s", utbufp->ut_name);
	printf(" ");
	printf("%-8.8s", utbufp->ut_line);
	printf(" ");
	showtime( utbufp->ut_time);
#ifdef SHOWHOST
	if (utbufp->ut_host[0] != '\0')
		printf(" (%s)", utbufp->ut_host);
#endif
	printf("\n");
}

void showtime(time_t t)
{
	char *cp;

	cp = ctime(&t);

	printf("12.12%s", cp+4);
}
