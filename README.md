SublimeText 2 URLHandler on OS X
=======================
This application enables SublimeText 2 to open `subl:` urls, as Textmate has as described [here](http://manual.macromates.com/en/using_textmate_from_terminal#url_scheme_html)

    subl://open/?url=file:///etc/passwd&line=10&column=2

Installation
------------
Download [latest release](http://asuth.com/SublHandler.app.zip).

Unzip it, then launch it. Select `SublHandler` -> `Preferences...`, then set the path for the subl binary.

*Mountain Lion Users*: Because it's an unsigned binary, you'll need to right-click the app and select "Open"...You only need to run it once for the URL handler to register.

Test it
-------
Open terminal and type:
    open 'subl://open/?url=file:///etc/hosts'


Uninstalling
------------
Delete following:

    /Applications/SublHandler.app
    ~/Library/Preferences/org.asuth.sublhandler.plist

Author
------

* Daisuke Murase :@typester (github, twitter, CPAN, etc..)
* Scott Wadden (SublimeText 2 port)
* Andrew Sutherland (Mountain Lion fixes)

License
-------

BSD.

