--- psmark.c.orig	Mon May 12 15:31:28 2003
+++ psmark.c	Mon May 12 15:31:35 2003
@@ -97,9 +97,9 @@
 	  progname);
   fprintf(stderr,"example:\n %s -i test.ps -o output.ps -b 0.4 -s 15 \"vertical label\""
 	  "\n\n",progname);
-  fprintf(stderr,"Notes: The offsets are measured from the bottom left hand corner, but
-	  they are not in sync with the page corner: some fiddling is required
-	  to get text to appear right in the corner.\n"
+  fprintf(stderr,"Notes: The offsets are measured from the bottom left hand corner, but\n"
+	  "they are not in sync with the page corner: some fiddling is required\n"
+	  "to get text to appear right in the corner.\n"
 	  );
 	 
   exit(error ? EXIT_FAILURE : EXIT_SUCCESS);   	
