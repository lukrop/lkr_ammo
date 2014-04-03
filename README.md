lkr_ammo
==============
This addon has two goals. The first is to bring the ballistics of several rounds to a realistic level. I'm
using Spartan0536's data provided in his thread in the BI Forums [1], to create rounds and magazines. Big thanks to him at this point!

The second goal, for me personally the more important one, is to unify/centralize rounds and magazines. As of now there are several great weapon addons which are all using different types of
rounds and magazines, mostly created by the addon itself. To reduce redundancy with the most common rounds and magazines this addon provides a solid base
and I encourage every addon creator to use the magazines provided by the addon.

To get you started I'll be adding several optional configs for some common weapon addons.

We start with 5.56x45 and 9x19, as soon as Spartan0536 provides more ballistic configs I'll add more rounds/magazines.

Please note that this mod is **incompatible with tmr_ballistics.pbo**. You can still use TMR but you'll have
to remove tmr_ballistics.pbo.

Discussion and updates: http://forums.bistudio.com/showthread.php?174095-lkr_ammo

[1] http://forums.bistudio.com/showthread.php?173466-ArmA-III-Ballistics-Overhaul

lkr_556x45_nato.pbo
--------------
This addon adds two new rounds and updates the ballistics of the default 5.56x45 round. It also adds the new magazines to
several ammo boxes and makes the TRG-20, the TRG-21, the SDAR and the Mk20 compatible with the new magazines.

In the words of Spartan0536 regarding the new round types:

 > __M855A1 EPR__
 > Very lethal against unarmored targets, kills in 1 shot to the chest out to 350m-400m with some variation, armor penetration on level III with SAAPI
 > plates is about 4 shots @ 350m, this round is a general purpose round like its real life counterpart, it has the best penetration rate of
 > all 3 rounds but it is yaw dependent on damage so it also has the lowest hit factor to compensate for this as best as possible.
 >
 > __Mk 318 Mod 0__
 > Very lethal against unarmoed targets, kills in 1 shot to the chest out to 400m, armor penetration on level III with SAAPI plates is about
 > 5 shots @ 350m, very similar performance at medium range when comparing to Mk262 Mod 1, like its real life counterpart this round is most
 > effective at ranges from 0-300m and is designed for enhanced performance out of shorter barrel rifles.
 >
 > __MK262 Mod 1__
 > VERY lethal against unarmored targets, kills in 1 shot to the chest easily out to 400m, armor penetration on level III with SAAPI plates is 
 > about 5 shots at 350m, default 5.56 was killing in 7-8 at the same range

### Classnames:

Rounds:
````
B_556x45_Mk318_Ball
B_556x45_Mk262_Ball
````
Magazines:
````
30Rnd_556x45_Mk318_Stanag
30Rnd_556x45_Mk262_Stanag
100Rnd_556x45_Pouch
100Rnd_556x45_Pouch_Tracer
200Rnd_556x45_Box
200Rnd_556x45_Box_Tracer
````

lkr_9x19_parabellum.pbo
--------------
This pbo introduces three new rounds, the _9x19 Full Metal Jacket Flat Tip_, the _9x19 Jacketed Hollow Point_ as well as the
_9x19 Full Metal Jacket Penetrator +P+_. It makes the P07, the Rook40, the Sting and the PDW2000 compatible with the new magazines and adds
the new magazines to the default ammo box of each faction.

### Classnames:

Rounds:
````
B_9x19_FMJFT
B_9x19_JHP
B_9x19_FMJP
````
Magazines:
````
16Rnd_9x19_FMJFT_Mag
16Rnd_9x19_JHP_Mag
16Rnd_9x19_FMJP_Mag
30Rnd_9x19_FMJFT_Mag
30Rnd_9x19_JHP_Mag
30Rnd_9x19_FMJP_Mag
````

lkr_762x51_nato.pbo
--------------
This pbo introduces two new rounds and modifies the standard 7.62x51 by BIS. The default 7.62x51
is marked as a M80A1 cartridge. One new round is a Mk316 Mod 0 cartridge for more accuracy and the other is the
M993 armor-piercing round. The addon also makes the Mk18 and the Rahim compatible with the new magazines.

It also adds 5Rnd and 100Rnd magazines for use in different weapon addons.

### ATTENTION
**The ballistic information for the 7.62x51 M80A1, M992 and Mk316 Mod 0 cartridges are only estimated (no extensive research/calculations like the
work of Spartan0536).** We'll have to wait until/if Spartan0536 releases any ballistic data.


### Classnames:

Rounds:
````
B_762x51_Mk316_Ball
B_762x51_M993_Ball
````

Magazines:
````
5Rnd_762x51_Mag
5Rnd_762x51_Mag_Tracer
5Rnd_762x51_Mk316_Mag
5Rnd_762x51_M993_Mag
10Rnd_762x51_Mag_Tracer
10Rnd_762x51_Mk316_Mag
10Rnd_762x51_M993_Mag
20Rnd_762x51_Mag_Tracer
20Rnd_762x51_Mk316_Mag
20Rnd_762x51_M993_Mag
20Rnd_762x51_Stanag
20Rnd_762x51_Stanag_Tracer
20Rnd_762x51_Mk316_Stanag
20Rnd_762x51_M993_Stanag
100Rnd_762x51_Box
100Rnd_762x51_Box_Tracer
````

lkr_545x39_soviet.pbo
--------------
This pbo introduces the 5.45x39mm Soviet ammunition with 4 new rounds. These are the *5N7* Ball, the *7T3* Tracer, the *7N10* enhanced penetration and the
*7N22* armor-piercing rounds. The magazines are designed for use in AK-74 platforms.

### ATTENTION
The ballistics of all these rounds are only estimated to my best knowledge.

### Classnames:

Rounds:
````
B_545x39_5N7_Ball
B_545x39_7T3_Tracer
B_545x39_7N10_Ball
B_545x39_7N22_Ball
````

Magazines:
````
30Rnd_545x39_Mag
30Rnd_545x39_Mag_Tracer
100Rnd_545x39_Drum
100Rnd_545x39_Drum_Tracer
30Rnd_545x39_7N10_Mag
30Rnd_545x39_7N22_Mag
````

lkr_762x39_soviet.pbo
--------------
This pbo introduces the 7.62x39mm Soviet ammunition, used in the AK47/AKM platform. It adds the *57-N-231* ball round and
the *57-N-231P* tracer round. Both of them in 30 and 100 round magazines.

### ATTENTION
The ballistics of all these rounds are only estimated to my best knowledge.

### Classnames:

Rounds:
````
B_762x39_57N231_Ball
B_762x39_57N231P_Tracer
````

Magazines:
````
30Rnd_762x39_Mag
30Rnd_762x39_Mag_Tracer
100Rnd_762x39_Drum
100Rnd_762x39_Drum_Tracer
````

lkr_762x54_r.pbo
--------------
This pbo introduces the 7.62x54mmR ammunition used in platforms such as the PKM or the SVD. It adds 3 new rounds.
The *57-N-323S* ball round, the *7T2* tracer round and the *7N1* sniper load round.

### ATTENTION
The ballistics of all these rounds are only estimated to my best knowledge.

### Classnames:

Rounds:
````
B_762x54_57N323S_Ball
B_762x54_7T2_Tracer
B_762x54_7N1_Ball
````

Magazines:
````
10Rnd_762x54_Mag
10Rnd_762x54_Mag_Tracer
10Rnd_762x54_7N1_Mag
100Rnd_762x54_Box
100Rnd_762x54_Box_Tracer
````

Macros
--------------
Thanks to the suggestion of da12thMonkey it's now possible to use macros to make it easier to
add magzines to the magazines[] array of a weapon. To use the macros you'll simply have to include
the corresponding include file.

### 5.45x39 Soviet:
``#include "\lkr_545x39_Soviet\macros.hpp"``
````
LKR_545x39_SOVIET_MAGS
LKR_545x39_SOVIET_DRUMS
````

### 5.56x45 NATO:
``#include "\lkr_556x45_NATO\macros.hpp"``
````
LKR_556x45_NATO_MAGS
LKR_556x45_NATO_BELTS
````

### 7.62x39 Soviet:
``#include "\lkr_762x39_Soviet\macros.hpp"``
````
LKR_762x39_SOVIET_MAGS
LKR_762x39_SOVIET_DRUMS
````

### 7.62x51 NATO:
``#include "\lkr_762x51_NATO\macros.hpp"``
````
LKR_762x51_NATO_MAGS
LKR_762x51_NATO_BELTS
LKR_762x51_NATO_5RND_MAGS
LKR_762x51_NATO_10RND_MAGS
````

### 7.62x54 R:
``#include "\lkr_762x54_R\macros.hpp"``
````
LKR_762x54_R_10RND_MAGS
LKR_762x54_R_BELTS
````

### 9x19 Parabellum:
``#include "\lkr_9x19_Parabellum\macros.hpp"``
````
LKR_9x19_PARABELLUM_15RND_MAGS
LKR_9x19_PARABELLUM_16RND_MAGS
LKR_9x19_PARABELLUM_17RND_MAGS
LKR_9x19_PARABELLUM_30RND_MAGS
````

Hit plus optional files
--------------
These optional files add the constant of 5 to every rounds hit value. The 9x19 rounds hit values get a even higher constant of 7 added.

Optional .pbos
--------------
The following .pbos make the specific addon compatible with the new rounds/magazines. They also serve as example
for mod authors.

* lkr_ammo_fhq_m4.pbo
* lkr_ammo_mas_natosfweps.pbp
* lkr_ammo_r3f_armes.pbo
* lkr_ammo_rh_m4.pbo
* lkr_ammo_rhard_mk18.pbo
* lkr_ammo_u100.pbo
* lkr_ammo_sud_russians.pbo
* lkr_ammo_hlcmods_ak.pbo
* lkr_ammo_hit_plus_9x19.pbo
* lkr_ammo_hit_plus_nato.pbo
* lkr_ammo_hit_plus_soviet.pbo
