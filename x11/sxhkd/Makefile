# Created by: Anton T�rnqvist <antont@inbox.lv>
# $FreeBSD$

PORTNAME=	sxhkd
PORTVERSION=	0.5.5
PORTREVISION=	1
CATEGORIES=	x11

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple X hotkey daemon

LICENSE=	BSD2CLAUSE

LIB_DEPENDS=	libxcb-keysyms.so:x11/xcb-util-keysyms

USE_GITHUB=	yes
GH_ACCOUNT=	baskerville

USES=		gmake

PLIST_FILES=	bin/sxhkd \
		man/man1/sxhkd.1.gz

.include <bsd.port.mk>
