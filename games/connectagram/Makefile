# Created by: Rusmir Dusko <nemysis@FreeBSD.org>
# $FreeBSD$

PORTNAME=	connectagram
PORTVERSION=	1.2.1
DISTVERSIONSUFFIX=	-src
CATEGORIES=	games
MASTER_SITES=	http://gottcode.org/connectagram/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Word unscrambling game

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

USES=		compiler:c++11-lib qmake tar:bzip2
USE_QT5=	buildtools_build network widgets
INSTALLS_ICONS=	yes

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e \
		's|share/man|man|' ${WRKSRC}/connectagram.pro
	@${REINPLACE_CMD} -e \
		's|std::lround|lround|' ${WRKSRC}/src/*.cpp

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC} && ${INSTALL_DATA} CREDITS ChangeLog NEWS README \
		${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
