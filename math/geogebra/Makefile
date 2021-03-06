# Created by: Nicola Vitale	<nivit@email.it>
# $FreeBSD$

PORTNAME=	geogebra
PORTVERSION=	5.0.218.0
CATEGORIES=	math java
MASTER_SITES=	http://download.geogebra.org/installers/5.0/ \
		http://freebsd.uzsolt.hu/src/
DISTNAME=	GeoGebra-Linux-Portable-${PORTVERSION}

MAINTAINER=	udvzsolt@gmail.com
COMMENT=	Dynamic software that joins geometry, algebra, and calculus

LICENSE=	GEOGEBRA
LICENSE_NAME=	GeoGebra Non-Commercial License Agreement
LICENSE_FILE=	${WRKSRC}/LICENSE.txt
LICENSE_PERMS=	dist-mirror no-dist-sell pkg-mirror no-pkg-sell auto-accept

RUN_DEPENDS=	bash:shells/bash

USE_LINUX?=	c6

USE_LINUX_APPS=	xorglibs

ONLY_FOR_ARCHS=	i386 amd64

SUB_FILES=	geogebra.desktop
CONFLICTS=	math/geogebra-i18n-[0-9]*
NO_BUILD=	yes
USES=		tar:bzip2 desktop-file-utils shared-mime-info shebangfix
WRKSRC=		${WRKDIR}/${DISTNAME}
JAVADIR=	jre1.7.0_45-i686
SHEBANG_FILES=	geogebra-portable geogebra/geogebra

post-patch:
	@${REINPLACE_CMD} -e 's,arch,/compat/linux/bin/arch,' ${WRKSRC}/geogebra-portable

do-install:
	@${MKDIR} ${STAGEDIR}${DATADIR}/${PORTNAME}
	${INSTALL_SCRIPT} ${WRKSRC}/geogebra/geogebra ${STAGEDIR}${DATADIR}/${PORTNAME}/geogebra
	${INSTALL_SCRIPT} ${WRKSRC}/geogebra-portable ${STAGEDIR}${DATADIR}
	${LN} -s ${DATADIR}/geogebra-portable ${STAGEDIR}${PREFIX}/bin/${PORTNAME}
	${INSTALL_DATA} ${WRKSRC}/geogebra/*.jar ${STAGEDIR}${DATADIR}/${PORTNAME}
	cd ${WRKSRC} && ${COPYTREE_SHARE} ${JAVADIR} ${STAGEDIR}${DATADIR}
	${INSTALL_PROGRAM} ${WRKSRC}/${JAVADIR}/bin/java ${STAGEDIR}${DATADIR}/${JAVADIR}/bin
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/mime/packages
	${INSTALL_DATA} ${WRKDIR}/geogebra.desktop ${STAGEDIR}${DESKTOPDIR}

.include <bsd.port.mk>
