# The FreeBSD Simplified Chinese Project
# Original Revision: 164989
#
# $FreeBSD: projects/armv6/release/doc/zh_CN.GB2312/relnotes/Makefile 183116 2008-09-17 18:13:37Z delphij $

RELN_ROOT?= ${.CURDIR}/../..

.ifdef NO_LANGCODE_IN_DESTDIR
DESTDIR?=	${DOCDIR}/relnotes
.else
DESTDIR?=	${DOCDIR}/zh_CN.GB2312/relnotes
.endif

DOC?= article
FORMATS?= html
INSTALL_COMPRESSED?= gz
INSTALL_ONLY_COMPRESSED?=

JADEFLAGS+=	-V %generate-article-toc%

# SGML content
SRCS+=	article.sgml

URL_RELPREFIX?=	../../../..

.include "${RELN_ROOT}/share/mk/doc.relnotes.mk"
.include "${DOC_PREFIX}/share/mk/doc.project.mk"
