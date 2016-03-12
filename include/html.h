#define header \
<!doctype html>	\
<html>	\
<head>	\
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" /> \
<title>Marmolak&#39;s (not so sweet) home</title> \
<link rel="stylesheet" href="/styles.css" type="text/css" /> \
<meta name="viewport" content="width=device-width, minimum-scale=1.0, maximum-scale=1.0" /> \
</head> \
<body> \
<div id="container"> \
    <header> \
	<div class="width"> \
    		<h1><a href="/">Marmolak&#39;s place</a></h1> \
	    	<nav> \
    			<ul> \
        			<li class="start selected"><a href="/index.html">Home</a></li> \
         	   		<li><a href="https://github.com/marmolak">My github</a></li> \
          	 		<li class="end"><a href="#">Contact</a></li> \
        		</ul> \
    		</nav> \
       	</div> \
    </header> \
    <div id="body" class="width"> \
		<section id="content" class="two-column with-right-sidebar"> \
	    <article> \


/* End of page */
#define tail \
		</article> \
        </section> \
        <aside class="sidebar big-sidebar right-sidebar"> \
            <ul> \
               <li> \
                    <h4>Blocklist</h4> \
                    <ul class="blocklist"> \
                        <li><a class="selected" href="index.html">Home Page</a></li> \
<li>link(Hacking BlackThorne for fun, "/g/b/blackthorne.html")</li> \
<li>link(Games which I finished (recently), "/g/g/games-finished.html")</li> \
<li>link(Infamous (not much known) gcc bug, "/g/g/gcc-bug.html")</li> \
<li>link(My own first Arduino hello world, "/g/a/arduino-hello.html")</li> \
<li>link(BanaNAS - home made NAS solution, "/g/b/bananas.html")</li> \
<li>link(My first ascii art porn (.got.plt on-the-fly patching), "/g/a/ascii-porn.html")</li> \
                    </ul> \
                </li> \
            </ul> \
        </aside> \
    	<div class="clear"></div> \
    </div> \
</div> \
</body> \
</html>

/* Hyperlink */
#define link(c, h) <a href= h >c</a>

#define code(x) <code>x</code>
