# $FreeBSD: projects/armv6/kerberos5/libexec/kdc/Makefile 234858 2012-05-01 04:01:22Z gonzo $

PROG=	kdc
MAN=	kdc.8

SRCS=	config.c \
	connect.c \
	announce.c \
	main.c

CFLAGS+=-I${KRB5DIR}/lib/krb5 -I${KRB5DIR}/lib/asn1 -I${KRB5DIR}/lib/roken \
	-I${KRB5DIR}/kdc ${LDAPCFLAGS}
DPADD=	${LIBKDC} ${LIBHDB} ${LIBKRB5} ${LIBROKEN} ${LIBASN1} \
	${LIBCRYPTO} ${LIBCRYPT} ${LIBVERS}
LDADD=	-lkdc -lhdb -lkrb5 -lroken -lasn1 -lcrypto -lcrypt ${LIBVERS}

.include <bsd.prog.mk>

.PATH: ${KRB5DIR}/kdc
