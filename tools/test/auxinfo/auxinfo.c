/*
 * This file is in public domain.
 * Written by Konstantin Belousov <kib@freebsd.org>
 *
 * $FreeBSD: projects/armv6/tools/test/auxinfo/auxinfo.c 211418 2010-08-17 09:42:50Z kib $
 */

#include <sys/mman.h>
#include <err.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <unistd.h>

static void
test_pagesizes(void)
{
	size_t *ps;
	int i, nelem;

	nelem = getpagesizes(NULL, 0);
	if (nelem == -1)
		err(1, "getpagesizes(NULL, 0)");
	ps = malloc(nelem * sizeof(size_t));
	if (ps == NULL)
		err(1, "malloc");
	nelem = getpagesizes(ps, nelem);
	if (nelem == -1)
		err(1, "getpagesizes");
	printf("Supported page sizes:");
	for (i = 0; i < nelem; i++)
		printf(" %jd", (intmax_t)ps[i]);
	printf("\n");
}

static void
test_pagesize(void)
{

	printf("Pagesize: %d\n", getpagesize());
}

static void
test_osreldate(void)
{

	printf("OSRELDATE: %d\n", getosreldate());
}

int
main(int argc __unused, char *argv[] __unused)
{

	test_pagesizes();
	test_pagesize();
	test_osreldate();
	return (0);
}
