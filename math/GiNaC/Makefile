# Created by: Ying-Chieh Liao <ijliao@FreeBSD.org>
# $FreeBSD$

PORTNAME=	GiNaC
PORTVERSION=	1.6.6
CATEGORIES=	math
MASTER_SITES=	ftp://ftpthep.physik.uni-mainz.de/pub/GiNaC/ \
		http://www.ginac.de/
DISTNAME=	${PORTNAME:tl}-${PORTVERSION}

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	C++ library for symbolic mathematical calculations

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libcln.so:math/cln

USES=		gmake libtool makeinfo pathfix pkgconfig python:build tar:bzip2
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

INFO=		ginac ginac-examples

.include <bsd.port.pre.mk>

post-patch:
	@${REINPLACE_CMD} -e 's|-ldl||g' ${WRKSRC}/configure
.if ${ARCH} != "i386"
	@${REINPLACE_CMD} -e 's|unsigned|size_t|g' \
		${WRKSRC}/ginac/parser/parser.cpp
.endif

.include <bsd.port.post.mk>
