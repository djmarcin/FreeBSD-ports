# Created by: KalleDK <plexmaintainer@k-moeller.dk>
# $FreeBSD$

PORTVERSION=	0.9.16.3.1840
PORTREVISION=	0
PKGNAMESUFFIX=	-plexpass

MAINTAINER=	feld@FreeBSD.org

PLEX_BUILD=	cece46d

USE_RC_SUBR=	${PORTNAME}_plexpass

MASTERDIR=${.CURDIR}/../plexmediaserver

DISTINFO_FILE=	${.CURDIR}/distinfo
PLIST=	${.CURDIR}/pkg-plist
FILESDIR=	${.CURDIR}/files
DATADIR=	${PREFIX}/share/${PORTNAME}${PKGNAMESUFFIX}

SUB_LIST=	PORTNAME=${PORTNAME}_plexpass DATADIR=${DATADIR} USERS=${USERS} GROUPS=${GROUPS}
PLIST_SUB+=	PLEX_BUILD=${PLEX_BUILD}

.include "${MASTERDIR}/Makefile"
