/* $FreeBSD: projects/armv6/usr.sbin/pkg_install/delete/delete.h 232120 2012-02-24 18:39:55Z cognet $ */

/*
 * FreeBSD install - a package for the installation and maintenance
 * of non-core utilities.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * Jordan K. Hubbard
 * 18 July 1993
 *
 * Include and define various things wanted by the delete command.
 *
 */

#ifndef _INST_DELETE_H_INCLUDE
#define _INST_DELETE_H_INCLUDE

extern char	*Prefix;
extern Boolean	CleanDirs;
extern Boolean	Interactive;
extern Boolean	NoDeInstall;
extern Boolean	Recursive;
extern char	*Directory;
extern char	*PkgName;
extern match_t	MatchType;

#endif	/* _INST_DELETE_H_INCLUDE */
