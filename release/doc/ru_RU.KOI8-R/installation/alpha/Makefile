# The FreeBSD Russian Documentation Project
#
# $FreeBSDru: frdp/release/doc/ru_RU.KOI8-R/installation/alpha/Makefile,v 1.1 2004/06/24 07:21:47 den Exp $
# $FreeBSD: projects/armv6/release/doc/ru_RU.KOI8-R/installation/alpha/Makefile 131040 2004-06-24 08:39:20Z den $
#
# Original revision: 1.4
#

RELN_ROOT?= ${.CURDIR}/../../..

DOC?= article
FORMATS?= html
INSTALL_COMPRESSED?= gz
INSTALL_ONLY_COMPRESSED?=

# SGML content
SRCS+=	article.sgml
SRCS+=	../common/artheader.sgml
SRCS+=	../common/abstract.sgml
SRCS+=	../common/install.sgml
SRCS+=	../common/layout.sgml
SRCS+=	../common/trouble.sgml
SRCS+=	../common/upgrade.sgml

.include "${RELN_ROOT}/share/mk/doc.relnotes.mk"
.include "${DOC_PREFIX}/share/mk/doc.project.mk"
