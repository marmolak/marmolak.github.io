#include "html.h"
header

<h2>Infamous (not much known) gcc bug</h2>

<p>According to link(CERT C Coding Standard, "https://www.securecoding.cert.org/confluence/display/c/INT32-C.+Ensure+that+operations+on+signed+integers+do+not+result+in+overflow") when you face to integer overflow you should use code(-ftrapv) gcc flag. And everything should be fine.
</p>

<p>Really should because it does not work. Wheee.</p>

<p>I was curious. Why this nice feature does not work? I decided to do small analyse of a bug. And link(here it is, "https://github.com/marmolak/c-fun/blob/master/gcc-bug.c").<p>


<p>Looks like bug is known from 2008 - link(link, "https://gcc.gnu.org/bugzilla/show_bug.cgi?id=35412") and patches are finally link(here, "https://gcc.gnu.org/ml/gcc-patches/2014-07/msg01626.html").</p>

tail
