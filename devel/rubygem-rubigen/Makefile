# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD$

PORTNAME=	rubigen
PORTVERSION=	1.5.8
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby generic generator framework

LICENSE=	MIT

RUN_DEPENDS=	rubygem-activesupport>=2.3.5:devel/rubygem-activesupport

NO_ARCH=	yes

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

PLIST_FILES=	bin/install_rubigen_scripts \
		bin/ruby_app \
		bin/rubigen

.include <bsd.port.mk>
