# iframe memory leak in qtwebkit (5.4.2)

This repo contains a sample demo browser (18 lines of codes)
based on qtwebkit. I found a seriouse memory leak in
combination with iframes and js.

# Whats the problem?

If the iframe src gets changed (via JavaScript) to load
a html site referencing a JS file we will see a nice increase
in the used memory. Image you want to run a 24/7 webapp
containing some iframes and you are using a qtwebkit based
browser you will run into an out of memory sitatuion in
near future. The problem gets even worse if you running on
an embedded device with 1GB of RAM.

# And now?

If you have a patch for my 18 lines 'browser' please create
a pull request or send it to me. If you dont trust me,
build the browser and test it ony your own.

# It must be the cause of your Linux system.

Yes, I am using Linux as main os for everything except serious
audio work. But... yes it happes under Windows XP/7 too.

I really hope to get this fixed in the next coming Qt release.
