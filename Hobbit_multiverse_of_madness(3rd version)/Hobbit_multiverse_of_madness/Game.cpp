#include <iostream>
#include <string>
#include "Notification.h"

using namespace std;
int main() {
    // prototype
    Pokemon* dagger = new Default();
    //Pokemon* gumi = new Gumi();
    //Pokemon* fletchinder = new Fletchinder();
    //Pokemon* volcanion = new Volcanion();
    //Pokemon* frogadier = new Frogadier();
   // Pokemon* exeggcute = new Exeggcute();
    //Pokemon* rapidash = new Rapidash();
    //Pokemon* ponyta = new Ponyta();
    //Pokemon* maiev_skull = new Maiev();


    Pokemon* gumi = new Gumi();
    Pokemon* fletchinder = new Fletchinder();
    Pokemon* volcanion = new Volcanion();
    Pokemon* frogadier = new Frogadier();
    Pokemon* exeggcute = new Exeggcute();
    Pokemon* rapidash = new Rapidash();
    Pokemon* ponyta = new Ponyta();
    Pokemon* dublade = new Dublade();
    Pokemon* maiev = new Maiev();

    // Main character setup
    HealthPotion estus(5, 15);
    Main_character* player = new Main_character(dagger,&estus);

    // Enemy setup
    Enemy* shadow_fiend = new Nevermore();

    Enemy* shivarra_2 = new Shivarra();
    Enemy* shivarra_3 = new Elite_Shivarra();
    Enemy* draenei_1 = new Drainei();

    Enemy* ruiner = new Centaur_Warruiner();
    Enemy* centaur_2 = new Centaur();
    Enemy* centaur_1 = new Centaur();

    Enemy* yaroslave = new Yaero_Slave();
    Enemy* allkam = new Allkam();
    Enemy* danny = new Big_Danny_Leonardo();
    Enemy* tri = new Tri_Darkholme();
    Enemy* bill = new Bill_Helsing();
    Enemy* ricardo = new Ricardo_Milidows();

    Enemy* traxex_5 = new Traxex();
    Enemy* shivarra_1 = new Shivarra();

    Enemy* traxex_4 = new Traxex();
    Enemy* traxex_3 = new Traxex();
    Enemy* traxex_2 = new Traxex();
    Enemy* maghteridon = new Maghteridon();
    Enemy* qiraj = new Qiraj();
    Enemy* traxex_1 = new Traxex();
    Enemy* vulpera_2 = new Vulpera();
    Enemy* vulpera_1 = new Vulpera();
    
    // Epilogue
    string destiny = "Nevermore has fallen. The vile energies comprising his body blasted in a loud explosion of dust and fire. You could hear the souls of all his victims express their final relief.\nAnd yet, your story is not over. Something is about to happen, that's for certain, although you feel that it's no longer up to you to decide.\nType anything to proceed one last time.\n";
    Text* Destiny = new Event(destiny, nullptr, shadow_fiend, player);
    string evil_monologue = "- No, my beauties! - even Nevermore can grow attached to living beings, apparently, - You want to fight me head on so badly? I have plenty of assets under my command to deal with filth such as yourself!\nMaiev whispers: 'You have no chances against this outworlder. Set me free and will show him the meaning of true terror!'\nYou feel like this entire world hinged on your choices, but what if they weren't as obvious...Type anything to proceed with your destiny.\n";
    Text* Monologue = new Event(evil_monologue, Destiny, shivarra_3, player);
    string bodyguards = "- So, you have finally arrived, halfling. - a deep voice thundered across the tower, - The Dark Lord warned me that you will become a nuissance, but I never expected you to get this far. Anyway, soon, I will kill you and put down this poor attempt at an insurrection in Sauron's name! Cut him down, my beauties!\nOnly now you notice the two Shivarras approaching you. You can tell these are Nevermore's elite units based on their rich, but very revealing clothing.\nMarci appears out of nowhere and jumps straight into of the Shivarras, distracting her.\nNow this fight is equal.\nType anything to proceed with the battle.\n";
    Text* Bodyguards = new Event(bodyguards, Monologue, shivarra_2, player);
    string civil_war = "You rush to the palace. It is a magnificent tower made of colorful glass. Marci and other insurgents are battling for the entrance. A Shivarra stands in your way to the stairs.\nType anything to proceed with the battle.\n";
    Text* Civil_war = new Event(civil_war, Bodyguards, draenei_1, player);

    string the_coming_revolution = "- Who could have known... - Maiev admits defeat as she sees Anub'Arak's shiny carapace in the basement.\n- Greetings, Frodo, I knew we all could rely on you. Me and Marci are planning our coming revolution.\nHe is clearly referring to this cute lady sitting on a chair among the other revolutionaries. She waves her hand with the friendliest smile that you have ever seen.\nMarci, status update. - ordered Anub'Arak.\nShe starts making quick, energetic gestures in a attempt to explain you the plan. You realise that she is mute.\n- She has the other cells ready to rise up. They want to strike at my palace in the midst of chaos... I knew I could rely on my good girl! - said, quite surprisingly, Queen Maiev herself.\nHow can Maiev understand her?\n- You see, it is I who silenced her. Trust me, she gets annoying quickly. - your opinion of the goddess of destruction soured.\n- Frodo, do you understand the plan? - Anub'Arak asks you. You nod in agreement. Marci proceeds to loudly whistle and claps her hands. Everyone in the room get afoot and rushes to exit from the tavern.\nBefore you can join them, Anub'Arak stops you.\n- Frodo, this might sound inconsistent, but you need to know this information - Maiev's Skull is not a panacea against Nevermore's evil. She used to be a cruel tyrant no better than The Shadow Fiend. Please, don't let her get more power. May your destiny guide you.\nYou emerge from the tavern to see the streets engulfed in carnage - citizens are fighting their brethren, who were impressed into Nevermore's armies.\nBefore you join the fighting, Maiev whispers: 'I know what that scheming roach told you. I hope you will have the common sense to ignore his pathetic pleas for help. Afterall, you have just met these creatures and I am the only one who can get you home. Choose wisely, Frodo.\nType anything to proceed with the battle.\n";
    Text* The_coming_revolution = new Basict(the_coming_revolution, Civil_war);
    string tavern = "- Hobbit, turn back at once! I demand it! Who could have known that you are such a pathetic degenerate!? My queendom is rotting because of the outworld usurper and you want to spend your time drinking booze? You do remember that you will never get home unless I get more powers, right? You are nothing wihout me!..\nThis verbal abuse is interrupted by a strange gesture from the barkeeper. It seems that he is inviting to the basement of the tavern.\nType anything to proceed.\n";
    Text* Tavern = new Basict(tavern, The_coming_revolution);
    string finishline = "You arrive at the gates of Exodar. As expected, the Centaur patrol is nowhere to be seen. The Goddess of Destruction by your side fills you with determination.\nYou get inside the city, but always make sure to remain vigilant for the Shivarra patrols that are reinforcing Nevermore's reign of terror.\nAfter walking down the quarter in your hood, you notice something strange - the local tavern is still operational. But how, considering all that happened? You have a feeling this tavern is important. And so you enter it - the last symbol of hope for the local populace, denoted by a sign saying 'Hearthstone'.\n- Are you braindead!? - Maiev is clearly unnerved, - We came all this way for you to get drunk in a tavern full of these pathetic mortals and to get caught by Nevermore's minions!?\nYou ignore this arrogant prude's comments and get inside.\nType anything to proceed.\n";
    Text* Finishline = new Basict(finishline, Tavern);

    // Dungeon base data
    string maiev_intro = "Here it is - the famous Skull of Maiev, the artifact that will defeat The Shadow Fiend. And send you back home.\nYou come closer to touch the skull.\nSuddenly, the empty eye sockets started glowing with bright royal purple.\nThen, the most surprising event of the day happened, - the skull spoke.\n- Ah, at last! I AM ALIVE!.. Or so I thought... - the Skull spent some time contemplating its new position, - Anyway, this is a minor setback. You can relax, mortal - I will not punish you for failing to resurrect me in a proper way.\nYou wonder how can a literal dead skull call you a 'mortal'\n- You are not from around here, are you? Because if you were, you would have surely known that I am the Great Queen Maiev, the former ruler of Exodar. I have had many other titles throughout the millenia: The Widowmaker, La Hija de la Noche, The Goddess of Destruction, The Gray Wizard's Jailer...\nWhat? Could that possibly refer to Gandalf? Is this world the afterlife of Middle-Earth?\n- Yes, his name was something like that - I am not too good with the outworlders' names. Listen, I know your designs - you want to leave - just like the Gray Wizard and I am the eager to help, but first, you have to restore my queendom. Deal?\nThere was no other option - a deal it is.\nType anything to proceed.\n";
    string allkam_yaeroslave = "Here is another crossroad. You start to doubt if you were going down the right path.\nAnd yet, you still have to make a choice.\n1. Type 'K' to go to the right.\n2. Type 'Y' to go to the left.\n";
    string tri_aftermath = "- Van, to, tri...\nWhat a peculiar name.\nType anything to proceed.\n";
    string danny_aftermath = "- You spoke without respect...\nDanny's crime family is now over.\nType anything to proceed.\n";
    string danny_tri = "Before you lies another fork in the road.\nWhat shall be your choice?\n1. Type 'D' to go to the right\n2. Type 'T' to go to the left.\n";
    string billy_after = "- The name's Billy... - exclaimed the cloaked warrior before passing away.\nType anything to proceed.\n";
    string ricardo_after = "- Send my remains back to Brazil...\nRicardo has danced his last dance.\nType anything to proceed.\n";
    string ricardo_billy = "You continue your descend. The paths before you diverge to the left and the right.\nWhat shall be your choice?\n1. Type 'R' - go to the right\n2. Type 'B' - go to the left.\n";
    string dungeon_entrance = "You enter the Dungeon. Smells like rubber. You decide to stay alert - who knows what vile creatures lurk within...\nType anything to proceed.\n";

    // Centaur base data
    string better_call_saul = "- Please, spare me!- you sound genuinely scared, - I just wanted to pay my due to get to Exodar!\n- Nah. Listen up, lil' guy, u gonna pay ME, u dig?\n- But, shoudn't I pay your boss?\n- Da boss can sock me! Who do you think he is? He should be kissing my ass right now! Me and my brothers, we built this whole tribe!\n- I thought you guys built all this together... - a subtle plan begins to manifest in your head.\n- No-no! Saurok did! Saurok weapons! Saurok blood! The Warband, I train them! And he treats me like a dog!\nUsing the centaur's mental breakdown, you find an opening to run away.\nType any thing to proceed.\n";

    string ruiner_defeat = "The Centaur Warlord lies vanquished. His tribe will likely collapse and his people are no longer a threat to anyone who wants to enter Exodar. But your story is not yet over.\nType anything to proceed.\n";
    string centaur_boss_meeting = "You almost accidently run into a centaur in a very rich headress.\n- Ayo, gnome! Watch where you're going! - at this point he almost speaks an upper class dialect, - Let me guess, you want to get to Exodar, yes? Pay up! The price is 1000 coins!\n- I am afraid I don't have the money, sir.\n- Then why are you here wasting my time?\n- Well, I meant that I don't have any cash with me at the moment. If you want, I can write you a cheque. I have an account in Anub'Arak's bank.\n- What? I thought it was closed after Nevermore invaded... Well, money is money. Give me your cheque!\nThe centaur curiously watched you reaching into your jacket. Too bad you are reaching for a weapon and not his cheque.\nType anything to proceed with the battle.\n";
    string centaur_discovery = "Unfortunately, you were discovered while climbing a deserted cliff.\n- Ayo, intruda! I gotcha! Now, pay up or I'll chop u to pieces!\nType anything to proceed with the battle.\n";
    string stealth_2 = "That was a poor start. The Centaurs are tougher to trick than you thought. You decide to continue with caution to ambush their leader. Afterall, Hobbits are very skilled when it comes to stealth.\nType anything to proceed.\n";
    string centaur_path = "You set off to the lands of the Centaurs. You use the tracks made by their hooves to guide your path.\nEventually you reach something that could be the home of these raiders. A desolate place filled with ancient structures that were either demolished or burned. Impaled skeletons are a common sight.\nIt doesn't take you much time to run into one of them.\n- What'cha doin' 'ere lil' mae? Don't waste ma time.\n- I would like to see to your boss, to see if he is willing to accept my payment for the passage to Exodar.\n- Don't you dare horseshit me, lil' bastard! I can already see dat u light on cash! How 'about I just take yer scalp?\nType anything to proceed with the battle.\n";


    // Dungeon->Centaurs structure
    Text*  Centaur_fight = new Event(ruiner_defeat, Finishline, ruiner, player);
    string centaur_boss_confrontation = "You see another centaur quickly approaching you from afar. He is dressed very eloquently. For a centaur.\n- Stand down, villain! Nevermore has informed me about your deal with the dead witch!\nMaiev remarks: 'I was not aware they can speak like this at all. One your word and I will tear this little warlord's limbs apart.'\nLooks like this centaur's reign of terror is coming to an end.\nType anything to proceed with the battle.\n";
    Text* Centaur_boss_confrontation = new Basict(centaur_boss_confrontation, Centaur_fight);

    string centaur_2_fight = "Maiev whispers: 'I am enjoying your work... We will make a wonderful team. Just make sure these other Pokemons don't get in my way.'\nType anything to proceed.\n";
    Text* Centaur_2_fight = new Event(ponyta, centaur_2_fight, Centaur_boss_confrontation, centaur_2, player);
    Text* Discovery = new Basict(centaur_discovery, Centaur_2_fight);
    string maiev_comment_2 = "Maiev has decided to enlighten you: 'These creatures may seem stupid, but they are good at sensing fear. If you want to remain in the shadows, you will have to be fearless. And I doubt you can manage that.'\nType anything to proceed.\n";
    Text* Maiev_comment_2 = new Basict(maiev_comment_2, Discovery);
    Text* Stealth_2 = new Event(rapidash, stealth_2, Maiev_comment_2, centaur_1, player);

    string maiev_comment_1 = "Maiev whispers: 'Let your pets rest, hobbit. I can easily annihilate this brute.'\nType anything to proceed with the battle.\n";
    Text* Maiev_comment_1 = new Basict(maiev_comment_1, Stealth_2);
    Text* Centaur_path = new Basict(centaur_path, Maiev_comment_1);

    Text* Yaeroslave_prime = new Event(maiev, maiev_intro, Centaur_path, yaroslave, player, 'y');
    Text* Allkam_prime = new Event(maiev, maiev_intro, Centaur_path, allkam, player, 'k');
    Text* Crossroad_3_prime = new Pivot(allkam_yaeroslave, Yaeroslave_prime, Allkam_prime);

    Text* Tri_prime = new Event(tri_aftermath, Crossroad_3_prime, tri, player, 't');
    Text* Danny_prime = new Event(exeggcute, danny_aftermath, Crossroad_3_prime, danny, player, 'd');
    Text* Crossroad_2_prime = new Pivot(danny_tri, Danny_prime, Tri_prime);

    Text* Billy_prime = new Event(billy_after, Crossroad_2_prime, bill, player, 'b');
    Text* Ricardo_prime = new Event(frogadier, ricardo_after, Crossroad_2_prime, ricardo, player, 'r');
    Text* Crossroad_1_prime = new Pivot(ricardo_billy, Ricardo_prime, Billy_prime);

    Text* Dungeon_entrance_prime = new Basict(dungeon_entrance, Crossroad_1_prime, 'm');

    

    // Centaurs->Dungeon structure
    Text* Yaeroslave = new Event(maiev, maiev_intro, Finishline, yaroslave, player, 'y');
    Text* Alllkam = new Event(maiev, maiev_intro, Finishline, allkam, player, 'k');
    Text* Crossroad_3 = new Pivot(allkam_yaeroslave, Yaeroslave, Alllkam);

    Text* Tri = new Event(tri_aftermath, Crossroad_3, tri, player, 't');
    Text* Danny = new Event(exeggcute, danny_aftermath, Crossroad_3, danny, player, 'd');
    Text* Crossroad_2 = new Pivot(danny_tri, Danny, Tri);

    Text* Billy = new Event(billy_after, Crossroad_2, bill, player, 'b');
    Text* Ricardo = new Event(frogadier, ricardo_after, Crossroad_2, ricardo, player, 'r');
    Text* Crossroad_1 = new Pivot(ricardo_billy, Ricardo, Billy);

    Text* Dungeon_entrance = new Basict(dungeon_entrance, Crossroad_1);

    Text* Centaur_fight_prime = new Event(dublade, ruiner_defeat, Dungeon_entrance, ruiner, player);
    Text* Centaur_boss_meeting = new Basict(centaur_boss_meeting, Centaur_fight_prime);
    Text* Better_call_saul = new Basict(better_call_saul, Centaur_boss_meeting);
    Text* Discovery_prime = new Basict(centaur_discovery, Better_call_saul);
    Text* Stealth_2_prime = new Event(rapidash, stealth_2, Discovery_prime, centaur_1, player);
    Text* Centaur_path_prime = new Basict(centaur_path, Stealth_2_prime, 'c');

    // Convergence + pivot
    string path_choice = "Before you enter the Dungeon, you still have a choice to make. Without the ability to enter Exodar, your possession of the Skull is irrelevant. So maybe you deal with the troublesome Centaur goons first? Or you just claim the Skull first and use its powers to clear the path to the the city?\nWhat shall be your choice?\n1. Type 'C' if you want to find the base of the Centaur savages and clear your eventual path to Exodar.\n2. Type 'M' if you want to enter the Dungeon now and begin your search for the Skull.\n";
    Text* Path_choice = new Pivot(path_choice, Centaur_path_prime, Dungeon_entrance_prime);

    // Anubarak wasteland
    string messenger = "You can almost see the gate of the dungeon, but you are once again interrupted. This time its a more familiar creature - a Centaur. Wait, how is that familiar? Were there Centaurs in Middle-Earth? Anyway.\n- Hey ya, gnome! Ya look like ya want trouble! Are ya heading for 'Xodar?\n- Well, I'm clearly headed for this scary dungeon, don't you see?\n- Wait a moment... 'Erright, sorry, I guess everyone has their kinks, eh? Still, you don't look like ye're from 'round 'ere, so, fyi, you should pay my boss a fat stack of cash if you ever do wanna move to 'Xodar. You dig?\n- As a matter of fact, good sir, I do, so to speak, dig.\n- Arright, I gotta bounce then.\nThis information is clearly important.\nType anything to proceed.\n";
    Text* Messenger = new Basict(messenger, Path_choice);
    string dungeon_sight = "The battle is over. You wanted to think about something, but you are interrupted by a sight from afar. It was a grim, tall structure that clearly is attended to just enough for it to retain its vile look. It has to be the Dungeon.\nType anything to proceed.\n";
    Text* A_dungeon_sight = new Event(dungeon_sight, Messenger, shivarra_1, player);
    string wasteland = "You are now trekking through what could only be described as a wasteland - there is nothing but scorched earth around you. You wonder if Illidan could have explained what happened here, although you have a feeling you already know the answer.\nYour thoughts are interrupted by an ominous sight - a massive creature approaches you. It is large and has a torso of a human woman with six arms.\n- In Nevermore's name, I shall arrest you and bring you under HIS judgement! - this creature's voice thundered.\nType anything to proceed with the battle.\n";
    Text* Wasteland = new Basict(wasteland, A_dungeon_sight);

    // Illidan wasteland
    Text* Dungeon_sight = new Event(dungeon_sight, Path_choice, traxex_5, player);
    string last_patrol = "You ran for what seemed like an eternity. You finally decided to stop right before your legs experienced a muscle failure. You can finally take a look around and...an arrow flies straight to your face. You do not have time to think about the right-hand rule, you have to fight.\nPress anything to proceed with the battle.\n";
    Text* Last_patrol = new Basict(last_patrol, Dungeon_sight);
    string illidan_diversion = "- Before we secure Maiev's Skull, I would like to warn you, Frodo, about what lies ahead. The Shadow Fiend had made allies against Exodar - the Centaurs. These traitorous creatures assisted him in starving the city with their endless raids. They now patrol the entrances to Exodar and demand coins for safe passage. We will have to deal with them too...\nIllidan is interrupted. Again. A massive creature approaches you. Again. But this time, it does not remind you of lizards - this beast has the body of a human woman with six arms.\n- In Nevermore's name, I shall arrest you two and bring you under HIS judgement! - this creature's voice thundered.\n- I would like to see you try, - Illidan has a smug smile on his face, - Frodo, this fight is not for you. Run! Get the skull and save my people!\nFor a moment you stand there, unsure of what you should do.\n- Run, you fool!\nType anything to proceed.\n";
    Text* Illidan_diversion = new Basict(illidan_diversion, Last_patrol);
    string trek_through_the_wasteland = "You are now trekking through what could only be described as a wasteland - there is nothing but scorched earth around you. You wonder if your companion can explain what happened here, although you have a feeling you already know the answer.\n- Citizens of Exodar battled with The Shadow Fiend's demonic army on these plains not that long ago... They lost, Frodo.\nYou can't help but notice how much those words impacted Illidan. You decide to stop with the questions for now.\nType anything to proceed.\n";
    Text* Trek_through_the_wasteland = new Basict(trek_through_the_wasteland, Illidan_diversion);

    // Anubarak path storyline
    string last_traxex = "Now Anub'Arak's will is fulfilled and the Shadow Fiend's minions are disposed of.\nWait, what's this? This is a small Pokemon shaped like an arrow, Fletchinder. You guess that it's the Traxi pet, corrupted with demonic energies. Seems that when its masters were destroyed, the creature became peaceful.\nPerhaps Anub'Arak is right and destiny itself is assisting you on your journey.\nType anything to proceed.\n";
    Text* Last_traxex = new Event(fletchinder, last_traxex, Wasteland, traxex_4, player);
    string trax_alarm = "The noise of your battle has attracted the attention of the last ranger, who has been resting, until you awakened her.\nIt is time to finish this.\nType anything to proceed with the battle.\n";
    Text* Trax_alarm = new Event(trax_alarm, Last_traxex, traxex_3, player);
    string stealth = "From then on, you always move carefully, paying maximum attention to your surroundings. Hobbits' innate stealthy abilities are very helpful here.\nYour Pokemons share your vigilance and avoid unnecessary sound.\nSeems that your attentiveness pays off as you notice one of the Traxi rangers on watchman duty. No doubt she is defending their encampment.\nType anything to proceed with the battle.\n";
    Text* Stealth = new Event(stealth, Trax_alarm, traxex_2, player);
    string back_to_ashenvale = "Here you are, in the forest, again. Now you have to accommodate to the smell once again.\nYour laments are interrupted by an arrow. Due to your small size, you ducked quickly enough to barely avoid being hit.\nOn the bright side, it seems like you are on the right path.\nType anything to proceed with the battle.\n";
    Text* Back_to_Ashenvale = new Basict(back_to_ashenvale, Stealth);
    string anubarak_choice = "- Well, seems like you have made your choice, halfling. I am going to save my city alone, then. I don't think we will meet again.\nIllidan's wings spring and, within a moment, he is already up in the sky.\nThis is a shame, but then again, the petty prince's powers are clearly too meagre to put up a fight against the forces of evil.\nAlone, you start your journey back to the forest to deal with the Shadow Fiend's minions.\nType anything to proceed.\n";
    Text* Anubarak_choice = new Basict(anubarak_choice, Back_to_Ashenvale, 'a');

    // Illidan path storyline
    string maghteridon_fall = "- I believe I owe you an explanation, Frodo.\n- It is true, I never was the 'Prince of Ashenvale'. This accursed place always was Maghteridon's evil hideout. I bargained with him bacause I need some of his power to liberate Exodar, I then offered him my soul and eternal servitude.\n- I understand if you would never want to cross paths with me again, but know that everything that I did, I did for my people.\nWho could've known? Illidan lied to you and almost got you killed, yet you still have sympathy for his mission.\nTogether, you and Illidan continue your quest for the Skull of Maiev.\nType anything to proceed.\n";
    Text* Maghteridon_fall = new Event(volcanion, maghteridon_fall, Trek_through_the_wasteland, maghteridon, player);
    string maghteridon_encounter = "You soon learn the source of this rumble - a giant was rapidly approaching you and Illidan. Twisted trees crumbled under his feet. He resembled a gargantuan lizard that had two additional arms, in which he held his massive spear.\nHe seemed about 5 metres tall. This would've been horrifying for anyone, let alone a hobbit.\n- Lord Maghteridon! I did not expect to encounter you on my path here. - Illidan exclaimed.\n- Me neither, Illidan. I thought that you ran away from me. That would be lowly for someone who styles himself 'Prince of Ashenvale', don't you think?\n- I am confused, Lord Maghteridon, what are you implying?\n- Don't take me for a fool! I know that you proposed your deal in bad faith, but now you humiliate me by claiming my domain as your own! I AM THE ONE AND ONLY LORD OF ASHENVALE!\n- This is about to change, Maghteridon, for you see, I already have my first subject. You have underestimated me. - Illidan's enthusiasm fills your heart with determination.\n- BAH-HA-HA-HA! Is this pathetic rodent your only trump card? Is this how you use the powers I gave you? The only thing I am underestimating about you is your sheer STUPIDITY!\nType anything to proceed with the battle.\n";
    Text* Maghteridon_encounter = new Basict(maghteridon_encounter, Maghteridon_fall);
    string illidan_choice = "\n- I knew I could rely on your judgement, Frodo. Now, we have to return to Ashenvale, the Dungeon is not far from there.\n...\nYou wonder why can't Illidan just carry you both to the forest using his wings.\n- They are decorative, Frodo. - answered Illidan, - Impractical, but stylish.\n...\nSoon you were once again in the forest. You now have to accommodate to the smell once again.\nYour laments are interrupted by a distant rumble that keeps getting louder and louder...\nType anything to proceed.\n";
    Text* Illidan_choice = new Basict(illidan_choice, Maghteridon_encounter, 'i');

    // The only pivot of the game
    string anubarak_pivot = "...- And please, do me a little favor - slay the Traxi of the Ashenvale forest. These wretches are bothering me and my larvae ever since the Shadow Fiend took power in Exodar. I have trust in your abilities, Hobbit. May destiny guide you.\n...\nYou and Illidan crawled back to the surface.\n- Listen, Frodo, I know you probably trust Anub'Arak more than myself, but you don't have to do his bidding for him. We just need to recover Maiev's skull to destroy the Shadow Fiend, so, shouldn't we get going?\nAnub'Arak's wisdom is undeniable and yet Illidan is right in his own way.\nWhat shall be your choice?\n1. Type 'A' if you want to complete Anub'Arak's wish and destroy the Traxi raiders.\n2. Type 'I' if you agree with Illidan and want to go straight to recovering Maiev's skull.\n";
    Text* Anubarak_pivot = new Pivot(anubarak_pivot, Anubarak_choice, Illidan_choice);

    // Travel to Anubarak's nest
    string anubarak_nest = "After killing the Qiraj, you and Illidan descend into the depths of Anub'Arak's nest.\nEventually, after crawling for many metres, you finally witnessed him - a giant beettle with a massive, shining carapace.\n- Ah, Illidan. I knew you would come back soon, but you need to understand that power has a price...\n- Good day to you too, wise Anub'Arak, - Illidan interrupted, - I do not come on my own behalf, it is my new subject who wanted to speak with you.\nYou quickly introduced yourself to the beetle elder and explained your situation.\n- Came from another world? Just like the infamous Shadow Fiend... - Anub'arak mumbled.\n- What!? You told me nothing when I asked for your help!- Illidan yelled.\n- It is not up to you, petty 'prince'. This Hobbit is the only one who could slay the Shadow Fiend. Now listen to me, Frodo, travel to the Dungeon and recover the artifact known as the Skull of Maiev. Only with its power will you be able to slay the Dark Spawn...\nType anything to proceed.\n";
    Text* Anubarak_nest = new Event(anubarak_nest, Anubarak_pivot, qiraj, player);
    string trek_to_the_nest = "- Anub'Arak is an underworld dweller. He and other arachnids live in their nests underground and I am certain that I know the way. If you do want to return home, you have to trust me.\n...\nYour trust in Illidan wanes the longer you travel. You have to learn more if you were to keep following him. A good start would be asking why a prince has so few subjects.\n- I was more prominent before my forest succumbed to Maghteridon's corruption.\n- Who is that?\n- He is an abominable warlock, dabbling with evil powers. His presence alone makes nature itself deathly ill. One day, he showed up in my forest and my subjects... Wait, that is the entrance to Anub'arak's underground village! As I said, you can trust me...\nBut before Illidan could finish expressing his vindication, a giant beetle emerged from the hole in the ground, screeching and scratching the clay right before you.\nType anything to proceed with the battle.\n";
    Text* Trek_to_the_nest = new Basict(trek_to_the_nest, Anubarak_nest);
    string anubarak_intro = "- The only being that could help you get home is Anub'Arak, the elder of the arachnids. I will guide you to him, just be ready to fend for yourself in case the wild Qiraji attack.\nYou decided not to test Illidan's patience by asking who those are.\n...\nYou trek for days. You have left the Ashenvale forest many moons ago. The air got cleaner, but the new landscape still induces naught but melancholy - it is an empty desert of clay and holes in between them.\nAs another day goes by, you finally decide to question your companion.\nType anything to proceed.\n";
    Text* Anubarak_intro = new Basict(anubarak_intro, Trek_to_the_nest);

    // Illidan's entry
    string first_traxex = "- This was a Traxex, one of the inhabitants of this forest. They are drafted into the Shadow Fiend's ranger squads who patrol Ashenvale, looking for dissidents. Like the two of us.\nWhat is this shadow fiend? Could it possibly be Sauron or one of his minions? You ask Illidan about this.\n- No one knows anything about the Shadow Fiend or his demonic armies. Except that they are now the cruel overlords of Exodar.\nYou can notice that Illidan is stricken with sorrow. Perhaps this shadow fiend's cruelty is similar to the Orcs'...\nType anything to proceed.\n";
    Text* First_traxex = new Event(first_traxex, Anubarak_intro, traxex_1, player);
    string illidan_convinced = "- Is that so? I suppose you are not lying, as I have never seen a creature such as yourself in the 15000 years of my long life.\n- I will help you, outworlder, as long as you help me. You see, my home city has been invaded by a Fiend From The Shadows. I have secured new powers not that long ago, but I'm afraid they are not enough to take on... \nIllidan is interrupted by a movement you failed to register. He grabs you and quickly ducks behind a decaying tree.\nAs it turns out, someone was trying to shoot you as an arrow flew straight through the place you were standing on a moment ago.\nType anything to proceed with the battle.\n";
    Text* Illidan_convinced = new Basict(illidan_convinced, First_traxex);
    string illidan_carrot = "- You dare to defy me, halfling? - Illidan raised his voice, - Now you will feel the wrath of ten thousand years!\nType anything to fight...oh, wait a moment, Hobbits are masters of persuasion, are they not?\nYou have already used the stick and established the position of strength, now it is time for the carrot.\nYou tell Illidan that you come from another world and that you would follow him if he promises to help you go back.\nNow you can type anything to proceed.\n";
    Text* Illidan_carrot = new Basict(illidan_carrot, Illidan_convinced);
    string illidan_stick = "- Worthy of what? - you ask the stranger.\n- To serve me, of course. I am Illidan, Prince of Ashenvale, and, although I do not have any subjects right now, my destiny is that of a great ruler! So, join me now, or be eliminated.\nYou wouldn't have made it to Mount Doom if you were naive. This 'prince' is no dark lord capable of killing. \nYou clearly express your reservations about the prospect of being Illidan's first subject.\nType anything to proceed.\n";
    Text* Illidan_stick = new Basict(illidan_stick, Illidan_carrot);
    string illidan_intro = "The creature refers to itself as 'Gumi'. Good to know, isn't it? Now you have a loyal companion, although it doesn't seem like it has the sentience to help you break Sauron's curse.\nYour thoughts are interrupted by an unknown voice : 'You are tougher than you look, halfling.' - you turn around.\nBefore you stands another creature - he is a tall, dark-skinned humanoid with pointy ears similar to those of the Elves from Middle-Earth. Yet there is something eerie about him - he has hooves, wings and horns, almost as if he is victim of an unnatural transformation.\n- Gumi accepts you, mortal, this is a sign that you are worthy.\nType anything to proceed.\n";
    Text* Illidan_intro = new Event(illidan_intro, Illidan_stick, vulpera_2, player);

    // Beginning
    string test_poke = "Before you can get properly acquainted with your new friend, you are ambushed by another fox-man!\nIt seems that the slimy creature is willing to assist you.\nType anything to proceed with the battle.\n";
    Text* Test_poke = new Basict(test_poke, Illidan_intro);
    string poke_intro = "Adreline is still rushing through your veins and yet you are victorious. The foxy beast lies vanquished before your feet. You haven't experienced such emotion since your trek through Shelob's cave.\nWhile you were coming back to your senses, a pile of purple slime was moving towards you. It seemed friendly...and cute...\nYou have decided to take it with you.\nType anything to proceed.\n";
    Text* Poke_intro = new Event(gumi, poke_intro, Test_poke, vulpera_1, player);
    string first_encounter = "You are not alone in this forest. Little green lights are glowing through the gloom, following your every move. The deeper you travel, the more intense their presence becomes.\nIt is only after you decide to take a short, well-deserved break, that these lights finally reveal themselves.\nThese beasts are similar to foxes, but they can walk straight and are clearly capable of using primitive tools.\nThis one wields a curved dagger.\nType anything to proceed with the battle.\n";
    Text* First_encounter = new Basict(first_encounter, Poke_intro);
    string forest = "You awaken in a strange place. Your surroundings quickly blend into a vibrant mix of green and purple akin to the ones experienced in a fever dream. The air is absolutely horrific. Seems that the twisted trees bleeding with purple goo are the main source of this abominable stench.\nAnd yet, you have to get moving - whatever Sauron conjured here cannot distract you from your quest. Gondor must not fall!\nType anything to proceed.\n";
    Text* Forest = new Basict(forest, First_encounter);

    // Intro
    string intro = "- It's over, Sauron! - you yelled while holding the Ring of Power right over the molten core of Mount Doom.\n- You pitiful creature, - the Dark Lord's voice thundered, - I have plenty of assets under my command to deal with filth such as yourself!\nYou feel the earth tremble beneath you, as if the bridge within Mount Doom was collapsing. Was the Dark Lord prepared for your gambit all along? Before you could contemplate that, your memories quickly fade away...\nType anything to proceed.\n";
    Text* Intro = new Basict(intro, Forest);
    string welcome = "Welcome to Hobbit and the Multiverse of Madness! This is a text RPG, so be prepared to properly type in your responses to progress with the game.\nIf you type 'SURRENDER' at any moment that isn't a battle or an active choice, you will end the game immediately. Good luck!\nType anything to proceed.\n";
    Text* Welcome = new Basict(welcome, Intro);

    // Running code
    if (Welcome->text_out())
    {
        // Good ending
        if ((maiev_power == 0) && (inventory[2]->getNumber() != 0))
        {
            cout << "- Thanks, for your service, little hobbit. Now, when this petty usurper is out of my city, my glorious reign will blossom again!" << endl
                << "Where one empty skull once lied, an unnatural transformation began. Purple glow shrouded the throne room. The Queen began to grow with bones and flesh." << endl
                << "You look around. You see Marci. Her expression is the one of sorrow and...angst. Perhaps Queen Maiev's return inspires little enthusiasm." << endl
                << "You look at Anub'Arak. For some reason, he has a smug smile. What was he planning... Then, suddenly..." << endl
                << "...A winged figure breaks through the glass walls of the high tower. This is Illidan!" << endl
                << "- Begone from my city, wretch! - Illidan exclaimed while casting one of the spells he learned from Maghteridon." << endl
                << "Maiev's metamorhosis stops and she turns back into an empty skull." << endl
                << "- Who even are you!? - screamed a familiar voice from the skull, - I will disassemble your weak mortal body, you weakling! I will take your blood! I will take your meat! I will take your soul!..." << endl
                << "Illidan interrupted the queen by stomping her skull with one of his hooves." << endl
                << "- It is done." << endl
                << "All hail prince Illidan! - proclaimed Anub'Arak. Citizens of Exodar started enthusiastically expressing their gratitude. Many of them most likely have never heard of Illidan, but his courage has clearly won over their hearts." << endl
                << "Illidan approaches you." << endl
                << "- Sorry for disappearing, Frodo, I was resisting Nevermore outside of Exodar, but I never forgot about my promise to you. You see, I can't return you home on my own, but I know why you are here, in our world, - the dark mage Bane of Karazhan is the sorcerer on our side who summoned both you and The Shadow Fiend here. We will have to defeat him to save your world." << endl
                << "Looks like you are about to embark on your next adventure..." << endl
                << endl
                << "***" << endl
                << endl
                << "Thanks for playing the demo version of 'Hobbit, the Multiverse of Madness'. Stay tuned for the next release and make sure to get the other endings!" << endl;
        }
        // Bad ending
        else if (maiev_power >= 3)
        {
            cout << "- Thanks, for your service, little hobbit. Now, when this petty usurper is out of my city, my rule will last forever!" << endl
                << "Where one empty skull once lied, an unnatural transformation began. Purple glow shrouded the throne room. The Queen began to form with dark energies." << endl
                << "You look around. You see Marci. Her expression is the one of true terror. Perhaps Queen Maiev's new form is not what these people have ever seen before." << endl
                << "You try to look for Anub'Arak. For some reason, cannot be seen anywhere inside the tower. What is he doing? Then, suddenly..." << endl
                << "...A horrifying roar breaks the glass walls of the high tower." << endl
                << "- HA-HA-HA! I FEEL POWER! ALL OF THESE SOULS INSIDE ME!" << endl
                << "Maiev's metamorhosis doesn't seem to stop. She grows and grows into a gargantuan figure made of pure darkness." << endl
                << "- ALL THAT THANKS TO YOU, LITTLE HOBBIT! I THINK I AM OBLIGED TO EXPRESS MY GRATITUDE, AM I NOT? YOU FED ME ALL OF THESE POOR SOULS LIKE THE GOOD BOY YOU ARE!" << endl
                << "- AND NOW I COMMAND THIS ENTIRE DIMENSION! AND SOON, I MIGHT EVEN TAKE OVER YOUR WORLD AS WELL!" << endl
                << "- USUALLY I DO KEEP MY PROMISES, BUT I THINK THE CIRCUMSTANCES HAVE CHANGED. I SHALL NOT DO THE BIDDING OF A FILTHY INSECT!" << endl
                << "Queen Maiev disassembles your body and soul." << endl
                << endl
                << "***" << endl
                << endl
                << "Thanks for playing the demo version of 'Hobbit, the Multiverse of Madness'. Stay tuned for the next release and make sure to get the other endings!" << endl;
        }
        else
        {
               cout << "- Thanks, for your service, little hobbit. Now, when this petty usurper is out of my city, my glorious reign will blossom again!" << endl
                 << "Where one empty skull once lied, an unnatural transformation began. Purple glow shrouded the throne room. The Queen began to grow with bones and flesh." << endl
                 << "You look around. You see Marci. Her expression is the one of sorrow and...acceptance. Perhaps Queen Maiev is the ruler these people are accustomed to." << endl
                 << "You look at Anub'Arak. He look at you, disappointed. What is he thinking? Then, eventually..." << endl
                 << "Maiev's metamorhosis ends as she turns into a tall woman with long, dark hair." << endl
                 << "- Your Queen is back, loyal subjects! - exclaimed voice that you know all too well, - Get back to your posts!" << endl
                 << "- Except the bug. The Queen shall punish all deceitful traitors!" << endl
                 << "Maiev disassebled Anub'Arak's body, together with his shiny carapace." << endl
                 << "- Why are you just standing there, little hobbit? You are my most loyal soldier and I would love to have you by my side..." << endl
                 << "- ...but I know that nothing in this world truly matters to you, does it?" << endl
                 << "- I shall grant you the only fair reward..." << endl
                 << "You feel yourself losing all mass and briefly floating for a moment.\nAfter you blink, you are back in Mount Doom. As the tiny bridge that used to hold you already collapsed, you starting falling down." << endl
                 << "Where is the ring? It is the only thing that has value now..." << endl
                 << "It is here, safely hidden in your jacket. As you fall right into the lava, you finally feel relief. Sauron's empire is over." << endl
                 << endl
                 << "***" << endl
                 << endl
                 << "Thanks for playing the demo version of 'Hobbit, the Multiverse of Madness'. Stay tuned for the next release and make sure to get the other endings!" << endl;
         }
    }


    delete dagger;
    for (int i = 0; i < POKEMON_NUMBER; i++)
    {
        delete inventory[i];
    }

    delete traxex_1;
    delete traxex_2;
    delete traxex_3;
    delete traxex_4;
    delete traxex_5;
    delete vulpera_1;
    delete vulpera_2;
    delete qiraj;
    delete maghteridon;
    delete shivarra_1;
    delete shivarra_2;
    delete shivarra_3;
    delete bill;
    delete danny;
    delete allkam;
    delete tri;
    delete ricardo;
    delete yaroslave;
    delete centaur_1;
    delete centaur_2;
    delete ruiner;
    delete draenei_1;
    delete shadow_fiend;


    delete Welcome;
    delete Intro;
    delete Forest;
    delete First_encounter;
    delete Poke_intro;
    delete Test_poke;

    delete Illidan_intro;
    delete Illidan_stick;
    delete Illidan_carrot;
    delete Illidan_convinced;
    delete First_traxex;

    delete Anubarak_intro;
    delete Trek_to_the_nest;
    delete Anubarak_nest;
    delete Anubarak_pivot;

    delete Illidan_choice;
    delete Maghteridon_encounter;
    delete Maghteridon_fall;

    delete Anubarak_choice;
    delete Back_to_Ashenvale;
    delete Stealth;
    delete Trax_alarm;
    delete Last_traxex;

    
    delete Centaur_fight;
    delete Centaur_boss_confrontation;
    delete Centaur_2_fight;
    delete Discovery;
    delete Maiev_comment_2;
    delete Stealth_2;
    delete Maiev_comment_1;
    delete Centaur_path;
    delete Yaeroslave_prime;
    delete Allkam_prime;
    delete Crossroad_3_prime;
    delete Tri_prime;
    delete Danny_prime;
    delete Crossroad_2_prime;
    delete Billy_prime;
    delete Ricardo_prime;
    delete Crossroad_1_prime;
    delete Dungeon_entrance_prime;

    delete Yaeroslave;
    delete Alllkam;
    delete Crossroad_3;
    delete Tri;
    delete Danny;
    delete Crossroad_2;
    delete Billy;
    delete Ricardo;
    delete Crossroad_1;
    delete Dungeon_entrance;
    delete Centaur_fight_prime;
    delete Centaur_boss_meeting;
    delete Better_call_saul;
    delete Discovery_prime;
    delete Stealth_2_prime;
    delete Centaur_path_prime;

    delete Path_choice;

    delete Messenger;
    delete A_dungeon_sight;
    delete Wasteland;

    delete Dungeon_sight;
    delete Last_patrol;
    delete Illidan_diversion;
    delete Trek_through_the_wasteland;

    delete Finishline;
    delete Tavern;
    delete The_coming_revolution;

    delete Civil_war;
    delete Bodyguards;
    delete Monologue;
    delete Destiny;
    delete player;
    return 0;

}
