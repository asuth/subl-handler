# SublimeText 3 URLHandler on OS X

This application enables SublimeText 3 to open `subl:` urls, as Textmate has as described [here](http://manual.macromates.com/en/using_textmate_from_terminal#url_scheme_html): `subl://open/?url=file:///etc/passwd&line=10&column=2`

### Install
- Clone this repo
- Drag `SublHandler.app` into `Applications` folder and open it
- Adjust Preferences (`Cmd + ,`) to point to your `subl` path
- Open terminal and type: `open 'subl://open/?url=file:///etc/hosts'` to test

### Uninstall
Delete following:
- `/Applications/SublHandler.app`
- `~/Library/Preferences/com.asuth.sublhandler.plist`

### Authors
- Daisuke Murase :@typester (github, twitter, CPAN, etc..)
- Scott Wadden (SublimeText 3 port)
- Andrew Sutherland (Mountain Lion fixes)
- Cory Simmons (port to Sublime Text 3)

##### BSD License
