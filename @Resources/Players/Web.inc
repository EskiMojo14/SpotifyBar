[Player]
Measure=Plugin
Plugin=WebNowPlaying

[Cover]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Cover
CoverPath=#@#CoverWeb.png
UpdateDivider=10

[Track]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Title
Substitute="":"N/A"

[Artist]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Artist
Substitute="":"N/A"

[Album]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Album
Substitute="":"N/A"

[Progress]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Progress

[Duration]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Duration
RegExpSubstitute=1
Substitute="^00":"0","^01":"1","^02":"2","^03":"3","^04":"4","^05":"5","^06":"6","^07":"7","^08":"8","^09":"9"

[Position]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Position
RegExpSubstitute=1
Substitute="^00":"0","^01":"1","^02":"2","^03":"3","^04":"4","^05":"5","^06":"6","^07":"7","^08":"8","^09":"9"

[Volume]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Volume

[PlayerState]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=State
IfCondition=PlayerState=1
IfTrueAction=[!SetOption PlayShape Text "[\xF130]"][!Update]
IfFalseAction=[!SetOption PlayShape Text "[\xF132]"][!Update]

[CoverAbs]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=CoverWebAddress
Substitute="":"#@#images\nocover.png"

[Shuffle]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Shuffle

[Repeat]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Repeat