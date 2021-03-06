# Created by: thierry@pompo.net
# $FreeBSD$

PORTNAME=	tktable
PORTVERSION=	2.10
PORTREVISION=	1
CATEGORIES=	x11-toolkits tk
MASTER_SITES=	SF
DISTNAME=	${PORTNAME:S/tk/Tk/}${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Table/matrix widget extension to Tk

LICENSE=	TclTk
LICENSE_NAME=	Tcl/Tk License
LICENSE_FILE=	${WRKSRC}/license.txt
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

USES+=		tk
USE_LDCONFIG=	${PREFIX}/lib/${DISTNAME}

GNU_CONFIGURE=	yes

PLIST_SUB=	DISTNAME=${DISTNAME}

CONFIGURE_ARGS=	--with-tcl=${TCL_LIBDIR} \
		--with-tk=${TK_LIBDIR} \
		--with-tclinclude=${TCL_INCLUDEDIR} \
		--with-tkinclude=${TK_INCLUDEDIR} \
		--with-x \
		--prefix=${PREFIX} \
		--exec-prefix=${PREFIX}

.if defined(MAINTAINER_MODE)
test: build
	(cd ${WRKSRC};  \
	${SETENV} ${MAKE_ENV} ${MAKE} ${MAKE_FLAGS} ${MAKEFILE} ${MAKE_ARGS} test)
.endif

post-patch:
	@${REINPLACE_CMD} -e 's/FreeBSD-\*/FreeBSD-*|DragonFly-*/' \
		${WRKSRC}/configure

.include <bsd.port.mk>
