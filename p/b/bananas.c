#include "html.h"
header

<h1>BanaNAS - home NAS solution</h1>

<p>
I always want to hawe own home NAS solution. But projects on market not satisfying my needs.
One day I talked with cooworker at work about some kinds of Pi machines. He mentioned BananaPi.
BananaPi is not fully opensource hw but it have: SATA connector, 1Gbit ethernet port, 1GB RAM.
Ultimate features for homw made NAS solution.
</p>

<p>
I used bananian linux for now a this is list of features:
<ul>
<li>Torrent downloader - transmissin with webui and level 1 blacklist from
link(iblocklist.com, "https://www.iblocklist.com/lists.php")
<li>NFS server - mounted on FreeBSD and Linux stations via autofs
<li>Samba server - mounted on Mac OS X station via autofs
<li>FTP server - old good FTP
<li>Remote access - I decited to use link(tmate.io, "http://tmate.io") for remote access.I can reach my home network even when I don&amp;t have public IP.
When system starts, mail is send via ssmtp (connected to gmail account) with connection string.
<li>Web server - List of interesting parts of my home network (list of network devices), primitive remote shutdown (html file is watched by inotify and when is accessed then <code>poweroff</code> is called).
<li>DLNA server - I can play some multimedia files on my XBOX 360. Subtitles are not supported :/.
</ul>
</p>

<p>
Still in progress:
<ul>
<li>FullHD video acceleration
</ul>
</p>

tail
