class CfgPatches
{
    class ld3k_gm6_lynx_127x99_compat_ace3
    {
        requiredAddons[]=
        {
            "A3_Weapons_F",
            "A3_Weapons_F_Acc"
        };
        requiredversion=0.1;
        units[]=
        {
            "Weapon_ld3k_GM6_Lynx_127x99",
            "Weapon_ld3k_GM6_Lynx_127x99_camo",
            "Weapon_ld3k_GM6_Lynx_127x99_ghex",
            "Item_ld3k_gm6_optic_LRPS_Night_Vision",
            "Item_ld3k_gm6_optic_LRPS_Night_Vision_tna_F",
            "Item_ld3k_gm6_optic_LRPS_Night_Vision_ghex_F"
        };
        weapons[]=
        {
            "ld3k_GM6_Lynx_127x99",
            "ld3k_GM6_Lynx_127x99_camo",
            "ld3k_GM6_Lynx_127x99_ghex",
            "ld3k_gm6_optic_LRPS_Night_Vision",
            "ld3k_gm6_optic_LRPS_Night_Vision_tna_F",
            "ld3k_gm6_optic_LRPS_Night_Vision_ghex_F"
        };
    };
};
class SlotInfo;
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
    class compatibleItems
    {
        optic_Yorris=0;
        ld3k_gm6_optic_LRPS_Night_Vision=1;
        ld3k_gm6_optic_LRPS_Night_Vision_tna_F=1;
        ld3k_gm6_optic_LRPS_Night_Vision_ghex_F=1;
    };
};
class CowsSlot: SlotInfo
{
    compatibleItems[]=
    {
        "ld3k_gm6_optic_LRPS_Night_Vision",
        "ld3k_gm6_optic_LRPS_Night_Vision_tna_F",
        "ld3k_gm6_optic_LRPS_Night_Vision_ghex_F",
        "optic_Nightstalker",
        "optic_tws",
        "optic_tws_mg",
        "optic_NVS",
        "optic_DMS",
        "optic_LRPS",
        "optic_ams",
        "optic_AMS_snd",
        "optic_AMS_khk",
        "optic_KHS_blk",
        "optic_KHS_tan",
        "optic_KHS_hex",
        "optic_KHS_old",
        "optic_SOS",
        "optic_MRCO",
        "optic_Arco",
        "optic_aco",
        "optic_ACO_grn",
        "optic_aco_smg",
        "optic_ACO_grn_smg",
        "optic_hamr",
        "optic_Holosight",
        "optic_Holosight_smg",
        "optic_Hamr_khk_F",
        "optic_SOS_khk_F",
        "optic_Arco_ghex_F",
        "optic_Arco_blk_F",
        "optic_DMS_ghex_F",
        "optic_ERCO_blk_F",
        "optic_ERCO_khk_F",
        "optic_ERCO_snd_F",
        "optic_LRPS_ghex_F",
        "optic_LRPS_tna_F",
        "optic_Holosight_blk_F",
        "optic_Holosight_khk_F",
        "optic_Holosight_smg_blk_F",
        "optic_Holosight_smg_khk_F",
        "optic_Arco_AK_blk_F",
        "optic_Arco_AK_lush_F",
        "optic_Arco_AK_arid_F",
        "optic_DMS_weathered_F",
        "optic_DMS_weathered_Kir_F",
        "optic_Arco_lush_F",
        "optic_Arco_arid_F",
        "optic_Holosight_lush_F",
        "optic_Holosight_arid_F"
    };
};
class CowsSlot_Rail: CowsSlot
{
    class compatibleItems
    {
        ld3k_gm6_optic_LRPS_Night_Vision=1;
        ld3k_gm6_optic_LRPS_Night_Vision_tna_F=1;
        ld3k_gm6_optic_LRPS_Night_Vision_ghex_F=1;
        optic_Nightstalker=1;
        optic_tws=1;
        optic_tws_mg=1;
        optic_NVS=1;
        optic_DMS=1;
        optic_LRPS=1;
        optic_ams=1;
        optic_AMS_snd=1;
        optic_AMS_khk=1;
        optic_KHS_blk=1;
        optic_KHS_tan=1;
        optic_KHS_hex=1;
        optic_KHS_old=1;
        optic_SOS=1;
        optic_MRCO=1;
        optic_Arco=1;
        optic_aco=1;
        optic_ACO_grn=1;
        optic_aco_smg=1;
        optic_ACO_grn_smg=1;
        optic_hamr=1;
        optic_Holosight=1;
        optic_Holosight_smg=1;
        optic_Hamr_khk_F=1;
        optic_SOS_khk_F=1;
        optic_Arco_ghex_F=1;
        optic_Arco_blk_F=1;
        optic_DMS_ghex_F=1;
        optic_ERCO_blk_F=1;
        optic_ERCO_khk_F=1;
        optic_ERCO_snd_F=1;
        optic_LRPS_ghex_F=1;
        optic_LRPS_tna_F=1;
        optic_Holosight_blk_F=1;
        optic_Holosight_khk_F=1;
        optic_Holosight_smg_blk_F=1;
        optic_Holosight_smg_khk_F=1;
        optic_DMS_weathered_F=1;
        optic_DMS_weathered_Kir_F=1;
        optic_Arco_lush_F=1;
        optic_Arco_arid_F=1;
        optic_Arco_AK_blk_F=1;
        optic_Arco_AK_lush_F=1;
        optic_Arco_AK_arid_F=1;
        optic_Holosight_lush_F=1;
        optic_Holosight_arid_F=1;
    };
};
class CfgAmmo
{
    class BulletBase;
    /*class B_127x99_Ball: BulletBase // official BI tool All-in-one Config Arma3 2.19.152606 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
    {
        hit=30;
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_127";
        visibleFire=8;
        audibleFire=120;
        dangerRadiusBulletClose=12;
        dangerRadiusHit=16;
        suppressionRadiusBulletClose=8;
        suppressionRadiusHit=12;
        cost=5;
        airLock=1;
        caliber=2.6;
        typicalSpeed=880;
        timeToLive=10;
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        tracerScale=1.2;
        tracerStartTime=0.075;
        tracerEndTime=1;
        airFriction=-0.00086;
        class CamShakeExplode
        {
            power=3.60555;
            duration=0.8;
            frequency=20;
            distance=10.8167;
        };
        class CamShakeHit
        {
            power=13;
            duration=0.4;
            frequency=20;
            distance=1;
        };
    };
    class B_127x99_Ball_Tracer_Red: B_127x99_Ball
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class B_127x99_Ball_Tracer_Green: B_127x99_Ball
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class B_127x99_Ball_Tracer_Yellow: B_127x99_Ball
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };
    class B_127x99_SLAP: B_127x99_Ball
    {
        hit=50;
        indirectHit=0;
        indirectHitRange=0;
        caliber=3.4;
        typicalSpeed=1215;
        airFriction=-0.00036;
        cost=15;
        class CamShakeExplode
        {
            power=4.47214;
            duration=0.8;
            frequency=20;
            distance=13.4164;
        };
        class CamShakeHit
        {
            power=20;
            duration=0.4;
            frequency=20;
            distance=1;
        };
    };
    class B_127x99_SLAP_Tracer_Red: B_127x99_SLAP
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class B_127x99_SLAP_Tracer_Green: B_127x99_SLAP
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class B_127x99_SLAP_Tracer_Yellow: B_127x99_SLAP
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };*/
    class ld3k_B_127x99_Ball_M33: BulletBase // Barrett 661gr M33 Ball https://barrett.net/products/accessories/ammunition/50bmg/
    {
        ACE_caliber=12.98; // CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-i/50-browning-en.pdf
        ACE_bulletLength=58.42; // 2.3"
        ACE_bulletMass=42.832; // 661gr
        ACE_ammoTempMuzzleVelocityShifts[]={-18.7,-18.2,-16.6,-14,-10.4,-5.7,0,6.8,14.6,23.4,33.3}; // Same curve default ACE_ammoTempMuzzleVelocityShifts. Muzzle velocity shift 0m/s ICAO conditions (15°C, 1013.25hPa, 0%)
        ACE_ballisticCoefficients[]={0.62}; // 2750fps 29" https://barrett.net/products/accessories/ammunition/50-bmg-archive/
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={762,838,853,871,903}; // 2500, 2750, 2800, 2858, 2961fps https://barrett.net/products/accessories/ammunition/50-bmg-archive/
        ACE_barrelLengths[]={508,736.6,812.8,914.4,1143}; // 20, 29, 32, 36, 45" https://barrett.net/products/accessories/ammunition/50-bmg-archive/
        ace_vehicle_damage_incendiary=0.2; // ACE3
        hit=30; // 17465 Joules
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_127";
        visibleFire=8;
        audibleFire=120;
        dangerRadiusBulletClose=12;
        dangerRadiusHit=16;
        suppressionRadiusBulletClose=8;
        suppressionRadiusHit=12;
        cost=5;
        airLock=1;
        caliber=2.6; // SD 0.362 lb/in2
        typicalSpeed=903;
        timeToLive=10;
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        tracerScale=1.2;
        tracerStartTime=0.23; // Visible 200m 1500m, 43g MV 903m/s ICAO according to https://www.nammo.com/, ToF 200m 0.23s (Strelok Pro), B_127x99_Ball 0.075
        tracerEndTime=2.71; // Visible 200m 1500m, 43g MV 903m/s ICAO according to https://www.nammo.com/, ToF 1500m 2.71s (Strelok Pro), B_127x99_Ball 1
        airFriction=-0.00065856; // airFrictionAnalysis.txt in docs folder
        class CamShakeExplode
        {
            power=3.60555;
            duration=0.8;
            frequency=20;
            distance=10.8167;
        };
        class CamShakeHit
        {
            power=13;
            duration=0.4;
            frequency=20;
            distance=1;
        };
    };
    class ld3k_B_127x99_Ball_M33_Tracer_Red: ld3k_B_127x99_Ball_M33
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class ld3k_B_127x99_Ball_M33_Tracer_Green: ld3k_B_127x99_Ball_M33
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class ld3k_B_127x99_Ball_M33_Tracer_Yellow: ld3k_B_127x99_Ball_M33
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };
    class ld3k_B_127x99_Ball_M33_Tracer_IR: ld3k_B_127x99_Ball_M33
    {
        tracerScale=0.6; // IR dim tracer
        tracerStartTime=0.23; // Visible 200m 1000m, 43g MV 903m/s ICAO according to https://www.nammo.com/, ToF 200m 0.23s (Strelok Pro), B_127x99_Ball 0.075
        tracerEndTime=1.51; // Visible 200m 1000m, 43g MV 903m/s ICAO according to https://www.nammo.com/, ToF 1000m 1.51s (Strelok Pro), B_127x99_Ball 1
        nvgOnly=1;
    };
    class ld3k_B_127x99_Ball_AMAX: ld3k_B_127x99_Ball_M33 // https://www.hornady.com/ammunition/rifle/50-bmg-750-gr-a-max-match#!/
    {
        ACE_bulletLength=64.77; // 2.550" https://static.hornady.media/presscenter/docs/1410998610-50-BMG-750gr-AMAX.pdf
        ACE_bulletMass=48.6; // 750gr
        ACE_muzzleVelocityVariationSD=0.2; // ACE3 https://github.com/acemod/ACE3/blob/master/addons/ballistics/CfgAmmo.hpp#L689
        ACE_ballisticCoefficients[]={1.0362}; // ASM BC 1.050 2815fps (36"), ICAO 1.03618 826m/s (29") https://static.hornady.media/presscenter/docs/1410998610-50-BMG-750gr-AMAX.pdf
        ACE_muzzleVelocities[]={751,826,840,858,889}; // 2463, 2709, 2757, 2815, 2917fps
        hit=33; // 19208 Joules
        caliber=3; // SD 0.41 lb/in2, ACE3 https://github.com/acemod/ACE3/blob/master/addons/ballistics/CfgAmmo.hpp#L685
        typicalSpeed=889;
        airFriction=-0.00039574; // airFrictionAnalysis.txt in docs folder
    };
    class ld3k_B_127x99_Ball_M903_SLAP: ld3k_B_127x99_Ball_M33 // M903 SLAP
    { // Very high M903 SLAP BC 1.101 with data below, change for M962 SLAP-T BC 0.735 more coherent with .30" projectile and 29" barrel muzzle velocity.
        // ACE_caliber=7.7; // 0.303" https://www.1919a4.com/cdn-cgi/image/format=auto,onerror=redirect,width=1920,height=1920,fit=scale-down/https://www.1919a4.com/attachments/4-83-png.134461/
        // ACE_bulletLength=37; // 1.457" https://www.reddit.com/media?url=https%3A%2F%2Fpreview.redd.it%2F89pc3p78cm561.jpg%3Fauto%3Dwebp%26s%3Db42d11b49565e34f7adb561f3fab6821ac34d6b0
        // ACE_bulletMass=22.6; // 348.77gr https://www.1919a4.com/cdn-cgi/image/format=auto,onerror=redirect,width=1920,height=1920,fit=scale-down/https://www.1919a4.com/attachments/4-83-png.134461/
        // ACE_ammoTempMuzzleVelocityShifts[]={-18.7,-18.2,-16.6,-14,-10.4,-5.7,0,6.8,14.6,23.4,33.3}; // Same curve default ACE_ammoTempMuzzleVelocityShifts. Muzzle velocity shift 0m/s ICAO conditions (15°C, 1013.25hPa, 0%)
        // ACE_ballisticCoefficients[]={1.101}; // muzzle velocity 4000fps barrel length 45", ToF 1200m 1.2s, ToF 2500m 3.2s (1.082 ASM) "Marine Corps Warfighting Publication (MCWP) 3-15.1, Machine Guns and Machine Gun Gunnery" https://www.1919a4.com/cdn-cgi/image/format=auto,onerror=redirect,width=1920,height=1920,fit=scale-down/https://www.1919a4.com/attachments/4-83-png.134461/
        // ACE_ballisticCoefficients[]={0.866}; // for test distance in Yards: muzzle velocity 4000fps barrel length 45", ToF 1200yards 1.14s, ToF 2500yards 3.2s (0.851 ASM)
        // ACE_ballisticCoefficients[]={0.703}; // for test distance in Yards: muzzle velocity 4000fps barrel length 45", ToF 1200yards 1.2s, ToF 2500yards 3.74s (0.690 ASM)
        // ACE_velocityBoundaries[]={};
        // ACE_standardAtmosphere="ICAO";
        // ACE_dragModel=1;
        // ACE_muzzleVelocities[]={1029,1132,1152,1177,1219}; // 3377, 3715, 3781, 3860, 4000fps (1219m/s) 45"
        // ACE_barrelLengths[]={508,736.6,812.8,914.4,1143}; // 20, 29, 32, 36, 45"
        ACE_caliber=7.5; // 0.295" https://www.reddit.com/media?url=https%3A%2F%2Fpreview.redd.it%2F89pc3p78cm561.jpg%3Fauto%3Dwebp%26s%3Db42d11b49565e34f7adb561f3fab6821ac34d6b0
        ACE_bulletLength=36.8; // 1.409" https://www.reddit.com/media?url=https%3A%2F%2Fpreview.redd.it%2F89pc3p78cm561.jpg%3Fauto%3Dwebp%26s%3Db42d11b49565e34f7adb561f3fab6821ac34d6b0
        ACE_bulletMass=23.166; // 357.5gr (355, 360gr) "Army Ammunition, Data Sheets Small Caliber Ammunition" https://www.inetres.com/gp/military/infantry/mg/50_ammo.html
        ACE_ballisticCoefficients[]={0.735}; // M962 SLAP-T, ballistic app EBC V2 estimated muzzle velocity 3720fps (1134m/s) (ASM 0.723), ballistic data https://static.wikia.nocookie.net/guns/images/8/83/Slaptrajectory.jpg/revision/latest?cb=20110101063514
        ACE_muzzleVelocities[]={1029,1132,1152,1177,1219}; // 3377, 3715, 3781, 3860, 4000fps (1219m/s) 45"
        ace_vehicle_damage_incendiary=0.8; // ACE3
        hit=50;
        caliber=3.4;
        typicalSpeed=1219;
        airFriction=-0.00051591; // airFrictionAnalysis.txt in docs folder
        cost=15;
        class CamShakeExplode
        {
            power=4.47214;
            duration=0.8;
            frequency=20;
            distance=13.4164;
        };
        class CamShakeHit
        {
            power=20;
            duration=0.4;
            frequency=20;
            distance=1;
        };
    };
    class ld3k_B_127x99_Ball_M962_SLAP_Tracer_Red: ld3k_B_127x99_Ball_M903_SLAP // M962 SLAP-T
    {
        ACE_bulletLength=41.4; // 1.63" https://www.snipershide.com/shooting/threads/slap-rounds.7149881/
        ACE_bulletMass=23.004; // 355gr (350, 360gr) "Army Ammunition, Data Sheets Small Caliber Ammunition" https://www.inetres.com/gp/military/infantry/mg/50_ammo.html
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
        tracerScale=1; // .30" projectile
        tracerStartTime=0.01; // No start tracer, "from muzzle". Visible 13m, ToF 13m 0.01s (Strelok Pro), B_127x99_Ball 0.075
        tracerEndTime=1.62; // "Trace not less than 1370m from muzzle", 1190m/s @24m: 1204m/s @0m ICAO, ToF 1370m 1.62s (Strelok Pro), B_127x99_Ball 1 https://us1.discourse-cdn.com/flex016/uploads/cartridgecollectors/original/3X/7/f/7f02a4d46fdf84650d794110ee26d19f9c119c40.jpeg
    };
    class ld3k_B_127x99_Ball_M962_SLAP_Tracer_Green: ld3k_B_127x99_Ball_M962_SLAP_Tracer_Red
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class ld3k_B_127x99_Ball_M962_SLAP_Tracer_Yellow: ld3k_B_127x99_Ball_M962_SLAP_Tracer_Red
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };
    class ld3k_B_127x99_Ball_M962_SLAP_Tracer_IR: ld3k_B_127x99_Ball_M962_SLAP_Tracer_Red
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        nvgOnly=1;
    };
    class ld3k_B_127x99_Ball_Mk211_HEIAP: ld3k_B_127x99_Ball_M903_SLAP // Raufoss Mk 211 https://en.wikipedia.org/wiki/Raufoss_Mk_211, Nammo Multipurpose NM140(Handbook 2018)
    {
        ACE_caliber=12.98; // CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-i/50-browning-en.pdf
        ACE_bulletLength=58.42; // 2.3"
        ACE_bulletMass=43.48; // 671gr
        ACE_ballisticCoefficients[]={0.651}; // 2715fps 29" ballistic app EBC V2 (ASM 0.64) https://apps.dtic.mil/sti/tr/pdf/ADA367672.pdf#page=52
        ACE_muzzleVelocities[]={752,828,842,860,891}; // 2468, 2715, 2763, 2821, 2923fps
        ace_vehicle_damage_incendiary=1;
        indirectHit=3; // B_20mm 6
        indirectHitRange=0.8; // B_20mm 1.6
        explosive=0.2; // B_20mm 0.4
        explosionSoundEffect="DefaultExplosion"; // B_20mm
        CraterEffects="ExploAmmoCrater"; // B_20mm
        explosionEffects="ExploAmmoExplosion"; // B_20mm
        typicalSpeed=891;
        airFriction=-0.00062936; // airFrictionAnalysis.txt in docs folder
        class CamShakeExplode // B_20mm
        {
            power=4;
            duration=0.8;
            frequency=20;
            distance=43.7771;
        };
        class CamShakeHit // B_20mm
        {
            power=20;
            duration=0.4;
            frequency=20;
            distance=1;
        };
        soundHit1[]= // B_20mm
        {
            "A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01",
            1.7782794,
            1,
            1300
        };
        soundHit2[]= // B_20mm
        {
            "A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02",
            1.7782794,
            1,
            1300
        };
        soundHit3[]= // B_20mm
        {
            "A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03",
            1.7782794,
            1,
            1300
        };
        soundHit4[]= // B_20mm
        {
            "A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04",
            1.7782794,
            1,
            1300
        };
        multiSoundHit[]= // B_20mm
        {
            "soundHit1",
            0.25,
            "soundHit2",
            0.25,
            "soundHit3",
            0.25,
            "soundHit4",
            0.25
        };
        SoundSetExplosion[]= // B_20mm
        {
            "Shell19mm25mm_Exp_SoundSet"
        };
    };
    class ld3k_B_127x99_Ball_Mk300_HEIAP_Tracer_Red: ld3k_B_127x99_Ball_Mk211_HEIAP // Nammo Multipurpose Mk 300/NM160 (Handbook 2018)
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class ld3k_B_127x99_Ball_MPDT_HEIAP_Tracer_IR: ld3k_B_127x99_Ball_Mk211_HEIAP // Nammo Multipurpose MP-DT (IR) (Handbook 2018)
    {
        tracerScale=0.6; // IR dim tracer
        tracerStartTime=0.23; // Visible 200m 1000m, 43g MV 903m/s ICAO according to https://www.nammo.com/, ToF 200m 0.23s (Strelok Pro), B_127x99_Ball 0.075
        tracerEndTime=1.51; // Visible 200m 1000m, 43g MV 903m/s ICAO according to https://www.nammo.com/, ToF 1000m 1.51s (Strelok Pro), B_127x99_Ball 1
        nvgOnly=1;
    };
    class ld3k_B_127x99_Ball_M8_API: ld3k_B_127x99_Ball_M903_SLAP
    {
        ACE_caliber=12.98; // CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-i/50-browning-en.pdf
        ACE_bulletLength=58.67; // 2.31" "Army Ammunition, Data Sheets Small Caliber Ammunition"
        ACE_bulletMass=40.337; // 622.5 gr "Army Ammunition, Data Sheets Small Caliber Ammunition" https://www.inetres.com/gp/military/infantry/mg/50_ammo.html
        ACE_ballisticCoefficients[]={0.58}; // ballistic app EBC V2 estimated muzzle velocity 2758fps (841m/s) (ASM 0.574), ballistic data https://static.wikia.nocookie.net/guns/images/8/83/Slaptrajectory.jpg/revision/latest?cb=20110101063514
        ACE_muzzleVelocities[]={764,841,856,874,905}; // 2508, 2758, 2807, 2866, 2970fps
        ace_vehicle_damage_incendiary=1;
        indirectHit=4; // B_20mm_AP 8
        indirectHitRange=0.1; // B_20mm_AP 0.2
        typicalSpeed=905;
        airFriction=-0.00070327; // airFrictionAnalysis.txt in docs folder
        CraterEffects="ExploAmmoCrater";
        class HitEffects // B_30mm_APFSDS. Observable flash at hard targets. Ignition of vaporized fuel. Material/light armor targets https://www.nammo.com
        {
            hitMetal="ImpactMetalSabotSmall";
            hitMetalPlate="ImpactMetalSabotSmall";
            hitBuilding="ImpactConcreteSabotSmall";
            hitConcrete="ImpactConcreteSabotSmall";
            hitGroundSoft="ImpactEffectsGroundSabot";
            hitGroundRed="ImpactEffectsGroundSabot"; // BulletBase ImpactEffectsRed
            hitGroundHard="ImpactEffectsGroundSabot";
            Hit_Foliage_green="ImpactLeavesGreen";
            Hit_Foliage_Dead="ImpactLeavesDead";
            Hit_Foliage_Green_big="ImpactLeavesGreenBig";
            Hit_Foliage_Palm="ImpactLeavesPalm";
            Hit_Foliage_Pine="ImpactLeavesPine";
            hitFoliage="ImpactLeaves";
            hitGlass="ImpactGlass";
            hitGlassArmored="ImpactGlassThin";
            hitWood="ImpactWood";
            hitHay="ImpactHay";
            hitPlastic="ImpactPlastic";
            hitRubber="ImpactRubber";
            hitTyre="ImpactTyre";
            hitMan="ImpactEffectsBlood";
            hitWater="ImpactEffectsWater";
            hitVirtual="ImpactMetal"; // BulletBase
            default_mat="ImpactEffectsGroundSabot";
        };
    };
    class ld3k_B_127x99_Ball_M20_API_Tracer_Red: ld3k_B_127x99_Ball_M8_API
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class ld3k_B_127x99_Ball_Mk257_API_Tracer_IR: ld3k_B_127x99_Ball_M8_API
    {
        tracerScale=0.6; // IR dim tracer
        tracerStartTime=0.23; // Visible 200m 1000m, 43g MV 903m/s ICAO according to https://www.nammo.com/, ToF 200m 0.23s (Strelok Pro), B_127x99_Ball 0.075
        tracerEndTime=1.51; // Visible 200m 1000m, 43g MV 903m/s ICAO according to https://www.nammo.com/, ToF 1000m 1.51s (Strelok Pro), B_127x99_Ball 1
        nvgOnly=1;
    };
};
class CfgMagazines
{
    class CA_Magazine;
    /*class 5Rnd_127x108_Mag: CA_Magazine // official BI tool All-in-one Config Arma3 2.19.152606 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
    {
        author="$STR_A3_Bohemia_Interactive";
        scope=2;
        displayName="$STR_A3_CfgMagazines_5Rnd_127x108_Mag0";
        picture="\A3\Weapons_F_EPA\Data\ui\M_5rnd_127x108_ball_CA.paa";
        count=5;
        ammo="B_127x108_Ball";
        initSpeed=820;
        descriptionShort="$STR_A3_CfgMagazines_5Rnd_127x108_Mag1";
        mass=16;
    };*/
    class ld3k_5Rnd_127x99_M33_Mag: CA_Magazine
    {
        author="Laid3acK";
        scope=2;
        displayName=".50 BMG 5Rnd M33 Mag";
        picture="\ld3k_gm6_lynx_127x99_compat_ace3\data\ui\m_ld3k_5rnd_gm6_127x99_ca.paa";
        count=5;
        ammo="ld3k_B_127x99_Ball_M33";
        initSpeed=836;
        descriptionShort="Caliber: 12.7x99 mm NATO<br />Rounds: 5<br />Used in: GM6 Lynx";
        mass=16; // unknown GM6 magazine weight, cartridge weight 1762gr x5: 8810gr (571g)
    };
    class ld3k_5Rnd_127x99_M33_Mag_Tracer_Red: ld3k_5Rnd_127x99_M33_Mag
    {
        author="Laid3acK";
        displayName=".50 BMG 5Rnd M33 Tracer (Red) Mag";
        picture="\ld3k_gm6_lynx_127x99_compat_ace3\data\ui\m_ld3k_5rnd_gm6_127x99_tracer_ca.paa";
        ammo="ld3k_B_127x99_Ball_M33_Tracer_Red";
        tracersEvery=1;
        displaynameshort="Tracer";
    };
    class ld3k_5Rnd_127x99_M33_Mag_Tracer_IR: ld3k_5Rnd_127x99_M33_Mag_Tracer_Red
    {
        author="Laid3acK";
        displayName=".50 BMG 5Rnd M33 Tracer (IR) Mag";
        picture="\ld3k_gm6_lynx_127x99_compat_ace3\data\ui\m_ld3k_5rnd_gm6_127x99_tracer_ir_ca.paa";
        ammo="ld3k_B_127x99_Ball_M33_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class ld3k_5Rnd_127x99_AMAX_Mag: ld3k_5Rnd_127x99_M33_Mag
    {
        author="Laid3acK";
        displayName=".50 BMG 5Rnd AMAX Mag";
        ammo="ld3k_B_127x99_Ball_AMAX";
        initSpeed=824;
        mass=16.4; // cartridge weight 1805.3gr x5: 9026.5gr (585g)
        displaynameshort="AMAX";
    };
    class ld3k_5Rnd_127x99_M903_SLAP_Mag: ld3k_5Rnd_127x99_M33_Mag
    {
        author="Laid3acK";
        displayName=".50 BMG 5Rnd M903 SLAP Mag";
        picture="\ld3k_gm6_lynx_127x99_compat_ace3\data\ui\m_ld3k_5rnd_gm6_127x99_slap_ca.paa";
        ammo="ld3k_B_127x99_Ball_M903_SLAP";
        initSpeed=1129;
        descriptionShort="Caliber: 12.7x99 mm SLAP<br />Rounds: 5<br />Used in: GM6 Lynx";
        mass=13.3; // cartridge weight 1466gr x5: 7330gr
        displaynameshort="SLAP";
    };
    class ld3k_5Rnd_127x99_M962_SLAP_Mag_Tracer_Red: ld3k_5Rnd_127x99_M903_SLAP_Mag
    {
        author="Laid3acK";
        displayName=".50 BMG 5Rnd M962 SLAP Tracer (Red) Mag";
        picture="\ld3k_gm6_lynx_127x99_compat_ace3\data\ui\m_ld3k_5rnd_gm6_127x99_slapt_ca.paa";
        ammo="ld3k_B_127x99_Ball_M962_SLAP_Tracer_Red";
        tracersEvery=1;
        descriptionShort="Caliber: 12.7x99 mm SLAP-T<br />Rounds: 5<br />Used in: GM6 Lynx";
        displaynameshort="SLAP-T";
    };
    class ld3k_5Rnd_127x99_Mk211_HEIAP_Mag: ld3k_5Rnd_127x99_M33_Mag
    {
        author="Laid3acK";
        displayName=".50 BMG 5Rnd Mk211 HEIAP Mag";
        picture="\ld3k_gm6_lynx_127x99_compat_ace3\data\ui\m_ld3k_5rnd_gm6_127x99_heiap_ca.paa";
        ammo="ld3k_B_127x99_Ball_Mk211_HEIAP";
        initSpeed=826;
        descriptionShort="Caliber: 12.7x99 mm HEIAP<br />Rounds: 5<br />Used in: GM6 Lynx";
        // mass=16; // cartridge weight 1765gr x5: 8825gr (572g)
        displaynameshort="HEIAP";
    };
    class ld3k_5Rnd_127x99_Mk300_HEIAP_Mag_Tracer_Red: ld3k_5Rnd_127x99_Mk211_HEIAP_Mag
    {
        author="Laid3acK";
        displayName=".50 BMG 5Rnd Mk300 HEIAP Tracer (Red) Mag";
        picture="\ld3k_gm6_lynx_127x99_compat_ace3\data\ui\m_ld3k_5rnd_gm6_127x99_heiapt_ca.paa";
        ammo="ld3k_B_127x99_Ball_Mk300_HEIAP_Tracer_Red";
        tracersEvery=1;
        descriptionShort="Caliber: 12.7x99 mm HEIAP-T<br />Rounds: 5<br />Used in: GM6 Lynx";
        displaynameshort="HEIAP-T";
    };
    class ld3k_5Rnd_127x99_MPDT_HEIAP_Mag_Tracer_IR: ld3k_5Rnd_127x99_Mk300_HEIAP_Mag_Tracer_Red
    {
        author="Laid3acK";
        displayName=".50 BMG 5Rnd MP-DT HEIAP Tracer (IR) Mag";
        picture="\ld3k_gm6_lynx_127x99_compat_ace3\data\ui\m_ld3k_5rnd_gm6_127x99_heiapt_ir_ca.paa";
        ammo="ld3k_B_127x99_Ball_MPDT_HEIAP_Tracer_IR";
        descriptionShort="Caliber: 12.7x99 mm HEIAP-T IR<br />Rounds: 5<br />Used in: GM6 Lynx";
        displaynameshort="HEIAP-T IR";
    };
    class ld3k_5Rnd_127x99_M8_API_Mag: ld3k_5Rnd_127x99_M33_Mag
    {
        author="Laid3acK";
        displayName=".50 BMG 5Rnd M8 API Mag";
        picture="\ld3k_gm6_lynx_127x99_compat_ace3\data\ui\m_ld3k_5rnd_gm6_127x99_api_ca.paa";
        ammo="ld3k_B_127x99_Ball_M8_API";
        initSpeed=839;
        descriptionShort="Caliber: 12.7x99 mm API<br />Rounds: 5<br />Used in: GM6 Lynx";
        // mass=16; // cartridge weight 1764gr x5: 8820gr (571.5g)
        displaynameshort="API";
    };
    class ld3k_5Rnd_127x99_M20_API_Mag_Tracer_Red: ld3k_5Rnd_127x99_M8_API_Mag
    {
        author="Laid3acK";
        displayName=".50 BMG 5Rnd M20 API Tracer (Red) Mag";
        picture="\ld3k_gm6_lynx_127x99_compat_ace3\data\ui\m_ld3k_5rnd_gm6_127x99_apit_ca.paa";
        ammo="ld3k_B_127x99_Ball_M20_API_Tracer_Red";
        tracersEvery=1;
        descriptionShort="Caliber: 12.7x99 mm API-T<br />Rounds: 5<br />Used in: GM6 Lynx";
        mass=15.6; // cartridge weight 1718gr x5: 8590gr (557g)
        displaynameshort="API-T";
    };
    class ld3k_5Rnd_127x99_Mk257_API_Mag_Tracer_IR: ld3k_5Rnd_127x99_M20_API_Mag_Tracer_Red
    {
        author="Laid3acK";
        displayName=".50 BMG 5Rnd Mk257 API Tracer (IR) Mag";
        picture="\ld3k_gm6_lynx_127x99_compat_ace3\data\ui\m_ld3k_5rnd_gm6_127x99_apit_ir_ca.paa";
        ammo="ld3k_B_127x99_Ball_Mk257_API_Tracer_IR";
        descriptionShort="Caliber: 12.7x99 mm API-T IR<br />Rounds: 5<br />Used in: GM6 Lynx";
        displaynameshort="API-T IR";
    };
};
class CfgMagazineWells
{
    /*class GM6_127x108 // official BI tool All-in-one Config Arma3 2.19.152606 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
    {
        BI_Magazines[]=
        {
            "5Rnd_127x108_Mag",
            "5Rnd_127x108_APDS_Mag"
        };
    };*/
    class GM6_127x99
    {
        ld3k_Magazines[]= // Weapon initSpeed -1 with GM6 ACE_barrelLength 730mm (28.74"), 836, 824, 1129, 826, 839m/s ICAO conditions (15°C, 1013.25 hPa, 0%) according to GM6 Rnd_127x99 magazines initSpeed
        {
            "ld3k_5Rnd_127x99_M33_Mag",
            "ld3k_5Rnd_127x99_M33_Mag_Tracer_Red",
            "ld3k_5Rnd_127x99_M33_Mag_Tracer_IR",
            "ld3k_5Rnd_127x99_AMAX_Mag",
            "ld3k_5Rnd_127x99_M903_SLAP_Mag",
            "ld3k_5Rnd_127x99_M962_SLAP_Mag_Tracer_Red",
            "ld3k_5Rnd_127x99_Mk211_HEIAP_Mag",
            "ld3k_5Rnd_127x99_Mk300_HEIAP_Mag_Tracer_Red",
            "ld3k_5Rnd_127x99_MPDT_HEIAP_Mag_Tracer_IR",
            "ld3k_5Rnd_127x99_M8_API_Mag",
            "ld3k_5Rnd_127x99_M20_API_Mag_Tracer_Red",
            "ld3k_5Rnd_127x99_Mk257_API_Mag_Tracer_IR"
        };
    };
};
class Mode_SemiAuto;
class CfgWeapons
{
    class ItemCore;
    class InventoryOpticsItem_Base_F;
    class Rifle_Base_F;
    class Rifle_Long_Base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };
    class GM6_base_F: Rifle_Long_Base_F
    {
        class Single: Mode_SemiAuto
        {
        };
    };
    class srifle_GM6_F: GM6_base_F
    {
    };
    class ld3k_GM6_Lynx_127x99: srifle_GM6_F
    {
        ACE_RailHeightAboveBore=4.75572;
        ACE_IronSightBaseAngle=0.001146;
        ACE_barrelLength=730; // 28.74" https://gm6lynx.com/
        ACE_barrelTwist=381; // 1:15" https://gm6lynx.com/
        ace_overheating_closedBolt=1;
        author="Laid3acK";
        _generalMacro="ld3k_GM6_Lynx_127x99";
        baseWeapon="ld3k_GM6_Lynx_127x99";
        displayName="GM6 Lynx .50";
        descriptionShort="Sniper Rifle<br />Caliber: 12.7x99 mm NATO";
        maxZeroing=3400; // distance 12.7x99mm AMAX Mach 0.8 (272m/s), GM6_base_F 2200
        initSpeed=-1; // 836, 824, 1129, 826, 839m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), GM6_base_F 0
        magazines[]=
        {
            "ld3k_5Rnd_127x99_M33_Mag",
            "ld3k_5Rnd_127x99_M33_Mag_Tracer_Red",
            "ld3k_5Rnd_127x99_M33_Mag_Tracer_IR",
            "ld3k_5Rnd_127x99_AMAX_Mag",
            "ld3k_5Rnd_127x99_M903_SLAP_Mag",
            "ld3k_5Rnd_127x99_M962_SLAP_Mag_Tracer_Red",
            "ld3k_5Rnd_127x99_Mk211_HEIAP_Mag",
            "ld3k_5Rnd_127x99_Mk300_HEIAP_Mag_Tracer_Red",
            "ld3k_5Rnd_127x99_MPDT_HEIAP_Mag_Tracer_IR",
            "ld3k_5Rnd_127x99_M8_API_Mag",
            "ld3k_5Rnd_127x99_M20_API_Mag_Tracer_Red",
            "ld3k_5Rnd_127x99_Mk257_API_Mag_Tracer_IR"
        };
        magazineWell[]={};
        class Single: Single
        {
            dispersion=0.00016; // 0.98 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, GM6_base_F 0.00035 (1.2 MOA)
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=231.5; // https://gm6lynx.com, srifle_GM6_F 480
        };
    };
    class ld3k_GM6_Lynx_127x99_camo: ld3k_GM6_Lynx_127x99
    {
        author="Laid3acK";
        _generalMacro="ld3k_GM6_Lynx_127x99_camo";
        baseWeapon="ld3k_GM6_Lynx_127x99_camo";
        scope=2;
        displayName="GM6 Lynx .50 (Camo)";
        picture="\A3\Weapons_F_Bootcamp\LongRangeRifles\GM6_camo\data\UI\gear_gm6_X_CA.paa";
        hiddenSelections[]=
        {
            "camo",
            "mat1",
            "mat2"
        };
        hiddenSelectionsTextures[]=
        {
            "\a3\weapons_f_bootcamp\longrangerifles\gm6_camo\data\gm6_csat_co.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "",
            "a3\weapons_f_bootcamp\longrangerifles\gm6_camo\data\gm6_csat.rvmat",
            "a3\weapons_f_bootcamp\longrangerifles\gm6_camo\data\gm6_plastic_csat.rvmat"
        };
    };
    class ld3k_GM6_Lynx_127x99_ghex: ld3k_GM6_Lynx_127x99
    {
        author="Laid3acK";
        _generalMacro="ld3k_GM6_Lynx_127x99_ghex";
        baseWeapon="ld3k_GM6_Lynx_127x99_ghex";
        scope=2;
        displayName="GM6 Lynx .50 (Green Hex)";
        picture="\A3\Weapons_F_Exp\LongRangeRifles\GM6\Data\UI\icon_srifle_GM6_ghex_F_X_CA.paa";
        hiddenSelections[]=
        {
            "mat1",
            "mat2"
        };
        hiddenSelectionsTextures[]=
        {
            "\A3\Weapons_F_Exp\LongRangeRifles\GM6\Data\srifle_GM6_ghex_F_co.paa",
            "\A3\Weapons_F_Exp\LongRangeRifles\GM6\Data\srifle_GM6_ghex_F_co.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "\A3\Weapons_F_Exp\LongRangeRifles\GM6\Data\srifle_GM6_ghex_F.rvmat",
            "\A3\Weapons_F_Exp\LongRangeRifles\GM6\Data\srifle_GM6_ghex_F_plastic.rvmat"
        };
    };
    class optic_LRPS: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Snip
                {
                };
            };
        };
    };
    class ld3k_gm6_optic_LRPS_Night_Vision: optic_LRPS // configured as Nightforce NXS 5.5-22x56
    {
        ACE_ScopeZeroRange=100; // Always keep vanilla discreteDistance 100 same that Range Card zeroed distance, to increase eventually zeroing distance: Interaction Menu -> "Set zero adjustment" (AB enabled only)
        ACE_ScopeHeightAboveRail=4.2098;
        ACE_ScopeAdjust_Vertical[]={0,29}; // 100 MOA, NXS 5.5-22x56 2020 data https://www.nightforceoptics.com/content/files/downloads/0120_NF_NXS_Family_Sales_Sheet.pdf
        ACE_ScopeAdjust_Horizontal[]={-5.8,5.8}; // 40 MOA, NXS 5.5-22x56 2020 data https://www.nightforceoptics.com/content/files/downloads/0120_NF_NXS_Family_Sales_Sheet.pdf
        ACE_ScopeAdjust_VerticalIncrement=0.1; // should be 1/4 MOA https://www.nightforceoptics.com/riflescopes/nxs/nxs-55-22x56
        ACE_ScopeAdjust_HorizontalIncrement=0.1; // should be 1/4 MOA
        author="Laid3acK";
        _generalMacro="ld3k_gm6_optic_LRPS_Night_Vision";
        displayName="LRPS Night Vision";
        class ItemInfo: ItemInfo
        {
            mass=20; // Nightforce NXS 5.5-22x56 907g https://www.nightforceoptics.com/riflescopes/nxs/nxs-55-22x56, optic_LRPS 16
            class OpticsModes: OpticsModes
            {
                class Snip: Snip
                {
                    opticsZoomMin=0.01; // optic_LRPS
                    opticsZoomMax=0.042; // optic_LRPS
                    opticsZoomInit=0.042; // optic_LRPS
                    discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600}; // max distance at max elevation 29 mRad M903/962 SLAP (zeroing 100m, ICAO conditions)
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=100;
                    distanceZoomMax=2600;
                    discretefov[]={0.042,0.01}; // optic_LRPS
                    modelOptics[]=
                    {
                        "\ld3k_gm6_lynx_127x99_compat_ace3\acc\ld3k_reticle_lrps_F",
                        "\ld3k_gm6_lynx_127x99_compat_ace3\acc\ld3k_reticle_lrps_z_F"
                    };
                    visionMode[]=
                    {
                        "Normal",
                        "NVG"
                    };
                };
            };
        };
    };
    class ld3k_gm6_optic_LRPS_Night_Vision_tna_F: ld3k_gm6_optic_LRPS_Night_Vision
    {
        author="Laid3acK";
        _generalMacro="ld3k_gm6_optic_LRPS_Night_Vision_tna_F";
        displayName="LRPS Night Vision (Tropic)";
        model="\A3\Weapons_F\Acc\acco_sniper02_tna_F.p3d";
        picture="\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_LRPS_tna_F_ca.paa";
    };
    class ld3k_gm6_optic_LRPS_Night_Vision_ghex_F: ld3k_gm6_optic_LRPS_Night_Vision
    {
        author="Laid3acK";
        _generalMacro="ld3k_gm6_optic_LRPS_Night_Vision_ghex_F";
        displayName="LRPS Night Vision (Green Hex)";
        model="\A3\Weapons_F\Acc\acco_sniper02_ghex_F.p3d";
        picture="\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_LRPS_ghex_F_ca.paa";
    };
};
class CfgVehicles
{
    class item_Base_F;
    class Weapon_Base_F;
    class Weapon_ld3k_GM6_Lynx_127x99: Weapon_Base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="GM6 Lynx .50";
        author="Laid3acK";
        editorCategory="EdCat_Weapons";
        editorSubcategory="EdSubcat_SniperRifles";
        vehicleClass="WeaponsPrimary";
        class TransportWeapons
        {
            class ld3k_GM6_Lynx_127x99
            {
                weapon="ld3k_GM6_Lynx_127x99";
                count=1;
            };
        };
        class TransportMagazines
        {
            class ld3k_5Rnd_127x99_M33_Mag
            {
                magazine="ld3k_5Rnd_127x99_M33_Mag";
                count=1;
            };
        };
    };
    class Weapon_ld3k_GM6_Lynx_127x99_camo: Weapon_Base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="GM6 Lynx .50 (Camo)";
        author="Laid3acK";
        editorCategory="EdCat_Weapons";
        editorSubcategory="EdSubcat_SniperRifles";
        vehicleClass="WeaponsPrimary";
        class TransportWeapons
        {
            class ld3k_GM6_Lynx_127x99_camo
            {
                weapon="ld3k_GM6_Lynx_127x99_camo";
                count=1;
            };
        };
        class TransportMagazines
        {
            class ld3k_5Rnd_127x99_M33_Mag
            {
                magazine="ld3k_5Rnd_127x99_M33_Mag";
                count=1;
            };
        };
    };
    class Weapon_ld3k_GM6_Lynx_127x99_ghex: Weapon_Base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="GM6 Lynx .50 (Green Hex)";
        author="Laid3acK";
        editorCategory="EdCat_Weapons";
        editorSubcategory="EdSubcat_SniperRifles";
        vehicleClass="WeaponsPrimary";
        class TransportWeapons
        {
            class ld3k_GM6_Lynx_127x99_ghex
            {
                weapon="ld3k_GM6_Lynx_127x99_ghex";
                count=1;
            };
        };
        class TransportMagazines
        {
            class ld3k_5Rnd_127x99_M33_Mag
            {
                magazine="ld3k_5Rnd_127x99_M33_Mag";
                count=1;
            };
        };
    };
    class Item_ld3k_gm6_optic_LRPS_Night_Vision: Item_Base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="LRPS Night Vision";
        author="Laid3acK";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_TopSlot_Optics";
        vehicleClass="WeaponAccessories";
        class TransportItems
        {
            class ld3k_gm6_optic_LRPS_Night_Vision
            {
                name="ld3k_gm6_optic_LRPS_Night_Vision";
                count=1;
            };
        };
    };
    class Item_ld3k_gm6_optic_LRPS_Night_Vision_tna_F: Item_Base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="LRPS Night Vision (Tropic)";
        author="Laid3acK";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_TopSlot_Optics";
        vehicleClass="WeaponAccessories";
        class TransportItems
        {
            class ld3k_gm6_optic_LRPS_Night_Vision_tna_F
            {
                name="ld3k_gm6_optic_LRPS_Night_Vision_tna_F";
                count=1;
            };
        };
    };
    class Item_ld3k_gm6_optic_LRPS_Night_Vision_ghex_F: Item_Base_F
    {
        scope=2;
        scopeCurator=2;
        displayName="LRPS Night Vision (Green Hex)";
        author="Laid3acK";
        editorCategory="EdCat_WeaponAttachments";
        editorSubcategory="EdSubcat_TopSlot_Optics";
        vehicleClass="WeaponAccessories";
        class TransportItems
        {
            class ld3k_gm6_optic_LRPS_Night_Vision_ghex_F
            {
                name="ld3k_gm6_optic_LRPS_Night_Vision_ghex_F";
                count=1;
            };
        };
    };
};
class ACE_ATragMX_Presets
{
    class ld3k_B_127x99_Ball_M33
    {
        preset[]=
        {
            "GM6 .50 M33",
            836,
            100,
            0.0933705,
            -0.00065856,
            8.96,
            0,
            2,
            10,
            120,
            0,
            0,
            42.83,
            12.31,
            38.10,
            0.62,
            1,
            "ICAO",

            {
                {-15,817},
                {0,822},
                {10,830},
                {15,836},
                {25,850},
                {30,859},
                {35,869}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class ld3k_B_127x99_Ball_AMAX
    {
        preset[]=
        {
            "GM6 .50 AMAX",
            824,
            100,
            0.0938588,
            -0.00039574,
            8.96,
            0,
            2,
            10,
            120,
            0,
            0,
            48.60,
            12.43,
            38.10,
            1.0362,
            1,
            "ICAO",

            {
                {-15,805},
                {0,810},
                {10,818},
                {15,824},
                {25,838},
                {30,847},
                {35,857}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class ld3k_B_127x99_Ball_M903_SLAP
    {
        preset[]=
        {
            "GM6 .50 SLAP",
            1129,
            100,
            0.0741676,
            -0.00051591,
            8.96,
            0,
            2,
            10,
            120,
            0,
            0,
            23.17,
            10.14,
            38.10,
            0.735,
            1,
            "ICAO",

            {
                {-15,1110},
                {0,1115},
                {10,1123},
                {15,1129},
                {25,1144},
                {30,1152},
                {35,1162}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class ld3k_B_127x99_Ball_Mk211_HEIAP
    {
        preset[]=
        {
            "GM6 .50 HEIAP",
            826,
            100,
            0.0943178,
            -0.00062936,
            8.96,
            0,
            2,
            10,
            120,
            0,
            0,
            43.48,
            12.37,
            38.10,
            0.651,
            1,
            "ICAO",

            {
                {-15,807},
                {0,812},
                {10,820},
                {15,826},
                {25,840},
                {30,849},
                {35,859}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class ld3k_B_127x99_Ball_M8_API
    {
        preset[]=
        {
            "GM6 .50 API",
            839,
            100,
            0.0931935,
            -0.00070327,
            8.96,
            0,
            2,
            10,
            120,
            0,
            0,
            40.34,
            12.02,
            38.10,
            0.58,
            1,
            "ICAO",

            {
                {-15,820},
                {0,825},
                {10,833},
                {15,839},
                {25,853},
                {30,862},
                {35,872}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
};