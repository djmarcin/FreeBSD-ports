# Created by: Wen Heping<wen@FreeBSD.org>
# $FreeBSD$

PORTNAME=	tokyo_tyrant
PORTVERSION=	0.7.0
CATEGORIES=	databases pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Wrapper to the Tokyo Tyrant client library

LICENSE=	PHP301
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libtokyotyrant.so:databases/tokyotyrant

USES=		pkgconfig tar:tgz
USE_PHP=	session
USE_PHP_BUILD=	spl
USE_PHPIZE=	yes
USE_PHPEXT=	yes
IGNORE_WITH_PHP=	70

.include <bsd.port.mk>
