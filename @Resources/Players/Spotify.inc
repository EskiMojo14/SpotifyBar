[Player]
Measure=Plugin
Plugin=NowPlaying
PlayerName=Spotify
PlayerType=State

[Cover]
Measure=Plugin
Plugin=SpotifyPlugin
Type=AlbumArt
Res=640
CoverPath=#@#CoverSpotify.png

[Track]
Measure=Plugin
Plugin=SpotifyPlugin
Type=TrackName
Substitute="":"N/A"

[Artist]
Measure=Plugin
Plugin=SpotifyPlugin
Type=ArtistName
Substitute="":"N/A"

[Album]
Measure=Plugin
Plugin=SpotifyPlugin
Type=AlbumName
Substitute="":"N/A"

[ProgressDec]
Measure=Plugin
Plugin=SpotifyPlugin
Type=Progress
Decimals=2
Substitute="nan":"0"

[Progress]
Measure=Calc
Formula=ProgressDec*100

[Duration]
Measure=Plugin
Plugin=SpotifyPlugin
Type=Length
RegExpSubstitute=1
Substitute="^00":"0","^01":"1","^02":"2","^03":"3","^04":"4","^05":"5","^06":"6","^07":"7","^08":"8","^09":"9"

[Position]
Measure=Plugin
Plugin=SpotifyPlugin
Type=Position
RegExpSubstitute=1
Substitute="^00":"0","^01":"1","^02":"2","^03":"3","^04":"4","^05":"5","^06":"6","^07":"7","^08":"8","^09":"9"

[Volume]
Measure=Plugin
Plugin=SpotifyPlugin
Type=Volume
Substitute="nan":"0"

[PlayerState]
Measure=Plugin
Plugin=SpotifyPlugin
Type=Playing
IfCondition=PlayerState=1
IfTrueAction=[!ShowMeter PauseShape][!HideMeter PlayShape][!Update][!Redraw]
IfFalseAction=[!HideMeter PauseShape][!ShowMeter PlayShape][!Update][!Redraw]

[CoverAbs]
Measure=Plugin
Plugin=SpotifyPlugin
Type=CoverPath
DynamicVariables=1
UpdateDivider=50
Substitute="":"#@#images\nocover.png"

[Shuffle]
Measure=Plugin
Plugin=SpotifyPlugin
Type=Shuffle

[Repeat]
Measure=Plugin
Plugin=SpotifyPlugin
Type=Repeat