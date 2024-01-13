#define fax 1
#include <stdio.h>

void normal_if(){
    if (fax){
        do_sth();
    }
    do_otherthing();
}

// faster
void skill_issue_if(){
    if(!fax){
        label:
            do_otherthing();
        return;
    }
    do_sth();
    goto label;
}

void do_sth(){
    for (int i = 0; i < 500; i++){
        printf("Jeffrey Epstein didn't kill himself\n");
    }
}

void do_otherthing(){
    printf("The dialogue-free series depicts a conflict between singing human-headed toilets—the titular Skibidi Toilets—and humanoids with CCTV cameras, speakers, and televisions in place of their heads. In a New York City-esque setting, the Skibidi Toilets, and their leader G-Man, threaten humanity. Two types of humanoids, cameramen and speakermen, form an alliance against the toilets. Each has one of its kind that is much larger than the rest, termed titans. A toilet parasite infects Speaker Titan, leading to casualties. Later in the series, TV-headed humanoids and their titan are introduced, and with their help, the speaker titan is broken free from mind control. The battle spreads to other cities, where the titans destroy what seems to be the G-Man, but it turns out to be a fake. The titans convene and seems to defeat the mastermind, the Scientist Toilet, but once again are fooled by a decoy. The true Scientist Toilet is revealed to be in hiding. Business Insider described the series as an endless arms race as both the toilets and their foes produce stronger fighters. A mashup of the songs Give It to Me by Timbaland and Dom Dom Yes Yes by Biser King, created by TikTok user doombreaker03, appears in each episode as the theme of the Skibidi Toilets, and is the origin of the name Skibidi. Everybody Wants to Rule the World by Tears for Fears is featured in some videos as the theme of the camera-head resistance.The show contains references to video games, such as the character G-Man, whose name comes from the Half-Life video game series, and the dances performed by the Cameramen are inspired by emotes from the online battle royale game, Fortnite.\n");
}

// Skill issue

/*
                                                                                                        ›            ›
                                                                                           ›  ›    ››››   ››› ›››››   ››   › ›
                                                                               ÆÆÆÆÆÆÆÆÆ   ›› ››››››  ›››››››››   ››››› ››››   ÅÆÆÆÆÆÆÆÆÆ
                                                                           ÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆ  ››››› ››››› ››››››››››››››› ›› ›  ÆÆÆÆÆÆÆÆÆÆÆÆÆÆÅ
                                                                       GÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆg › ›››››  ››››››››››››››››››››››› ÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÇ
                                                                   gÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆ ›››››››››››››››››››››››››››››››› ÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆü
                                                               ÇÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆ  ››››››››››››››››››››››››››››››››  ÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÏ
                                                           ÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆ                                       6ÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆ
                  ü6üÏÏÏÏÏÏÏÏÏÏÏÏÏü66Ïüz—ízzÏÏÏÏzzÏÏÏÏüÏÆÆÆÇ                              üÏÏÏÏzzÏÏzüzÏzÏÏÏÏÏÏÏÏÏÏÏÏzzzÏÏÏÏüüÏ                              ÞÆÆgüüüüüüüüüÏüÏzÏÏÏÏÏÏÏÏÏÏÏÏÏÏÏÏÏÏü6üzííüÆÆÞ
                ÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆgggggggggggggggggggggggggggÅÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆggggggggggggggggggggggggggggÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆ
                ÆÆÆÅÅÅÅÆÆÅÆÆÅÆÅÅÅÆÞ6Çü6ÅÅgggggggggggggggggggggggggggggggggggggggggggggGGÅggggggÅÅÅÅgÅÆÅÅÅÆÆÅÆÆÆÆÆÅÅÅÆÅÅgÅÅÅÅggggggggggÅÅÆÅÅgggggggggggggggggggggggggggggggggggggggggÅgÅÅgÅÆÆGÅGGÞÞÆÆÆÅÅÆÆÞ
                  ÆÆÆÆgGGGGGGGGgGgÅÆÆÆÆÅgÅGÅgÅgÅgÅggÅgÅgÅgÅgÅgÅgÅgÅgÅgÅgÅgÅgÅgÅgÅgÅgÅGgggÅÅggggggGGggGGgGGGGGGGGGGGggGggggGggggÅgÅgÅgÅÅ6ÆüÆÅÅgÅgÅgÅgÅgÅgÅgÅÅgggggÅggggggggÅgÅgÅÅGÅggggÅÅÅÆÅggÏÇÅGÅgGgÆÆÆÏ
                    ÆÆÆÆÆÅGGGGGggÅggÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÅgGGGGGGGGGGGGGÞGGGÅÅÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆgg6ÅÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÅÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÞÏü6gÆÅgggÆÆÆÆÆ
                       ÅÆÆgGGGGGGgÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆgGGGGGGGGGGGÅÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÇGzÇgGGGÆÆÆ
                         ÆÆGGGGGGÅÆG                                                                 ÆÆgGGGGGGGGGGGÆÆÇ                                                                 ›ÆÆÅÅÅgGGÅÆ
                         ÆÆGGGGGGÅÆ                                                                   ÆÞGGGGGGGGGGGÆ   ——›———{›——    ››                                                  ÆGGGGGGÆÆ
                          ÆÅGGGGGÆÆ                            —6gÆÆÆÆÆÆgÏ                            ÆGGGGGGGGGGGGÆÇ                             ›{ííí{—                               ÆÆGGGGGGÆÆ
                          ÆÆGGGGGGÆ          ››—     ››    ÞÆÆÆGÇüÏÏÏÏüÞGÅÆÆÆÆ    › ›         ›› ››  ÆÆGGGGGGGGGGGGÆÆ         ››››››—{    › {ÆÆÆÆÞ ›———›————{—›                      ›  ÆÅGGGGGÆÆ
                          ÆÆggGGGGÆÆ       ››—           ÆÆÅ6zzzzzÏÏüÏüÇzzÏÏÏ{ÇÆ    › › › › ›  ›››   ÆgGGGGGGGGGGGGGÆÆ  ›››  ›››››—{       ›ÆÆÇüÇÅÏ —{—{—————————          ›   ››       ÆgGGGGGÆÆ
                           ÆÅGggGGÆÆ  › ›› ››          gz  ›ÇüÏÏÏÏÏÏü6zzízÇG6   {Ï              ››  ÆÆGGGGGgggggGGGGÆÆ  —›—   › ››{         üÆÆGÇÇÅz —{{————{——›››—         ›    ›› ›  ÆÆGGGGGgÆÆ
                           ÆÆGGggGGÆ  › › ››           üí{{  ÇÏzÏÏü6üz{íü6ÇGÇí  —{ü             ›   ÆgGGGGggGGGgÞGGGGÆÆ  ———›››››—           Ï íÞGÞÅz {{{{——————›››››        ›     ›   ÆÆggGGGÅÆ{
                           ÆÆgGGGGgÆÆ › ››››           Ç{{{{ z6üüíü{zíüÇÇÇ6Þgü› ——íü          › ›  ÆÆGgGGGggGÅgggÞGGGÆÆ  —————› —›           ÅÏ{ íÞÞÅí {{{{{———{›———›{       ›› ›   ›  ÆgGGGGGÆÆ
                           ÏÆÅGGGGGÆÆ  › ›››           6{íí{›üÇü6{{ÏüÇ66666ÇGÇ{›—{—z6  › › ››     {ÆÆÞgGGGgÅggggGGGGGGÆÆ  ———›››{           üÆÏzí›ÇÞÞÅ›—í{{{————{››››——       ›       ÆÆGGGGGGÆÆ
                            ÆÆGGgGGÅÆ  ››› ›          ÞÏz{í{›zííÏÞ66666ü666ÞGÞí›{{{{Þ›    › ››    ÆÆGÞGGGGÅÅÅÅÅÅggGGGgÅÆ  —›—›———{          ÆÇüÏÏ—üÞüGÇ {ííí{í—{——————{  ›    ›       ÆÆGggGGGÆ{
                            ÆÆGGGGgGÆÆ  ›› ››        Güí{{{ —Ïz{{Çüü6666666ÇgGz—{{í{6ü  › ›› ››   ÆÅggGGGGÅÆÆÆÆÅGÞgGGgGÆÆ  —{›———í        üÆg6ÏÏz›ÇG6ÇGz—ííí{í—{——{———{›      ››      ÆÆÞgGGGgÆ
                            íÆgGGGGGÆÆ   ›  ›—›    G6íí{{› zGÇÇ6Çüü66666ÇÇ6ÞGGz{ízííÞG  ››››››   ÆÆÞÞGGGggÆÆÆÆÆÆGÞGGGgGÆÆ  ›————›{í—    ÆÆÆÞ6üüü{íGÇÇ6GÞ—ízíí{ííí—{{—{í{  ›   ›      zÆGÞggGgÆÆ
                             ÆÆGgggGÅÆ   ››› ››››— Å6    —GÞ66üüü6Çü666Ç6ÇÇÇGgÏízzzÏgÞ  ››››››   ÆÆGGgGGgÆÆÆggÅÆÆggGGgÞgÆÅ  —{—›—{{ ›ÆÆÆzÏ6ÇüüÏ{—GgÇÇ6Çgz{zzzízíí—› ›—Ï       › ›    ÆÆGGgGÞGÆ
                             ÆÆGGGGÞGÆ6    ››››››  {ÆGgggÞ6üüüü6666666ÇÇÞÇÇÞGGzzÏÏÏÇÆí ››››››   ÆÆGÞÞGGGÅÆÅggggÅÆÅGGÞGGGÆÆ  ›—{——{{› ÞÆGG››—{— zÆÅÞÇÇÇÇG6ízzzÏü{í—{í{zÇ   ›          ÆÅGgGgGÆÆ
                             ›ÆgGGGgGÆÆ  ››      ›  ÆÆüüüüüüüü6ü66666ÇÇÇÇÇÞÞgÞüÏÏÏ6ÆÆ   ››› ››  ÆÆGGggggÆÆgGgGGgÆÆGgGGGGGÆG ›{———{{—  ÆgGÆÆGGÆÆÆGÞÞÞÇÞÇÞgízüüz›{——zízÇ   ›     ›    GÆGGGGGGÆÆ
                              ÆÆgGGGGGÆz   ››››››››  ÆÆÇüüüüü666666ÇÇÇÇÇÞÇÞÞgÇüü6gÆÆ    ›››››  ÆÆÞGGGGGÅÆgGÞÞGGGGÆÆGGGgGÞÅÆ  ——{——{{› ›ÆÅGgÅÆÅgGÞGÞÇÇÇÇÞÅÇüÏ—{zíÏÏzÏG›   ›     ›    ÆÆGGgGÞÅÆ
                              zÆÆGÞgÞGÆÆ   ›››››      6ÆgÇü6ü6666ÇÇÇÇÇÇÞÇÞÞÞGÇüÞÆÆÇ  ›››››››   ÆgÞgÅÆÅÅÆÆÞÞÞÞÇÞÞÞgÆÅgggGGÞÆÆ  {{——{{{   ÆÆÅGgGGGGÞÞGGÞGGüü{{ÏÏüüÏÏÞG—    › ›  ›    ÆÆGGgGgÆÆÆ
                               ÆÆÆGGgGÞÆÆ—   ›  ››››    ÆÆÅÇ666ÇÇÇÇÇÞÇÇÞÞÇGGGGÆÆÆ   ››  ››    ÆÆÞgÇ66zÅÆÞ66Ç6Ç6ÇÇÞÆÆGÞGgGÞgÆÅ  —{{{{{››  —ÆÆÆÅGGgGÞGÞGÞ6ÅÆ›ü66ü6gÆÏ   › › ›       ÆÆGÞgGGgÆÆ
                                ÆÆÅGÞgGÞÅÆÆ   ›››››››    ›ÅÆÆÆGÞÇÇÇÞÇÞÇÞGGÆÆÆÆÆ—  ›››››      ÆÆÞgÅGÇüÞÆÆÏüÏÏzzÏüüüGÆÆGGGÅGGGÆÆ  ›—{—{›     zÆÆÆÆÆgGgGíüüüÅGÇÞÅÆÆz›   ›  ›   ›   ›ÆÆÞGGGGGÆÆ
                                 ÆÆÆÞGgGGGÆÆ    ›› › ›     ›zÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆü›   ›  ›› ›   6ÆÆÞgG6ÇüÆÆÆízzííí{íízÏ6gÆÆgÞGgÅGÞÆÆ   ›—{{›      {ÞÆÆÆÆÆÆÅÆÅÆÆÆÆÆÞ{›     › › › ›   ÆÆÆÇGGgGGÆÆg
                                  ÆÆÆGGggGÞÆÆÆ    ››››››       —ÏÇGÅÆÅÅÞÏ—        ››      ÆÆGGÞGÏüÞÆÆÆ{{íí{{{{——íízüÆÆÆgGGGÅgÞÅÆg   ›{—›        —zÇÅÆÆÆÆÅÞü›››     › › ›     ÆÆÆÞÇGÅGGÅÆÆ›
                                   ÆÆÆÆggÅÅGÞÅÆÆü       ››                             zÆÆg6ÞÇü6ÇÆÆÆÆ{—›————{{{{›—{{6ÆÆÆÅGGgÅÆgGÅÆÆ                               ›        ÆÆÆÇÞGÅÅgGÆÆÆ
                                     ÆÆÆÆggÅÆÅÞÞÅÆÆÆ                                ÏÆÆÆgÞgüÞÞgÆÆÆÆÇ    ››{{{{—{››  ›íÇÆÆÆgGGGÅÆÆggÆÆG—                                ÞÆÆÆGÇGgÆÅGGÆÆÆz
                                      üÆÆÆÅggÅÆÆÆGGgÆÆÆÆÆÆÆÆÆÆÅgGgGGÞÇ6üüÏÏííÏ6GÆÆÆÆggÞ6ÞgÅÆgÅÆÆÆÆ›    ›—{{{{{{{——›   ›zÆÆÆÆgGGgÅÆÆÆÆÆÆÆÆÆÆÅÇÏzÏÏzÏÏüü6ÇÞÞggÅÅÆÆÆÆÆÆÆÆÆgÞÞgÆÆÆÅgGÆÆÆÆ
                                     í  ÅÆÆÆÆgÅÅÆÆÆÆÆÆÆÆÅÅggggGgGGGggggÅÅÅÆÆÆÆÅÅÅÅÅÆÆÆGGÞüzÆÆÆÆÆí    ——{—{{{{{{{{{{—›   ›üÆÆÆÆggGGgÅÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÅgggGGGGGÞGGGGGGgÅÅÆÆÆÆÆÅggÅÆÆÆÞ
                                           ÆÆÆÆÆÅgÅÅggÅÆÅÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÅgÅÆÆÆÆÆÆÆÆ—    ›———{{{{{{{{{í—————    ›ÏÆÆÆÆÆgGGGGGggggÅÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆgÅgGÆÆÆÆÆ{
                                     {        ÆÆÆÆÆÆÆÆÆÅÅÅÅÅggggÅggggggÅgggggÅÅÅÅÅÅÆÆÆÆÆÆÆÆ{      ›——{—{{{{{{{{——{—{———›     {6ÆÆÆÆÆÆÆÅggGGGGGGGÞGGGGGGGGGGGGGGGÞGGgGgÅÆÆÆÆÆÆ{
                                     {››         ÏÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÇ›       ———{—{{——{í{{{{—{—{{——{——       —ÏÞÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆz
                                     ——››››             —z6ÞgÅÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÇ›            ›————{—{{{{—{{———{{{{—{——{——›—             ÇÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÆÅGÇü{            ›{
                                     ›—››››››››                                            ›——{›{—{—{{—{{{—{{{{—{—{——{——————››                                              ››››í
                                      {›››››››››› GÆÞ                                  ›››››››—————{—{——{—{{{—{—{{——{————›——————››                            ›í      ›››››››››——
                                      {—››››››››› üÆÆü ››››››››››››   ›   ›››››››››››››››—›—›———————{—{—{{—{—{{—{——{——{—————›› ›—›››››››››››››››    › ›››››  ÆÞÞÆ ›››››››››››››{
                                      ›—›››››››››      ›››››››››››› zÆÆÆÇ  ›››››››››››››››››—›—›——————————{—{————{——————›—›——›   ›››››››››››››       ›››››› ügüGÆ ››››››››››››——
                                       {››››››››››    ››››››››››››› ›Åüügz ›››››››››››››—————›———————{——{{{—{————{——————{—{ { —{›—››››››››››››  ÆÆÆÞ ›››››› {ÆÆG  ››››››››››››—›
                                       ›{››››››››››››››››››››››››››  íÆÆÆz ››››››››››››—›—››››————{——{——{{{{—{{{—{————{{{›  — ——›››››››››››››› ÆÞzgÇ ››››››      ››››››››››››—{
                                        ——››››››››››› ››››››››››››››       ›››››››››››                   › ››        ›             ››››››››››› ÆÆÆÆ  ››››››››››››››››››››››››—›
                                         í››››——›——›      ›››››››››››››››››››››››››           ››——{{{í{{í{{í{í{{íízí— ››——›          ›››››››››      ››››››››››››››››››››››››—{
                                         —{››››››››› 6ÆG›  ››››››››››››››››››››››››   ÆÆÆÆÆÆÆÆÆÅggGGGGGGÞÞÞÞÞÞGGÞÞÇÞgÅGÅÅÆÆÆÆÆÆÆÆÆÆ   ›››››››››    ›››››››››››››››››››››››››í
                                          zí—›—————— ÆGÇÅ{ ›—››› ›››››››››››››››››› ÆÆÆÆÆÆÆ{ ——›››››————————————› ›  ——›——{—  ÆÆÆÆÆÆÆ  ››››››››››››››››››››››››››››››››››››{›
                                           í{››—››››  ÅÆÆz —    —›››››››››››››››››  ÆÆÆÆÆÆÆ6 —›—›—›››››››››››››——›››——››——{{ üÆÆÆÆÆÆÆ  › ›››››››››››››››››››    ›››››››› ›í—
                                            z{››—›—››       ››—›—›››››››››››››››››› ÆÆÆÆÆÆÆÆ  ›                          ››— ÆÆÆÆÆÆÆÆ  ›››››› ››››››››››››    í ›››››› ›—í—
                                             zí———{———— › › ———›››—››››› ››››››››››  ÆÆÆÆÆÆÆ                                 ÆÆÆÆÆÆÆ  ››—››››››››››››››››—› ÆÆG › ››› ›—{—
                                              z{›—————{››—{{››—›—›—›››››››››› ›››››    ÆÆÆÆÆÞ                               íÆÆÆÆÆ    ››››››››››››››››››››› Þ›  ››››››{í{
                                               ü{——›››—{————›——›—›››———›››››››››››››—       ›                               z       ››››—››————————››››››››    ››››››—íz
                                                üz—››  ——————›——›———››—››—›››››››››—›››——›—{g                              íÇ{———››—————›——››››››››———›——››››››››››—{Ïí
                                                 Ïüí{í—————————›—›—›—››———›—————›———››—›››››zGÏ                            Çí›—››———›——————————›——››››—››——››››—›—›í6
                                                   6í—{{————{{——{———›———›—››››—›—››››—››—››› {ügÆÆÆÅGí            {üGgÅgÅg6í—››———{————››——›—›——›———{›—›  ›———›››—íü
                                                    Çz››—{{—————————{——›———————››————›——››—›››—››—íz6GÆÆÆÆÆÆÆÆÆÆÆÆgÞüzzí—————————{—{————————{——›{›——{ —›——›››› ›—üÏ
                                                     GÇÏ{—{—————{———————————››——————›››—————————————›››         › ›››—›—›————{—{{—{›——————————————{ ››› —›››——{zG
                                                       Þüí{—{{{{{———{————{{———{›————{—————{————{{———›———————————————{—{{{{í——{{{{{{{{{{{{{{{——{{{›››—{—————›—zÞÏ
                                                         Þ6í——{—{{{{—{{{—›————{{——{——{———{{{{{{{———{{{{{{{{{{{{{{—{{{{{{{{{{{{{—{{———————{{{{{› › ——{—›››››íÞÇ
                                                          íÅ6í—————{————{{{{{————{››———í——››—{{—{{{{{{{{{{{{{{{{{{{{{{{{—{{{{{{{{{{{{{{{{{{———íí—í{—{›—›—íÇg
                                                            —Å6z{{{{{—{————{{{{———{{{{{{—›——{—{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{—í—›——›í—{—{———zÞg
                                                              —ÅÇz{——{{{{í{{{{{{{{{{í{—›››{í{{{——{{{{——{{—{{{{{{{{{{{{{{{{{{{{{{{{{{{{{íí{{{——í{{{›——ügG
                                                                 Æg6í{——{{{{{{{{{ííí›››—zí{{{{{í{{{{í{{í{{{{{{{{{{{{{{{{{í{í{í{{{í{í{{í{{íííí{{{—{zÞÆÞ
                                                                   ÏÅÇÏ{{—{{{{{{—{——›—{í{{{{{{{{{{{{{{{{{{{{{{{{{{{{íííí{{{{{{{{{í{{{íííí{{{{í{z6ÅÆ
                                                                      6ÞÇÏííízzzz›—{ízí{íí{íí{í{{{íííííííííííí{{íííí{í{{íí{{íííííí{íí{{{{{ííÏ6ÅÅÏ
                                                                         zü6z{›{{zzz{ííí{{{{{{{{{{{{{{{{{{{{{{í{{{{{{{{{{ííí{í{{{í{{ízízzüÇgÞí
                                                                             —zíízzííííííííííííííí{{{{{{ííííí{{íí{{í{íííííííízízízzíÏÏ6ÞÇÏ   
                                                                                —íízzízííííííííz{zzííííííííííízíízííííízííííízzííízÏÏí     
                                                                                            ››{ízzzzzzzzzzzzzzzzzízíííí{——*/