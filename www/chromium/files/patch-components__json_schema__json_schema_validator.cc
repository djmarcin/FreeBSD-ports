--- components/json_schema/json_schema_validator.cc.orig	2016-03-05 17:55:58.871393896 +0100
+++ components/json_schema/json_schema_validator.cc	2016-03-05 17:56:49.927387504 +0100
@@ -20,7 +20,11 @@
 #include "base/strings/stringprintf.h"
 #include "base/values.h"
 #include "components/json_schema/json_schema_constants.h"
+#if defined(OS_BSD)
+#include <re2/re2.h>
+#else
 #include "third_party/re2/src/re2/re2.h"
+#endif
 
 namespace schema = json_schema_constants;
 
