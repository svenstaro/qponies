Desktop Ponies!
Have little ponies running around your desktop aimlessly!  Might entertain you for a few minutes!

(not affiliated with Hasbro in any way, all of the art has been either created by others, or, in the case of the original Derpy images, from Derpy Delivery:   http://www.hamalonesandwich.com/derpydelivery/#l  
A lot of the animations have been done by Jay Wright)

New web site!  I finally broke down and got some free hosting:
http://desktopponies.co.cc/
Also includes a download link not using megaupload.
(I will also continue to update this doc)

Current version:  1.37
Download: http://desktopponies.co.cc/ (with source code)
(Windows only)

There is actually now a java port made by ‘Gilgapony.’ I don’t know the guy, but if you want to try your luck, you can also find it on the download page.

Ponychan link:
http://www.ponychan.net/chan/collab/res/2113.html

Is this too much pony for you?  Someone else make an app that just has ponies walking on top of your windows, without the bouncing all around and getting in your way part:
(again, this link is not related to this project/ has anything to do with me)
http://www.ponychan.net/chan/collab/res/2378.html#2378

----------------------------------------------------------------------

Change log below

-----------------------------------------------------------------------

Info:


If you have .gif files to make your own pony, adding them to the program is easy! 
Guess what!  This version includes a Pony Editor GUI! 

You can still edit ponies by hand, though, if you want to:

 See the Derpy folder, with the pony.ini file?  All you need to do is make your own folder for your pony, and edit the file accordingly.  The ini file contains additional information.

You can even create detailed "linked" or "chained" behaviors, like having Dash suddenly zoom out of the sky, play a "sonic rainboom" animation, and say "...best day ever!"  See Derpy's ini file for an example.  See AJ’s ini file for an example of ‘effects.’

You can even leave the menu open and change settings on the fly to see their effect.

NOTE:  This program requires the .NET 3.5 client profile to be installed.  This is included in windows 7, and maybe vista, but for XP you'll have to install it.  You can find it here:

Note that you need the 3.5 version - 4.0 does not include the files you need.

http://www.microsoft.com/net/

You will also need DirectX to be able to play sounds.

Does this run in linux or for Mac?  Some have tried it with MONO, but have reported poor results.  Try the java port mentioned above.

This tool was made using Visual Studio 2010 express (the FREE version) and is in Visual Basic .Net.

INI file definitions and descriptions:

To quit the program, right click on a pony and choose "Quit All".
To remove a single pony, right click and "Quit".
To assume direct control of a pony, right click and "Take Control".  You can then use the arrow keys and shift key.
To open the menu again, right click and “Open Menu”

You can even leave the menu open and change settings on the fly to see their effect.

Make your own ponies, or change how the current ones behave!

I don't make any of the art for the ponies.  All of it is made by the community and shared, usually on Ponychan.
You can use .png, .jpg, and animated .gifs for art!




Changelog:

Latest changes:

V1.38

- Ponies now detect the avoidance area (evergreen forest) by means of a 90 pixel hit box around the center of the pony.  This should improve detection of the area and avoid flickering.
-Pony "sliding," for those with Windows XP, has been reduced, but not eliminated (you may still see ponies sliding, but they should wake up sooner, instead of sliding across the entire screen)

-Ponies will no longer get stuck near the middle of the screen if the boundary of the avoidance area happened to be near.
-Ponies would rarely get confused and stop moving when they found themselves in an avoidance area.  Fixed.

-The old teleport behavior is available again through the options menu.  The default will continue to be having ponies slowly walk out of areas they shouldn't be in.
-Ponies should ignore the cursor in screensaver mode, and the cursor itself will now be hidden.
-Screensaver mode now has options for the background:

\Transparent (normal)

\Solid color background

\Custom image background

-Interaction errors no longer show in screensaver mode.
-Effects and speech are disabled when dragging a pony to prevent them from breaking the drag.

-Ponies should get stuck on the cursor less often; they will stop dragging if they find they no longer have input focus.

-Those of you with ffdshow should no longer end up with hundreds of blue icons in your taskbar due to pony sounds.

Pony and art changes:

-Applejack now drops more apples.
-Scratch now moonwalks properly and shouldn't go off stage. Thanks to Darksilver for this.

-Sweetie Belle jumping animation by Cantorlot.
-Scooting Sweetie Bell by StarStep

-New mouseover image for Fluttershy, by Deathpony.

-Improved picture-taking interaction scene image for Photofinish. 
-Big Celestia now has sounds. Thanks to Darksilver.

-More art for Gummy + Pinkie Pie by DeathPony

-Interactions between Pinkie pie and Surprise, Pinkie Pie and Gummy by DeathPony

-Drama Couch Rarity by Bot-Chan

-Raging Twilight by Bot-Chan

-Philomena by by Pony Noia

-Tank by Bot-chan

-Fluttershy Dragging animation by DeathPony

-Fluttershy has had image-centering applied

-Galloping Twilight by InfinityDash

-Mental breakdown Twilight image by ??? (couldn't find this for some reason - let me know).

-Discorded Twilight by StarStep

-Pipsqueak by StarStep 




V1.37

Fixes:

-A few ponies had bad images (Silver Spoon, Daisy, Blinky Pie) that were causing crashes with "Generic Error in GDI" for older machines.  Those images have been corrected and no futher crashes or "red boxes" should appear.  Hopefully.

-The program will no longer crash with an error about directx and sounds even if you have sounds disabled (and even if you don't even have directx).

-You can select Mp3 files when making a new pony speech, instead of being forced to pick a WAV file still.

-The code in Pony.Move() has been cleaned up a bit, and several misc logical errors corrected.

Unfortunately, ponies getting stuck and flicking when using Avoidance Areas/Evergreen Forest zones is still an ongoing issue.


V1.36.1

-New/updated art:

-New Gilda by bot-chan
-Rocking Chair for Granny Smith by bot-chan
-Berry Punch sitting by vulcan539 
-Derpy sitting by vulcan539 
-Updated Pinkie by DeathPony
-Season 2 Luna by Bot-chan (with interaction with nightmare moon)
-Small dancing interaction between Scratch and the Pie family by Pony Noia
  (and dancing(?) Dash too.)
-Suitless Spitfire by Rainbowdutch
-Twilight's balloon by Anonycat
-Updated Raindrop's dress by Starstep
-Pondering Rarity by StarStep

Changes:

New options:
	-You can now choose to disable sounds while in screensaver mode.
	-You can now choose to limit sounds to one at a time, or one per pony.
	-The random pony now has a checkbox to prevent duplicate random ponies (except when you ask for more random ponies than you have unique ones).

-Mathias Panzenböck provided a bunch of sounds from the MLP:FIM Soundboard (http://kyrospawn.deviantart.com/art/MLP-FIM-Soundboard-V7-0-244757196?) and added them to the pony ini files.  
-Note that sounds are now in .MP3 format instead of .WAV.
-In order to support MP3s, DirectX is now used for sound playing.  If you don't have the right DirectX version, you will see that sounds are disabled in the options menu.
-Note that the INI format for speech lines has changed to allow multiple versions of the same file (ogg, etc).  This is for compatibility with Browser Ponies.

-When making changes to speech, the changes would persist even if you didn't save and closed the editor (but not to disk).  Fixed.
-Pinkie can now be properly dragged (dragging behaviors that were set to “do not run randomly” didn't work).
-Spike has had image-centering applied to prevent him from making jittery movements when following Rarity.
-Ponies that run into a barrier or reach their destination will now wait for a short time before continuing (to stop jittering).
-Ponies should not get stuck on the mouse cursor when they walk into it anymore.
-Occasionally the program would freeze on loading.  That should be fixed now.
-Played sounds never actually matched their tooltip speech.  They are now properly played for the right lines. 
-The pony editor now tries to make all filenames and paths in the ini files in lowercase for the sanity of the people who maintain the other ports (that run on case-sensitive operating systems).
-The pony editor will now complain if you made a behavior, speech, interaction, effect, or pony with the same name as another.
-Applejack and Applebloom's unusual behaviors (truck, dancing, spinning) have been reduced in probability a bit.
-All saved files (ini, settings, etc) will be saved in UTF8 instead of UTF16 from now on (again for compatibility for those who run different operating systems.)
-You will only get one error message when sounds fail to play, instead of one per try.
-When adding a “random pony” to the roster in the mini-games, you now actually get a random pony instead of just Rarity every time. (http://search.dilbert.com/comic/Random%20Number%20Generator)
-When saving settings in the options menu when ponies were active, your pony counts would be reset.  This will no longer happens.
-Lots of spelling and grammar errors in pony speech have been corrected.


V1.35.2

- The editor will now re-size all of the columns as soon as it starts; previously, it would wait until you made a change first.

-Having multiple sets of the same pony interacting with themselves (you crazy 
people you) would cause an infinite recursion when the interaction(s) ended 
and would crash the program.  This has been fixed, so you can now have ponies 
interacting with their other selves...

- Pony following had a typo in the code that made the Y-coordinate be off when specifying an offset.  Fixed.

- When deleting or changing behaviors in the editor, the preview pony would 
sill use the deleted following behaviors.  Now, the behaviors are re-linked 
after changes are made.

- If there was no image centering specified for the behavior, the default of 
exactly the center of the image should have been used.  Instead, the top 
right corner was. This caused problems with following. Fixed.

- Following ponies would previously stop at a distance of 1/2 their width 
from their target.  This has been reduced to 5 pixels.

-Sapphire Shores found the missing "s" in her name, and no longer walks 
vertically.

- Opal has had image-centering applied so she won't get stuck in a loop when 
following Rarity.

-A couple people pointed out that “Filly Rainbow Dash uses the line "See you boys at the fiish line", obviously missing an 'n' in the word 'finish'.”  -Fixed

-Twist has had image-centering applied so she doesn't jump around for those of you who actually like this pony (I jest).

Art changes:

-Updated Pinkie Pie with some new animations, thanks to DeathPony
-Filly Fluttershy by PsychoSutin
-Lightning Bolt by Starly.
-Sindy (“too much blush” pony) by Pony Noia
-Diamond Tiara and Silver Spoon by Anonycat
-Daisy by Anonycat
-Sir Colton Vines by Anonycat
-Caesar by Anonycat
-Filly AppleJack is mighty appreciative of finally getting her own standing 
animation, courtesy of Spuaspeedstrut
-New critter-catching animation for gala-fluttershy by Starstep
-New flying animation for gala-fluttershy by humle


V1.35.1

- The new moving-back-onscreen-instead-of-teleporting did not play nice at all with the avoidance areas, and some ponies would often get stuck.  This should no longer happen as much.

- Image centering did not work properly with scaling.  Fixed.

- DeathPony provided a better-centered Pinkie Pie ini file.  Thanks.

v1.35

+New feature:  Image Centering.  Some ponies (Pinkie Pie...) have animations of greatly varying sizes, which make the pony "jump" around when switching between them.  You can now counteract this effect by specifying a common center for each image in the pony editor.  (The mid-body of the pony works well.)  The ponies with the worst mis-matched images have already had this applied.  It is not needed for ponies with well-balanced image sizes (all the same size).

- Ponies will no longer teleport around if they find themselves to be offscreen (like after switching to a larger image).  They will instead try and walk back onscreen.  The same applies to changing the allowed montiors or applying no-pony zones.
- Previously, adding a new pony when all ponies were asleep with "sleep all" would crash the program when they were woken up.  Fixed.
- When specifying offsets for pony-following, scaling was not taken into account.  Fixed.
- Ponies no longer wake up if you drag them while they are asleep.
- AJ is less fond of her new truck now.
- The right click menu now has quit at the bottom to avoid accidental closure.
- Ponies should now properly display their sleep animation when told to sleep individually.  Previously, they would occasionally be stuck in place walking or flying.
- Pinkie's behaviors have been tweaked a bit.  The copter is a bit less common and fixed some broken/wrong links.
- Only a few ponies have sounds, and those that do had all of them disabled in their ini files for some reason.  Fixed (only for those of you with sounds enabled in the options menu).
- Adding an effect in the editor then immediately trying to run the behavior that triggers it without saving first would crash the program.  Fixed
- The effect centering option "any-not_center" was not recognized, although you could save this setting in the editor.  Fixed.
- The out-of-bounds detection is slightly more intelligent.

New ponies:
- Screwball by DeathPony
- Snips and Snails... by Anonycat
- Sheriff Silverstar by Anonycat
- Angel (+behaviors and interactions with fluttershy) by DeathPony
- Winona by DeathPony
- Surprise (Not a show pony, but since Pinkie Pie did have wings in Faust's original sketches I'm letting this one slide) by DeathPony
- Filly Princess Luna!  So cute! by Asparagus
- Filly Rainbow Dash (VERY well done!) by PsychoShutin (+Starly)
- Granny Smith by Bot-chan

Art changes:
-The original "Dr. Whoof" is included in Dr. Whooves's folder, if you should wish to use him instead.
-Dr. Whooves now has a fez hat, for some unfathomable reason.
-Applejack now has an apple tree to buck
-Zecora sometimes appears with a certain flower.
-New running animation for Dash by SarkinaBox + StarStep
-Princess Pinkie animation by DeathPony


v1.34

- You now have more control of what animations are used when ponies are following - see the new 
controls in the following parameter box in the editor.
	There are two options:
	+Auto select images - automatically select what images should be used based on the pony's 
speed and direction.  This was the behavior prior to this version (unless they were interacting - 
now interactions don't matter).
	+Manual selection - you can select which behavior to use images from when the pony is 
stopped, or moving.
- Thanks to some code from Tursi, ponies are now z-order aware.  Ponies will be displayed "behind" 
or "in front of" each other depending on their position.
- You can now make your own categories/tags/filters, whatever you want to call them, in the 
options menu by pressing the "Custom Filters" button.
- You can now edit tags in the editor.
- Fixed an issue where the editor menu was wrong when using filters.
- Fixed an issue where the menu of ponies would get cleared after saving changes to a pony and 
using filters.
- Pinkie's parasprite herding interaction somehow got deleted from the last several versions.  It 
is now back.
- Effects that were set to follow ponies were in the wrong positions if the scaling was changed (Like for DJ Poni3).  
Fixed.
- Pinkamina's friends will no longer re-spawn everywhere when you drag her (the repeat delay being 
0 caused this).
- When changing art in the editor, the folder shown will be the pony's folder, instead of the base 
folder.
- Pressing the reset button in the options menu will reset the ponies on the menu to normal size 
as well.
- Dinky has appropriate tags now.

Thanks for /dev/tty5 for the following fixes/suggestions:
- Running the screensaver while having 0 ponies set to run in the settings file will now launch 1 
random one instead of getting stuck.  
- When autostarting or running the screensaver, the main window used to pop up briefly then vanish.  It now doens't appear it all. 
- Right clicking and selecting "configure" on the screensaver file didn't work for some versions 
of windows.  Fixed.


- When you run into the dreaded "no pony.ini file!" error, you can now choose to skip seeing that 
message for the rest of the folders.
- The "Mystery_Thumb" file is now included in the source code, instead of just being a mystery for 
those trying to compile the project.
- The screensaver is now the right file type in this release...

-New art:

Even MORE animations for Pinkie Pie, by Death Pony
Fido by Pony Noia
Filly Pinkie by Psychoshutin 
Luna with her Abacus by RQK
Pink Filly Celestia by Asparagus 
Twilight's Mom (Mrs Sparkle) by supersaiyanmikito
Updated Fluttershy sleeping by Asparagus
Colgate sitting by Vulcan539 (+Anonymous)
Filly Applejack by SupaSpeedStrut
Better ponybox for Dr Woof by Anonycat
AJ's truck, by Anonycat
(+ Interaction with Twilight by me... Couldn't resist.)


V1.33

-The app will no longer erroniously try to load your windows system folders as ponies.
-The “cursor avoidance” feature was broken in the last release.  Fixed.
-Ponies with a scale setting other than 1.00 had effects that were not centered properly.  Fixed.
-Using the scale override and setting it to 1.00 had no effect.  This has been fixed.
-Using small scale ponies and using the “return to menu” option gave you a corrupted menu.  This should no longer happen.
-Ponies with invalid category names will no longer prevent you from starting up the app in “autostart” mode.
-Apple Bumpkin no longer walks vertically.
-Releasing the mouse button on a pony you are dragging didn't release the pony from their drag animation.  Fixed (for real this time)


V1.32

+New feature in the options menu: Pony scaling.  You can now select how big or small you would like the ponies to appear on screen.  This can be overriden for individual poines by including a “scale,1.00” in the ini file - where 1.00 = 1x(normal size), or any other value you choose (5x and 0.25x are probably sane limits).

-Memory usage has been slightly reduced again (especially in the case of having multiple copies of the same pony on screen).
-When going back to the menu your selected counts of ponies were reset, especially when using filters.  This no longer happens.
-The editor did not save your selection for “links to” when adding a new behavior.  Fixed.
-Fixed a crash when returning to the menu after saving a pony in the editor.
-Testing out following behaviors in the editor should work more reliably now.
-Carrot Top no longer trots vertically.
-Right-clicking return to menu while in editor didn't close editor.  Fixed
-The "Show Interaction Errors" checkbox in the options should now do something.
-Dash's mouseover area was off.  Fixed for her and other ponies with large animations.
-Dash would sometimes go into Sonic Rainboom spasms.  This should be fixed.
-A pony being dragged would stay in their drag animation even when the mouse button was released (if you were still hovering over them).  Fixed.
-Slow ponies sometimes didn't bounce off borders and kept on trying to walk into them. Fixed 
-When releasing a pony from being dragged, they will now continue on what they were doing before instead of picking a new behavior.  (This entry was incorrect - it was fixed in 1.33)
-The buttons on the menu no longer float around when the window is resized.
-Some ponies no longer show their gala dresses on mouseover.

Updated art:

Updated Pinkie pie by DeathPony
Apple Bumkin by Pony Noia
Rover by Pony Noia
Spot by Pony Noia
Big Celestia's Images have been made all a uniform size to prevent "jumping" between animations.
Gala and sleep images for Raindrops (edited from rainbow's)- by AngelKat58 on Youtube.
Sleeping fluttershy (edited from luna's) - by AngelKat58 on Youtube.
Dinky by AnonyCat
Spike replaced with new version by Anonymous
Naked Trixie now has a delay of a few seconds between blinks.

v1.31

-All ponies in games will move at the same speed, instead of Rainbow dominating every match.

-Controlled ponies in games will no longer get stuck on odd animations when idle (this should also 
help with stubborn ponies that don't want to move).

-Added a filter to the main menu.  Ponies are now "tagged" in their pony.ini files.  
	Select "Show all" to show all ponies.
	Select "Any that match" to show all ponies that have at least one of the selected tags.
	Select "Exactly..." to show only ponies that have all of the selected tags.

	For example:
	"Any that match" with "Fillies" and "Unicorns" will show all fillies, and all 
unicorns.
	"Exactly..." fillies and unicorns will only show those fillies who are also unicorns.

-Added a new movement type:  "Dragged".  You can now make behaviors that only show their 
animations while the pony is being dragged with the mouse.

-CPU and memory usage has been reduced (images are not loaded until a pony is activated and the 
menu no longer eats CPU cycles when it is not visible).

-"Trixe" has been replaced by Trixie

-A bug preventing the use of effect and behavior durations of less than 1 second has been fixed.

Updated/new art:

-Twist by Anonycat
-Updated Nurse Redheart by StarStep
-Updated Dr. Whooves by Doctor Blade
-Royal Guard by StarStep (With male pegasi template)
-Gala Fluttershy by humle (with bonus by StarStep)
-Updated Opalescense by StarStep
-Minor updates to Soarn' by StarStep
-Updates to Blues by StarStep
-Fluttershy Stare by StarStep
-Luna jumping by Distoorted
-Big Celestia with Mail by StarStep
-Pinkie Wink by "pony" (deathpwny)
-Inky Pie by Anonycat
-Minor fix to 80's Cherilee by humle


v1.30

-When taking control and not in a game, hitting the control key (right or left depending on which player) will make the pony use it's mouseover mode.
- Much improved art for the ball and goals in games.
- Some ponies have figured out that it's better to try predict where the ball will go, instead of chasing where it is.
- Games actually end when the max score is reached (configurable in the ini file).
- New mini-game: Ping Pong Pony.  Buck the ball onto the other side of the screen to score!  Note that where your pony hits the ball from (hooves/head/body) will make it go off at different angles.  Picking more athletic ponies (faster ones) is recommended.
- Added a check to make sure that the screensaver doesn't accidentally get launched in normal mode, which could result in strange things happening.
- The "Can't pick diagonally only!" bug in the editor came back.  Fixed again...

- NEW PONIES and updated art:

-Apple Fritter by ??? (I left out the 'idle' animation though - she can only trot.)
(The original posting was anonymous)
-Nurse Redheart by Logan (She was also never given an idle animation I believe - She's been sitting in my "not finished" pony folder since May 22nd.  Thanks to Dogostar for reminding me that she and Apple Fritter existed).
- Very excellent updated Carrot Top art by Pony Noia
- Sapphire Shores by Pony Noia
- Gala Dress Pinkie by Humle
- Naked ... I mean, "cape-less" Trixie by Starly
- Fabulous Filly Rarity by RJP
- Soarin' by StarStep and Pie Eatn' by Anonycat
- Galla Pinkie by Humle!
- and dresses for the rest of the mane ponies (static images).  Thanks to StarStep
- Clyde, Sue, and Blinkie Pie by Anonycat!
- Opal by StarStep


V1.29

New ponies:

Carrot Top - By CandyBag
Pokey Pierce - By AnonyCat
(With small interactions between Gummy and Pinkie Pie)

-Right-click add pony-> random gave you a static image instead of an actual pony.  Fixed.
-If window avoidance is disabled, the two check boxes in the options menu that depend on it will be grayed out.
-Take control now works no matter what pony you have focused.
-You can now control two ponies at a time - Different keys are set for "Player 1" and "Player 2"

+ New Feature:  Mini-Game
"Hoofball!  Try to kick the ball into your opponent's goal!  You can either watch the ponies play by 
themselves, or take part by right-clicking a pony and selecting 'take control'!  Player 1 uses the 
arrow keys (movement), right shift (run), and right control (kick toward goal) keys.  Player 2 uses the 
WASD keys (movement), left shift (run), and left control (kick toward goal) keys.  Note that you can 
only kick once every two seconds!  Make it count!"

- Game Known Issues:

	Art sucks:  The ball, "goal", and scoreboard are need to be improved.
	Goalies are pretty stupid.
	Ponies get stuck if the ball is on the outer edge of the screen - drag them around to fix
	Full teams make for one big clump of ponies.

v1.28

-New RANDOM pony option!  A wild-card pony, "Random," has been added that will give you random ponies!  Works like any other in the selection menu.
-New options for window avoidance in the options menu:  Ponies can now avoid each other (more like bounce off each other), or be set to stay in any windows they are placed in.  This may not work well with lots of ponies - some may still 
escape.
-Previewing following behaviors in the editor didn't work.  It now does
-When moving diagonally, ponies can now travel in a range of angles, from 50 to 15 degrees instead of only 45 like before.
-Pony speeds can now be in partial pixels per tick:  Example: 0.5, 1.5, 2.34 instead of just 0,1,2,3.
-Celestia can now fly.
-Gummy now follows Pinkiamina as well as regular Pinkie
-Ponies that have no behaviors will no longer crash the editor.  They will instead be given a default behavior.
-You were never able to pick "Diagonal only" as a movement in the editor.  Fixed now.  In completely unrelated news, Scratch now does not move vertically...
-If for some reason no monitors are set, the first one is added as a default.  This is to help prevent issues with old settings files with new versions.

New content:
-Small new interaction between little strongheart and braeburn, thanks to Pony Noia
-New Pony, Mayor Mare, thanks to: Anonycat

Updated Art:
-Princess Luna sprites have been updated.  She also has a new sleeping behavior - thanks to anonymous
-Photo finish has a better "Da Magics!" animation and also a running one. Thanks to Pony Noia
-Soigne Folio (Photo finish minion) also has a new running animation, thanks to Pony Noia

v1.27

-Saving in the editor will no longer force an immediate reload and quit to the main menu. Instead, you can continue and the reload will occur when you close the editor yourself.
-If you didn't make any changes and close the editor, no reload will occur.
-The editor is smarter about when to ask you if you want to save changes.
-New column in the editor for behaviors:  “Don't run randomly”
	You should check this box for each behavior that shouldn't run by itself (parts of a chain, or a behavior for an interaction).  This will no longer be set automatically by the editor.

-Filly Celestia is able to walk again (what happened is I thought it would be better for her to start walking after the new interactions were done, and linked the end of those to her walking behaviors.  However, the editor said “oh, 	that's a chain!” and marked it as “skip” so it wouldn't play randomly.  The above change should prevent that in the future).

-The “Link Order” column can now show if a behavior is part of more than one chain.
-New option in the right-click menu:  “Return to menu”
-Ponies won't use sleeping behaviors when following (right Sweetie Belle???)
-Fixed a rare(?) crash where GetAppropriateBehavior was called when Current_Behavior was nothing.

-Known issue:  Saving changes then closing the editor causes a memory leak when ponies are reloaded.  Doing this several times will kill performance with lots of ponies loaded.


v1.26


-Added an option to not display warnings regarding interactions.
-Added an option to completely disable speech, including hover-over text.
-The avoidance zone ("everfree forest") wasn't working if ponies were not on your primary monitor.  Fixed.
-Ponies will no longer trigger interactions with themselves... (different copies still work, however)
-Errors will now be displayed when trying to play a sound that is in the wrong format, or with other problems.
-You can now drag effects around if you have dragging enabled in the options.
-Random speech works again!
-Pegasi will now fly up to reach follow targets instead of just walking straight up, which looked funny.

-The code has been cleaned up a bit, removing dead code and commenting areas that are not obvious in their purpose.

-Pinkie's parasprite herding interaction had a typo that caused it to ignore the reactivation delay.  Fixed
-Parasprites also follow a bit more slowly for better effect.

Art additions and changes:

-The original DJ Poni3 is no longer included.
-New ponies:
	Big Mac, thanks StarStep
	Little StrongHeart, Pony Noia
	Rose(luck), Anonymous
	Shadowbolt - Pony Noia/Glamador
	Caramel, Starly
	Waiter pony - Anonycat
	Raindrops - Starly

-New art:
	Dancing applebloom, Pony Noia
	Sitting Blues, StarStep
	Fixed filly celestia sleep - Asparagus
	updated Bonbon and Lyra - Starly
	New Hoity-Toity art - Pony Noia
	Updated Zecora (missed a bit in the last version) - RJP
	Updated Derpy - RJP


-New interactions, thanks to Pseudo Hoof
	Big Celesita/Nightmare Moon
	Rainbow Dash/Gilda

v1.25

- Black/white boxes around effects should be eliminated now.
- You can now select one pony to sleep at a time.
- You can now add ponies one at a time from the right-click menu.
- You can now have a behavior set to speed 0 and movement "none" while having a follow target.  The pony will stay still but always turn to face the target.
- Timing system has been redone - effects and behaviors should last the expected amount of time even when the system is under load and missing a few ticks of the timer.
- Parasprites will no longer get stuck in a loop (behaviors they have a target that doesn't exist don't start)
- interactions didn't match behavior names if they were uppercase - fixed
- Ponies no longer 'reset' after interactions finish - they carry out the last behavior to the end before selecting a new one.
- Multiple ponies engaging in seperate interactions at the same time would not follow the right pony.  Fixed.
- Random speech was interrupting scripted ones.  This should be reduced now.
- Ponies already in an interaction now won't start a new one with other ponies.
- Ponies were exiting interactions if they ran out of behaviors but were only targets.  Now they will stay flagged as in an interaction until the initiator exits their's.
- Interactions where checking against lists of n^2 ponies instead of n.  Fixed (slight performance boost).
- Trixie would only play her fireworks once on mouseover.  Fixed (for other ponies too).
- Changed the way ponies decide on a direction to go (shouldn't have a noticable effect other than saner code)
- You can now set a "reactivation delay" for interactions in the editor, to prevent interactions from happening too often.
- Link order in the editor is now shown as Chain_number-Link_Number (1-1,1-2,2-1,2-2,etc) to help with ponies having multiple separate chains.
- When adding a behavior in the editor, making a behavior link to another will not automatically set it to "skip"


Changed behavior types:
-twilight book reading -> sleep mode
-sweetie bell cloud sing -> sleep mode
-scoots cute basket -> sleep mode

New interactions - Pseudo Hoof
	-Luna and Filly Celestia chatting
	-Theme song singing with the mane six and big Celestia!
	-Cutie Mark Crusaders

-New pony: Blues - Anonycat
-New pony: Hoity-Toity - Pony Noia
-New Pony: Braeburn - Anonycat

-New apple bloom animations - Pony Noia
-Bigger Pinkamina Friends - Anonycat
-Fixed filly twilight -RJP
-bouncing gummy - by Anonycat
-Elsie speed running - Pony Noia
-Stella speed running - Pony Noia
-Slightly updated Lyra walking - Starly
-RBD's cloud-sleep fixed (again)


v1.24

+Added a screen saver!  See web site "Documentation" page for installation instructions.
+New "Sleep" mode - pauses all pony movement.
-Some ponies previously couldn't pass between screens.  Fixed
-a "Minor grammar gripe" with Sweetie Belle has been fixed.
-The appearance of black/white boxes around ponies and effects in Windows 7 should be reduced somewhat.
-Added more buttons on the main form to make it more obvious that you can save your setup of how many ponies of each type you want.

Updated ponies:
Big Celestia - Now with flying and idle animations.  Thanks oppl jok
Little Celestia - Now with improved standing/walking animations.  Thanks Asparagus (although I disabled the Trollestia behavior...)
Improved Rainbow sleep animation - thanks to ?
Pinkamina "friends" - Thanks, Anonypony!
Spitfire - Thanks to Rainbowdutch
Filly Twilight - Thanks RJP
Photo Finish Sounds - Thanks Rainbowdutch 
Colgate/Romana/That toothpaste Pony - Thanks RJP

(Many other ponies have been updated to work with the sleep feature - they just needed their idle animations to be set to "mouse over" - otherwise they would be stuck walking when sleep mode was used)


v1.23

-error checking wasn't enabled when loading settings.  fixed.

-The SplitWithQualifiers() function wasn't handling fields with leading spaces correctly.  The result was that you couldn't save your preferred number of 80's Cheerilees and Sweetie Belles - they both had a leading space in the name (now removed).  Fixed 

-Changed memory leak fix from previous version to prevent possible errors with images.  We were manually disposing of images when no longer needed, but other threads (like tooltip speech) may still have needed them causing a small window of opportunity for errors.

-New feature - autostart command line.  "DesktopPonies.exe autostart" will automatically launch ponies with the settings in the INI file (or defaults if no settings are there).

v1.22

-Stella's walking animation had some non-transparent parts.  Fixed
-Elise would sometimes jump around while changing animations.  Fixed
-Aloe and Zecora had broken following behaviors due to a change in the last version.  Fixed
-Photo Finish's camera (that Elise carries) should work better now.  The three animations have been combined into one.
-Cheerilee has been given back her missing "e"
-A massive memory leak in pony.paint() was pointed out by a brony.  Thanks!  This has been fixed.
-A debug line was inadvertently left in a few versions back.  Removed.
-Distance was not being calculated correctly for interactions, causing them to activate at the wrong times.  Fixed
-The start speech for the first behavior for interactions was never being played.  Photo Finish now says her "DE MAGICS" line.
-The mouse doesn't interrupt interactions anymore (unless you click on ponies).

New/updated ponies:

-80's Cheerilee
-Updated Derpy
-Sweetie Belle
-Scootalo
-Additional art for Dash
-Candy Mane
-Elsie as noted above
-Stella as noted above

v1.21

Fixes:
-You couldn't create a new interaction in the editor.  Fixed.
-You couldn't delete the last interaction for a pony.  Fixed.
-Making a pony use a specific image when following was a challenge.  Now, if the follow behavior has movement set to "all," they will always use the images assigned to it, except when stopped.
-Trying to set a behavior's speech to "none" in the editor would actually try and link it to a speech named "none", instead of making it blank.  Fixed
-Modified how following works in interactions.  Should work properly now with interactions behavior chains having multiple follow targets (goodness Elsie...)
-Effects that were very short duration and had a repeat delay of 0 (meaning play only once) would play over and over again.  Fixed

New art:
-Apple Bloom
-Cherilee
-Octavia
-Photo Finish (and her 3 helpers, Elsie, Soigne, and Stella)
	(New interaction also with Fluttershy)
-Berry Punch (with optional drunk version included...)

Updated art:
-AppleJack
-Doctor Whoof
-Twilight Sparkle

Added sounds for Pinkie and Fluttershy, if you have them enabled



V1.20

Many bug fixes to the pony editor.

Updated art:  Gummy, Derpy!


v1.19:

+New feature:  Pony Editor Gui!

-Behaviors that are part of a chain and shouldn't be used individually are no longer selected to be used when using "Take Control".  This fixes Twilight's broken behavior in that mode.
-When attempting to follow an object, but unable to due to a barrier of some kind, ponies will now sit and stare longengly at their object of desire until they can move again.  They used to just forget about it and do something else
-Effects are now enabled on mouseover
-Ponies will now try to figure out what a good place to move to would be first before teleporting out of an avoidance zone (help reduce poines going crazy all over if you set the avoidance zone too big).

Updated ponies:  Twilight (ini file fix for take_control), Luna (art), Trixie (fireworks!), RainBow Dash (now includes original PSD files, no other changes)


v1.18
Updated ponies:  Gilda, Nightmare Moon, Parasprite, Princess Luna, Trixie
Fixed ponies:  Pikamina no longer walks vertically.  Derpy walks a bit faster

New features:  
-Ponies will now "bounce" off of walls/boundries instead of selecting a new behavior.  This should help not get clumped up in corners, and just look better.
-There is now an option to avoid other program windows.  Note that this is disabled by default; find it in the options menu.
	*this may take quite a bit more CPU usage than other options*
	*note that it doesn't work well with too many ponies on the screen - they end up overlapping and obscuring each othere's view of what windows are there*



v1.17

- Sometimes, if the behavior duration didn’t exactly match the gif duration you could get both out of sync.  Fixed (pony.paint() and pony_form class change)
- Pony speaking on mouseover was broken.  Fixed
- The right click menu on ponies would often disable pony speaking.  Fixed (ponyform + options changes)
- New twilight animations.  
- You can now say “any” or “any_notcenter” for effect directions and centering.  Parasprites have been improved also as a result.
- The tooltip crash believed fixed in the last version is now fixed for good...
- Previously, coordinates specified when also specifying a pony or effect to follow were ignored.  Now, these coordinates specify the offset from the center of the target object to go to.
(meaning to can have the follow point be to the right, left, up, down, etc from the actual object.)
- “Horizontal_Vertical” never actually worked as a movement for behaviors.  Fixed.

+New Feature:  Interactions:

'InteractionName, PonyName, probability, proximity_activation_distance, {Targets}, random_or_all , {behaviors}
'
'Explaination:
'Interaction - the name of the interaction
'Ponyname - The name of the pony initiating the action
'Probability - The chance of the interaction occuring.
'        1.0 = every time the pony is in range.
'               0.001  = low chance.
'proximity - the distance the pony would have to be, or closer, to activate the 'interaction.
'        you can say "default" to leave as normal.
'{Targets} - the list, in brackets, of ponies that can be interacted with
'random_or_all - either "random" or "all"
'     random means pick one pony to interact with from the list
'    all means the interaction occurs with the entire list at once.'interaction.  "Any" keyword allowed.
'{behaviors} - the list, in brackets, of behaviors to choose from (one is picked randomly) which is activated for both the initiating pony and all selected target ponies.

Example:
Pinkie_Lures_Parasprites, "Pinkie Pie", 0.05, default, {"ParaSprite", "Princess Celestia"}, all, {parasprite_follow_circle}

v1.16 (skipped 1.15 to avoid confusion with a non-official version)

- If the tallest pony in a row on the menu screen was the first one in that row, then the placement of the images would be incorrect, and overlap the next row.  Fixed (small change to Add_to_Menu() and Main_Resize())
- Hopefully fixed a crash with the following error:
"System.ObjectDisposedException: Cannot access a disposed object.
Object name: 'PictureBox'.
at System.Windows.Forms.Control.CreateHandle()
at System.Windows.Forms.Control.get_Handle() "
... caused by a tooltip (pony speak) being active while a pony form was closed.  Modified end of Pony_Form class.
- new art - fluttershy, new Scratch, Lyra, big Celestia, multiplying parasprites, and Twilight (partially)
- Zecora's name is now Zecora.
- When moving on to a linked behavior, effects that had duration 0 (only last until behavior ends) wouldn't clear.  Fixed (change to Pony.Paint() and Effect_Form class change)
- Using the right click menu on a pony to select an option would sometimes disable effects even after the menu closed.  Fixed (change to Pony_Form.ContextMenu_ItemSelected())
- Effect duration and repeat delay values, as well as behavior durations can now be specified to the millisecond. (0.333 seconds, for example).
   (They are rounded to the nearest 1/33 of a second).
  However please be careful with this, as very low values could kill performance.
  Values of less than 0.030 are pointless as this is the max speed the program updates at.
+Sounds! (I find this to be very annoying so they are off by default).
    Note that only .WAV files are supported.

Note that the Pony.ini format has changed slightly to accommodate this feature.

'Lines for the pony to say (when hovered over, small random chance, of specific lines for         specified behaviors)

'speakingline1,name, "thing to say", "wav file to play.wav", true if this is for a behavior         and shouldn’t be ‘played randomly

'(if this is just a normal random thing to say, you can omit the name, filename, and         true/false)

Example:  AppleJack plays a sound file when she stops galloping, noticing that she         dropped apples along the way.

Normal Sound:

Speak,"Hey there sugarcube!"

Sound for a behavior:

Speak,giddyup_sound, "Yeee...", "", true

Speak,gallop_sound, "Haw...", "didn't see that one comin.wav", true

For the behaviors that speak, change the line from containing the actual text, to the         name of the “speak” line that has it:
   

Behavior,giddyup, 0.05, 1, 1, 1, rear_right.gif, rear_left.gif, None, gallop,                 giddyup_sound, , false,0,0,""

Behavior,gallop, 0.05, 3, 1, 6, gallop_right.gif, gallop_left.gif, Diagonal_Only, , gallop_sound, , true,0,0,""


v1.14

- Effects weren't showing if there was a window between them and the desktop.  fixed
- Effects are now disabled if the right-click menu is active to prevent it from closing due to them
- Users were getting an error: "Can't save to disk.  Details: Unable to translate Unicode character \uDF6C at index 65 to specified code page."
This should be fixed now as the save file won't use ANSI code pages by default, but instead uses UTF32 (unicode).

- if you tried to save settings after already having ponies displayed, and did not have at least one of each pony on the screen, saving would fail. fixed.
- Effects now only close on behavior change if their duration is 0. (Dash’s rainboom will stick around for a while even if she stops because she can’t go any further)
- Effect line format in poni.ini files has changed.  You now specify settings for going left and right.  (See Rainbow’s updated file for examples.)

+ Updated Rainbow Dash!
+ Updated Pinkie Pie!
+ Updated Rarity!

v1.13

-”Take Control” should now do a better job of selecting animations to play.
- The pony right click menu now changes the menu from "Take control" to "release control" if you already have control...
- Ponies will try to get your attention if you attempt to interact with a pony when in control of another.
- The ponies have now learned how to go to specific points on the screen and to follow one another around (for fun: try placing some parasprites with some applejacks!)
- New ponies:  Aloe, Lotus, and Zecora!

****PONY.INI BEHAVIOR CONFIG CHANGED SLIGHTLY****
****Custom ponies will have to be modified to work****

-    All behaviors with allowed movements of NONE or MouseOver should have their speed set to 0 for take control to work
-    ***All behaviors must list both right and left images in that order. (removes the need to have two similar behaviors for left/right)***
-    Old linked behaviors now need 3 new parameters to work:   ,0,0, “”
    (comma, zero, comma, zero, open quote, closed quote).


v1.12

- smaller mouse_over images causing infinite loops when the resumed image is bigger. (more pony spasms when mouse cursor is near) - Fixed
-Trixie's mouseover has been set to fireworks, because that's what she'd do when getting attention
-Improved graphics for main cast members that didn't already have them (most notably pinkie).
-Ponies will not talk with the right click menu was open (they were stealing focus and closing it).
+Newer Bon Bon
+parasprites added
+spike added
+ New feature:  Effects (see AJ’s ini file for details):

    Effect Examples:

'The following makes AJ drop 1 apple per second when she gallops that stays
'behind for 3 seconds. (she's a silly pony, huh?)  This is the only effect currently in use, because
‘a bad apple graphic is all i could make.
Effect, "Apple Drop", gallop_r, apple.png, 3, 1, bottom_left, center, false
Effect, "Apple Drop", gallop_l, apple.png, 3, 1, bottom_right, center, false

'When Dashing, Rainbow Dash leaves behind a sonic rainboom which stays in place.
'The delay_Before_next is 0 meaning don't repeat to leave only one.
'The rainboom animation sticks around for 5 seconds (the gif animation should be the same duration).
'The image is created to the right of rainbow as she moves left,
'and in centered on the left of the image, so it does not overlap with her.
‘(rainboom.gif not included)
Effect, "Sonic Rainboom_left", RainBow_Dash_Left, Rainboom.gif, 5, 0, right,left, false

'Rainbow dash leaves a rainbow trail behind her, that consists of two parts:
'the first is a trail that is animated to fade over time, and stays behind her
'  (getting the timing right will be tricky)
'the second is a trail that follows rainbow to allows the appearance of a single
'continuous effect
‘(working rainbow trail images not included)
Effect, "Rainbow Trail_left", dash_l, left_rainbow.gif, 2, 1, right, left, false
Effect, "Rainbow Trail_left_follow", dash_l, left_rainbow_follow.png, 0, 0, right, left, true

v1.10 -> v1.11

- Ponies sometimes flicker when changing behaviors. - Fixed.
- HUGE performance improvement for those with Windows Aero (win7 and Vista) on and lots of ponies on screen.
- Lyra no longer moves vertically, because the jumping was freaking Bon Bon out.
-In return, Bon Bon agreed to face the right way in the menu.

- Ponys initialize randomly over all allowed screens one at a time, instead of
all at once all in one place.

- Shortened durations for all ponies - it looks like everyone was mostly copying the initial Derpy file.  Do you really think Pinkie Pie can stand still for 15 seconds?  I don't.   This should also help with ponies ending up on screen edges.

History:

v1.01 -> v1.02

+Added "linked behaviors."  See Derpy's INI file for an example.
-Fixed the graphics for all ponies but twilight so they won't "float-walk" anymore

v1.02 -> v1.03

-Fixed linked behaviors - only the first one would link (exit sub <> exit for, oops)

v1.03 -> v1.04

New features:

-That folder separator thingy that broke things for people crazy enough to run under linux+mono is fixed (i think, can't try it for myself...)
+Cursor avoidance. Ponies will avoid running under the cursor, and stop still if you hover over them.
+Monitor selection - if you have more than one monitor, you can select which ones ponies will go to, or all!
+"The Everfree forest" - you can designate a no-pony-zone on your screen that ponies will never enter!

...and, all of the ponies are added that i've seen until now!

v1.04 -> v1.05

A brony, ‘Velocity’ generously donated beautifying code for the UI!  ...and then I muddied it with the controls from v1.04...

v.1.05 -> v1.06

The horribleness of the last version should be reduced.
I think the crashing was caused by SelectBehavior() being recursive, and people having bad luck (or too many ponies).

v.1.06 -> v1.07:

- mouse_over doesn't play gifs??!?!? - FIXED
- now with 50% less pony talking by default
- talking interrupts take_control - FIXED

New options menu (you can even leave it open and change settings on the fly)!

Has the following options you can change:
- optional cursor avoidance - also improved.
- cursor avoidance zone size
- pony talk chance
- max ponies
- Pony dragging disable option

Known bugs:  Settings options, then closing, and reopening the options menu through right-click resets settings to default.

v1.07 -> v1.08

- Added new graphics for a bunch of ponies.  Tell me if I am missing any updates!
- Menu UI fixes provided by 'Velocity'

- When you "take control" of a pony, the mouse will still block movement - fixed! (cursor avoidance is disabled for controled ponies.  
(Also note that taking control blocks the right click menu of other ponies - the one in control will keep trying to take focus back)

- Settings will now stay even on closing/reopening the options menu.

+ New feature:  You can save your settings (including # of each type of pony) in the options menu!  This is saved in a file named "Settings.ini" in the same folder as Desktop Ponies.exe

This file is automatically loaded (if present) on startup.

Known issues:  Ponies sometimes get stuck in the corners of the screen under certain conditions.  Reason:  messy code.  Cleaning up now.

v1.08 -> v1.09

-Misc typos in ALL of the pony.ini’s fixed
-AJ had a backwards animation, fixed
-AJ was galloping way too often (in my opinion), so toned her down a bit.
-Ponies falling asleep at the corners of the screen - fixed  (separated and cleaned up code for cursor halting - it was a mess...)

v1.09 -> v1.10

v1.09 had a bug where ponies could not escape from a screen they should not have been on, or an ‘everfree forest zone’.  They would just spaz out.  Fixed now.

-----------------------------------------------------------------------------------------------------------

To be added in the (far?) future(?):

-Pony Interactions
-------------------------------------------------------------------------------------------------------------

Want to e-mail me? : random.anonymous.pony@gmail.com

PGP public key (to verify files are original from me, the author, if you care):

-----BEGIN PGP PUBLIC KEY BLOCK-----
Version: GnuPG v1.4.11 (MingW32)

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
=0466
-----END PGP PUBLIC KEY BLOCK-----

