lkr_ammo
==============
This addon has two goals. The first is to bring the ballistics of several rounds to a realistic level. I'm
using Spartan0536's data provided in his thread in the BI Forums [1], to create rounds and magazines. Big thanks to him at this point!

The second goal is to unify/centralize rounds and magazines. As of now there are several great weapon addons which are all using different types of
rounds and magazines, mostly created by the addon itself. To reduce redundancy with the most common rounds and magazines this addon provides a solid base
and I encourage every addon creator to use the magazines provided by the addon.

To get you started I'll be adding several optional configs for some common weapon addons.

We start with 5.56x45 and as soon as Spartan0536 provides more ballistic configs I'll add more rounds/magazines.

[1] http://forums.bistudio.com/showthread.php?173372-ArmA-III-5-56x45mm-Realistic-Ballistics

lkr_556x45_nato.pbo
--------------
This addon adds two new rounds and updates the ballistics of the default 5.56x45 round.
In the words of Spartan0536:

__MK262 Mod 1__
VERY lethal against unarmored targets, kills in 1 shot to the chest easily out to 400m, armor penetration on level III with SAAPI plates is about 5 shots at 350m, default 5.56 was killing in 7-8 at the same range

__Mk 318 Mod 0__
Very lethal against unarmoed targets, kills in 1 shot to the chest out to 400m, armor penetration on level III with SAAPI plates is about 5 shots @ 350m, very similar performance at medium range when comparing to Mk262 Mod 1, like its real life counterpart this round is most effective at ranges from 0-300m and is designed for enhanced performance out of shorter barrel rifles.

__M855A1 EPR__
Very lethal against unarmored targets, kills in 1 shot to the chest out to 350m-400m with some variation, armor penetration on level III with SAAPI plates is about 4 shots @ 350m, this round is a general purpose round like its real life counterpart, it has the best penetration rate of all 3 rounds but it is yaw dependent on damage so it also has the lowest hit factor to compensate for this as best as possible.

### Classnames:

New rounds:
````
B_556x45_Mk318_Ball
B_556x45_Mk318_Ball_Tracer_Green
B_556x45_Mk318_Ball_Tracer_Red
B_556x45_Mk318_Ball_Tracer_Yellow
B_556x45_Mk262_Ball
B_556x45_Mk262_Ball_Tracer_Green
B_556x45_Mk262_Ball_Tracer_Red
B_556x45_Mk262_Ball_Tracer_Yellow
````
New magazines:
````
30Rnd_556x45_Mk318_Stanag
30Rnd_556x45_Mk318_Stanag_Tracer_Green
30Rnd_556x45_Mk318_Stanag_Tracer_Red
30Rnd_556x45_Mk318_Stanag_Tracer_Yellow
30Rnd_556x45_Mk262_Stanag
30Rnd_556x45_Mk262_Stanag_Tracer_Green
30Rnd_556x45_Mk262_Stanag_Tracer_Red
30Rnd_556x45_Mk262_Stanag_Tracer_Yellow
````
