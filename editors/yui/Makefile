# Created by: Rashid N. Achilov <citycat4@ngs.ru>
# $FreeBSD$

PORTNAME=	yui
PORTVERSION=	3.2.06
CATEGORIES=	editors
MASTER_SITES=	http://www.sheltonsoft.ru/fileZ/software/ \
		http://www.askd.ru/~shelton/design/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Rich-featured multi-windows console text editor

USES=		tar:bzip2
USE_AUTOTOOLS=	autoconf aclocal

ACLOCAL_ARGS+=	-I m4
MAKE_ENV+=	LIBPATH=${PREFIX}/lib

BROKEN_sparc64=	Does not compile on sparc64

OPTIONS_DEFINE=	DOCS

post-install:
	${LN} -sf help_eng.html ${STAGEDIR}${PREFIX}/lib/yui/yhelp.html
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for file in BUGS CHANGES COPYRIGHT TODO COPYRIGHT.ITK THANKS
	${INSTALL_DATA} ${WRKSRC}/${file} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
