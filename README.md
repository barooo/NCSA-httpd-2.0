#NCSA-httpd-2.0

A simple web server, written from scratch, in C, with unit tests in 
the Check framework ([http://check.sourceforge.net][0]).  The goal 
is to be simple and fast.  Ultimately, the goals are in line with 
the [C10K Problem][4].

The name is because I work for NCSA Athletic Recruiting, and
we always joke about "our httpd" when we open the apache configuration
file and see the message about it being based on Rob McCool's work for
the original NCSA httpd.

See what I did there?

The idea came about because we work with an excellent consulting firm 
([http://www.8thlight.com][1]) who has all their apprentices complete 
this as a sort of final project.  I feel weak at low level 
programming, haven't done C in years, haven't done sockets since 
ECE 338 in 1998, and this sounded like a big enough to be far from 
trivial but small enough to be doable type of project.

I will probably also keep a running commentary here on what I'm doing
and where it's headed.  If you're interested in also writing a web
server from scratch, please by all means contact me.

Ultimately I envision something with pthreads and kqueue/kevent based
event notifications, but I haven't done much research on that stuff yet
and it'll be weeks before I'm ready to write that kind of code.

The first milestone is to have something that passes the Fitnesse 
suite contained at [https://github.com/patrickgombert/cob_spec][3].

##BUILDING
You will need a few libraries installed.  To run the tests, you will
need the [Check][0] framework.

This is being developed on a Mac running OSX Mountain Lion.  It /should/
work on Linux, at least for now.  In the future it may become BSD
specific via kqueue (which I don't think is available on Linux).

[0]: http://check.sourceforge.net
[1]: http://www.8thlight.com
[3]: https://github.com/patrickgombert/cob_spec
[4]: http://www.kegel.com/c10k.html
