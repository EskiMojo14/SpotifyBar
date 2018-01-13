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

[Progress]
Measure=Plugin
Plugin=SpotifyPlugin
Type=Progress
Decimals=2
Substitute="nan":"0"

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
IfTrueAction=[!SetOption PlayShape Text "[\xF130]"][!Update]
IfFalseAction=[!SetOption PlayShape Text "[\xF132]"][!Update]

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