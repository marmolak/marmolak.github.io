#include "html.h"
header

<h1>BlackThorne</h1>

<p>link(BlackThorne,"http://en.wikipedia.org/wiki/Blackthorne") were released for free for Mac OS X and Windows.</p>
<p>
Game runs fine on Mac OS X but no Linux version are available. Which is strange because game runs under patched DosBox.
(TODO: investigate how launcher for os x works - GNU LICENSED)
</p>

<p>Released version doesn&apos;t allow to insert codes for levels. This is not problem how I will show you now.

Inteeresing is that game allows you to save game (but you will start from beginning of level) and continue later.
What happen ocassionaly is that you rewrite you saved position because you started new game...
</p>

<p>
Because I want to learn how to use dtrace, I wrote small script which helped me understand what&apos;s going on.
Result of my experiments with dtrace you can found link(here, "https://raw.githubusercontent.com/marmolak/dtrace-scripts/master/BlackThorne/thorne.d").<br>
When you run script and check output you easily found that game tryes save some stuff to code(~/Library/Application Support/Blizzard/Blackthorne/SAVEGAME.000)<br>
Place where game codes are stored. Enjoy!
</p>

<p>
And how to obtain codes?<br/>
code($ strings BTHORNE.EXE)<br/> is your friend :).
</p>

</p>

tail
