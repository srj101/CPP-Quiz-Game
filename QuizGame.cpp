#include<bits/stdc++.h>
#include<iostream>
#include<time.h>
#include<string.h>
#include<windows.h>
using namespace std;

vector< pair<string,pair<string,pair<int,string> > > > cas;
vector< pair<string,pair<string,pair<int,string> > > > ement;
vector< pair<string,pair<string,pair<int,string> > > > general;
vector< pair<string,pair<string,pair<int,string> > > > sport;
vector< pair<string,pair<string,pair<int,string> > > > history;
vector< pair<string,pair<string,pair<int,string> > > > mathametic;
int score ,q,s,correctAns,wrongAns;
void setcolorandbackground(int textc,int backg)
{
    WORD color = ((backg & 0x0F)<<4) + (textc & 0x0F);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}
int random()
{
	system("cls");
	srand(time(0));
	int r = rand()%20;
	return r;	
}
void mainQuestion(vector< pair<string,pair<string,pair<int,string> > > > vec,int r)
{
				int choose;
			
				setcolorandbackground(3,0);
				cout << vec[r].first << endl;
				setcolorandbackground(10,0);
				cout << "\nOPTION: " ;
				setcolorandbackground(15,0);
				cout << vec[r].second.first << endl;
				cout << "\n";

							
				setcolorandbackground(6,0);
				cout << "Choose Your Option (IF YOU WANNA SKIPP THIS QUESTION, THEN PRESS 0): ";
				cin>>choose;
				if(choose == vec[r].second.second.first)
				{
					setcolorandbackground(10,0);
					cout << "\nCongratulations!! You Got 10 Points ... \n" << endl;
					score+=10;
					q++;
					correctAns++;
				}
				else if(choose == 0)
				{
					setcolorandbackground(2,0);
					cout << "\nYou Skipped This Question \n" << endl;
					s++;
	
				}
				else
				{
					setcolorandbackground(4,0);
					cout << "\nYou got -5  ... \n" << endl;
					setcolorandbackground(2,0);
					cout << "\nCorrect Answer is : " << vec[r].second.second.second << endl;
					score -=5;
					q++;
					wrongAns++;
				}
				getchar();
}
void sports()
{
sport.push_back({"In golf, what name is given to a hole score of two under par?" , {"\n 1. Albatross \n 2. Eagle \n 3. Bogey \n 4. Birdie ",{2,"Eagle"}}});
sport.push_back({"In what sport is a 'shuttlecock' used?" , {"\n 1. Rugby \n 2. Badminton \n 3. Cricket \n 4. Table Tennis ",{2,"Badminton"}}});
sport.push_back({"Which team won the 2015-16 English Premier League?" , {"\n 1. Cheslea \n 2. Leicester City \n 3. Liverpool \n 4. Manchester United ",{2,"Leicester City"}}});
sport.push_back({"In baseball, how many fouls are an out?" , {"\n 1. 2 \n 2. 0 \n 3. 5 \n 4. 3 ",{2,"0"}}});
sport.push_back({"Which country will host the 2020 Summer Olympics?" , {"\n 1. Germany \n 2. Australia \n 3. Japan \n 4. China ",{3,"Japan"}}});
sport.push_back({"Who won the 2015 Formula 1 World Championship?" , {"\n 1. Lewis Hamilton \n 2. Sebastian Vettel \n 3. Jenson Button \n 4. Nico Rosberg ",{1,"Lewis Hamilton"}}});
sport.push_back({"Which driver has been the Formula 1 world champion for a record 7 times?" , {"\n 1. Fernando Alonso \n 2. Ayrton Senna \n 3. Jim Clark \n 4. Michael Schumacher ",{4,"Michael Schumacher"}}});
sport.push_back({"What was the final score of the Germany vs. Brazil 2014 FIFA World Cup match?" , {"\n 1. 16 - 0 \n 2. 7 - 1 \n 3. 3 - 4 \n 4. 0 - 1 ",{2,"7 - 1"}}});
sport.push_back({"How many points did LeBron James score in his first NBA game?" , {"\n 1. 19 \n 2. 69 \n 3. 41 \n 4. 25 ",{4,"25"}}});
sport.push_back({"In Baseball, how many times does the ball have to be pitched outside of the strike zone before the batter is walked?" , {"\n 1. 4 \n 2. 3 \n 3. 2 \n 4. 1 ",{1,"4"}}});
sport.push_back({"What team won the 2016 MLS Cup?" , {"\n 1. Montreal Impact \n 2. Toronto FC \n 3. Colorado Rapids \n 4. Seattle Sounders ",{4,"Seattle Sounders"}}});
sport.push_back({"What year did the New Orleans Saints win the Super Bowl?" , {"\n 1. 2010 \n 2. 2011 \n 3. 2009 \n 4. 2008 ",{1,"2010"}}});
sport.push_back({"Which team has won the most Stanley Cups in the NHL?" , {"\n 1. Detroit Red Wings \n 2. Montreal Canadians \n 3. Chicago Blackhawks \n 4. Toronto Maple Leafs ",{2,"Montreal Canadians"}}});
sport.push_back({"When was the first official international game played?" , {"\n 1. 1880 \n 2. 1872 \n 3. 1863 \n 4. 1865 ",{2,"1872"}}});
sport.push_back({"In bowling, what is the term used for getting three consecutive strikes?" , {"\n 1. Eagle \n 2. Flamingo \n 3. Birdie \n 4. Turkey ",{4,"Turkey"}}});
sport.push_back({"Which African American is in part responsible for integrating Major League baseball?" , {"\n 1. Curt Flood \n 2. Satchell Paige \n 3. Jackie Robinson \n 4. Roy Campanella ",{3,"Jackie Robinson"}}});
sport.push_back({"Who won the premier league title in the 2015-2016 season following a fairy tale run?" , {"\n 1. Watford \n 2. Stoke City \n 3. Leicester City \n 4. Tottenham Hotspur ",{3,"Leicester City"}}});
sport.push_back({"'Stadium of Light'' is the home stadium for which soccer team?" , {"\n 1. Manchester United \n 2. Paris Saints-Germain \n 3. Sunderland FC \n 4. Barcelona FC ",{3,"Sunderland FC"}}});
sport.push_back({"Which country will host the 2022 FIFA World Cup?" , {"\n 1. USA \n 2. Switzerland \n 3. Qatar \n 4. Japan ",{3,"Qatar"}}});
sport.push_back({"Who won the UEFA Champions League in 2016?" , {"\n 1. Real Madrid C.F. \n 2. Atletico Madrid \n 3. FC Bayern Munich \n 4. Manchester City F.C. ",{1,"Real Madrid C.F."}}});
}
void Entertainment()
{	
   ement.push_back({"What breed of dog was Marley in the film 'Marley & Me' (2008)?" , {"\n 1. Labrador Retriever \n 2. Dalmatian \n 3. Golden Retriever \n 4. Shiba Inu ",{1,"Labrador Retriever"}}});
   ement.push_back({"Which of the following movies was not based on a novel by Stephen King? " , {"\n 1. Carrie \n 2. Misery \n 3. The Thing \n 4. The Green Mile ",{3,"The Thing"}}});
   ement.push_back({"Which movie released in 2016 features Superman and Batman fighting?" , {"\n 1. Batman v Superman: Superapocalypse \n 2. Batman v Superman: Knightfall \n 3. Batman v Superman: Black of Knight \n 4. Batman v Superman: Dawn of Justice ",{4,"Batman v Superman: Dawn of Justice"}}});
   ement.push_back({"Daniel Radcliffe became a global star in the film industry due to his performance in which film franchise?" , {"\n 1. Ted \n 2. Harry Potter \n 3. Pirates of the Caribbean \n 4. Spy Kids ",{2,"Harry Potter"}}});
   ement.push_back({"Which actress danced the twist with John Travolta in 'Pulp Fiction'?" , {"\n 1. Uma Thurman \n 2. Bridget Fonda \n 3. Kathy Griffin \n 4. Pam Grier ",{1,"Uma Thurman"}}});
   ement.push_back({"What was the title of the first Bond movie, released in 1962?" , {"\n 1. From Russia with Love \n 2. Thunderball \n 3. Goldfinger \n 4. Dr. No ",{4,"Dr. No"}}});
   ement.push_back({"This movie contains the quote, 'Nobody puts Baby in a corner.'" , {"\n 1. Pretty in Pink \n 2. Ferris Bueller's Day Off \n 3. Three Men and a Baby \n 4. Dirty Dancing ",{4,"Dirty Dancing"}}});
   ement.push_back({"Which of these movies did Jeff Bridges not star in?" , {"\n 1. Tron: Legacy \n 2. The Hateful Eight \n 3. True Grit \n 4. The Giver ",{2,"The Hateful Eight"}}});
   ement.push_back({"Which movie includes a giant bunny-like spirit who has magic powers including growing trees?" , {"\n 1. Hop \n 2. Alice in Wonderland \n 3. Rise of the Guardians \n 4. My Neighbor Totoro ",{4,"My Neighbor Totoro"}}});
   ement.push_back({"What is the oldest Disney film?" , {"\n 1. Snow White and the Seven Dwarfs \n 2. Dumbo \n 3. Fantasia \n 4. Pinocchio ",{1,"Snow White and the Seven Dwarfs"}}});
   ement.push_back({"In the movie 'Spaceballs', what are the Spaceballs attempting to steal from Planet Druidia?" , {"\n 1. Princess Lonestar \n 2. Meatballs \n 3. The Schwartz \n 4. Air ",{4,"Air"}}});
   ement.push_back({"In the movie Gremlins, after what time of day should you not feed Mogwai?" , {"\n 1. Evening \n 2. Morning \n 3. Afternoon \n 4. Midnight ",{4,"Midnight"}}});
   ement.push_back({"When does 'Rogue One: A Star Wars Story' take place chronologically in the series?" , {"\n 1. After Episode 6 \n 2. Before Episode 1 \n 3. Between Episode 4 and 5 \n 4. Between Episode 3 and 4 ",{4,"Between Episode 3 and 4"}}});
   ement.push_back({"In the movie 'Blade Runner', what is the term used for human-like androids ?" , {"\n 1. Cylons \n 2. Replicants \n 3. Synthetics \n 4. Skinjobs ",{2,"Replicants"}}});
   ement.push_back({"What was Bruce Campbell's iconic one-liner after getting a chainsaw hand in Evil Dead 2?" , {"\n 1. Nice. \n 2. Gnarly. \n 3. Perfect. \n 4. Groovy. ",{4,"Groovy."}}});
   ement.push_back({"For the film 'Raiders of The Lost Ark', what was Harrison Ford sick with during the filming of the Cairo chase?" , {"\n 1. Acid Reflux \n 2. Anemia \n 3. Dysentery \n 4. Constipation ",{3,"Dysentery"}}});
   ement.push_back({"In which film does Humphrey Bogart say the famous line, 'Here's looking at you, kid'?" , {"\n 1. The Maltese Falcon \n 2. Citizen Kane \n 3. The Treasure of the Sierra Madre \n 4. Casablanca ",{4,"Casablanca"}}});
   ement.push_back({"Who directed the Kill Bill movies?" , {"\n 1. David Lean \n 2. Arnold Schwarzenegger \n 3. Stanley Kubrick \n 4. Quentin Tarantino ",{4,"Quentin Tarantino"}}});
   ement.push_back({"In 'ALF', what was ALF's real name?" , {"\n 1. Gordon Foster \n 2. Gordon Milipp \n 3. Gordon von Gam \n 4. Gordon Shumway ",{4,"Gordon Shumway"}}});
   ement.push_back({"In the movie 'V for Vendetta,' what is the date that masked vigilante 'V' urges people to remember?" , {"\n 1. November 5th \n 2. November 6th \n 3. September 5th \n 4. November 4th ",{1,"November 5th"}}});
}
void computerandScience()
{
cas.push_back({"Which company was established on April 1st, 1976 by Steve Jobs, Steve Wozniak and Ronald Wayne?" , {"\n 1. Apple \n 2. Commodore \n 3. Microsoft \n 4. Atari ",{1,"Apple"}}});
cas.push_back({"What does the 'MP' stand for in MP3?" , {"\n 1. Moving Picture \n 2. Micro Point \n 3. Music Player \n 4. Multi Pass ",{1,"Moving Picture"}}});
cas.push_back({"The programming language 'Swift' was created to replace what other programming language?" , {"\n 1. C++ \n 2. Objective-C \n 3. C# \n 4. Ruby ",{2,"Objective-C"}}});
cas.push_back({"What amount of bits commonly equals one byte?" , {"\n 1. 1 \n 2. 64 \n 3. 2 \n 4. 8 ",{4,"8"}}});
cas.push_back({"In the programming language Java, which of these keywords would you put on a variable to make sure it doesn't get modified?" , {"\n 1. Static \n 2. Private \n 3. Public \n 4. Final ",{4,"Final"}}});
cas.push_back({"The series of the Intel HD graphics generation succeeding that of the 5000 and 6000 series (Broadwell) is called:" , {"\n 1. HD Graphics 600 \n 2. HD Graphics 700 \n 3. HD Graphics 500 \n 4. HD Graphics 7000 ",{3,"HD Graphics 500"}}});
cas.push_back({"What is the most preferred image format used for logos in the Wikimedia database?" , {"\n 1. .jpeg \n 2. .gif \n 3. .svg \n 4. .png ",{3,".svg"}}});
cas.push_back({"In web design, what does CSS stand for?" , {"\n 1. Counter Strike: Source \n 2. Corrective Style Sheet \n 3. Cascading Style Sheet \n 4. Computer Style Sheet ",{3,"Cascading Style Sheet"}}});
cas.push_back({"What is the code name for the mobile operating system Android 7.0?" , {"\n 1. Jelly Bean \n 2. Nougat \n 3. Ice Cream Sandwich \n 4. Marshmallow ",{2,"Nougat"}}});
cas.push_back({"How many kilobytes in one gigabyte (in decimal)?" , {"\n 1. 1024 \n 2. 1048576 \n 3. 1000000 \n 4. 1000 ",{3,"1000000"}}});
cas.push_back({"In 'Hexadecimal', what color would be displayed from the color code? '#00FF00'?" , {"\n 1. Red \n 2. Green \n 3. Yellow \n 4. Blue ",{2,"Green"}}});
cas.push_back({"Which computer language would you associate Django framework with?" , {"\n 1. Java \n 2. C++ \n 3. Python \n 4. C# ",{3,"Python"}}});
cas.push_back({"What does LTS stand for in the software market?" , {"\n 1. Ludicrous Turbo Speed \n 2. Ludicrous Transfer Speed \n 3. Long Taco Service \n 4. Long Term Support ",{4,"Long Term Support"}}});
cas.push_back({"The numbering system with a radix of 16 is more commonly referred to as " , {"\n 1. Duodecimal \n 2. Hexidecimal \n 3. Binary \n 4. Octal ",{2,"Hexidecimal"}}});
cas.push_back({"This mobile OS held the largest market share in 2012." , {"\n 1. Symbian \n 2. BlackBerry \n 3. iOS \n 4. Android ",{3,"iOS"}}});
cas.push_back({"How many values can a single byte represent?" , {"\n 1. 1024 \n 2. 8 \n 3. 1 \n 4. 256 ",{4,"256"}}});
cas.push_back({"The C programming language was created by this American computer scientist. " , {"\n 1. Willis Ware \n 2. al-Khwarizmi \n 3. Tim Berners Lee \n 4. Dennis Ritchie ",{4,"Dennis Ritchie"}}});
cas.push_back({"How long is an IPv6 address?" , {"\n 1. 128 bytes \n 2. 64 bits \n 3. 32 bits \n 4. 128 bits ",{4,"128 bits"}}});
cas.push_back({"In computing, what does MIDI stand for?" , {"\n 1. Musical Interface of Digital Instruments \n 2. Modular Interface of Digital Instruments \n 3. Musical Instrument Data Interface \n 4. Musical Instrument Digital Interface ",{4,"Musical Instrument Digital Interface"}}});
cas.push_back({"In computing, what does LAN stand for?" , {"\n 1. Light Access Node \n 2. Local Area Network \n 3. Long Antenna Node \n 4. Land Address Navigation ",{2,"Local Area Network"}}});
}

void general_Questionz()
{
general.push_back({"What name represents the letter 'M' in the NATO phonetic alphabet?" , {"\n 1. Max \n 2. Matthew \n 3. Mark \n 4. Mike ",{4,"Mike"}}});
general.push_back({"How would one say goodbye in Spanish?" , {"\n 1. Adi&oacute;s \n 2. Salir \n 3. Au Revoir \n 4. Hola ",{1,"Adi&oacute;s"}}});
general.push_back({"The words 'bungalow' and 'shampoo' originate from the languages of which country?" , {"\n 1. Papua New Guinea \n 2. China \n 3. India \n 4. Ethiopia ",{3,"India"}}});
general.push_back({"When was 'YouTube' founded?" , {"\n 1. July 19, 2009 \n 2. May 22, 2004 \n 3. February 14, 2005 \n 4. September 12, 2005 ",{3,"February 14, 2005"}}});
general.push_back({"What was the destination of the missing flight MH370?" , {"\n 1. Beijing \n 2. Singapore \n 3. Tokyo \n 4. Kuala Lumpur ",{1,"Beijing"}}});
general.push_back({"What is on display in the Madame Tussaud's museum in London?" , {"\n 1. Unreleased film reels \n 2. Vintage cars \n 3. Designer clothing \n 4. Wax sculptures ",{4,"Wax sculptures"}}});
general.push_back({"What is the name given to Indian food cooked over charcoal in a clay oven?" , {"\n 1. Tiki masala \n 2. Tandoori \n 3. Pani puri \n 4. Biryani ",{2,"Tandoori"}}});
general.push_back({"What is the romanized Russian word for 'winter'?" , {"\n 1. Vesna \n 2. Leto \n 3. Zima \n 4. Osen ; ",{3,"Zima"}}});
general.push_back({"The Swedish word 'Grunka' means what in English?" , {"\n 1. Thing \n 2. People \n 3. Place \n 4. Pineapple ",{1,"Thing"}}});
general.push_back({"Who is the founder of 'The Lego Group'?" , {"\n 1. Jens Niels Christiansen \n 2. Ole Kirk Christiansen \n 3. Kirstine Christiansen \n 4. Gerhardt Kirk Christiansen ",{2,"Ole Kirk Christiansen"}}});
general.push_back({"Five dollars is worth how many nickles?" , {"\n 1. 69 \n 2. 25 \n 3. 100 \n 4. 50 ",{3,"100"}}});
general.push_back({"Which of the following languages does NOT use gender as a part of its grammar?" , {"\n 1. Danish \n 2. German \n 3. Turkish \n 4. Polish ",{3,"Turkish"}}});
general.push_back({"What is the name of Poland in Polish?" , {"\n 1. Polska \n 2. Polszka \n 3. Pupcia \n 4. Pland ",{1,"Polska"}}});
general.push_back({"What is a Burgee?" , {"\n 1. A type of food \n 2. A window \n 3. A flag \n 4. A rope ",{3,"A flag"}}});
general.push_back({"If someone said 'you are olid', what would they mean?" , {"\n 1. You are out of shape/weak. \n 2. You are incomprehensible/an idiot. \n 3. Your appearance is repulsive. \n 4. You smell extremely unpleasant. ",{4,"You smell extremely unpleasant."}}});
general.push_back({"Whose greyscale face is on the kappa emoticon on Twitch?" , {"\n 1. Josh DeSeno \n 2. Justin DeSeno \n 3. John DeSeno \n 4. Jimmy DeSeno ",{1,"Josh DeSeno"}}});
general.push_back({"Which country, not including Japan, has the most people of japanese decent?" , {"\n 1. Brazil \n 2. United States of America \n 3. South Korea \n 4. China ",{1,"Brazil"}}});
general.push_back({"In which fast food chain can you order a Jamocha Shake?" , {"\n 1. Wendy ;s \n 2. McDonald ;s \n 3. Burger King \n 4. Arby ;s ",{4,"Arby ;s"}}});
general.push_back({"The drug cartel run by Pablo Escobar originated in which South American city?" , {"\n 1. Medell  \n 2. Quito \n 3. Bogot; \n 4. Cali ",{1,"Medell"}}});
general.push_back({"Which of the following blood component forms a plug at the site of injuries?" , {"\n 1. White blood cells \n 2. Platelets \n 3. Blood plasma \n 4. Red blood cells ",{2,"Platelets"}}});
}
void historytype()
{
history.push_back({"The idea of Socialism was articulated and advanced by whom?" , {"\n 1. Joseph Stalin \n 2. Vladimir Putin \n 3. Vladimir Lenin \n 4. Karl Marx ",{4,"Karl Marx"}}});
history.push_back({"Which one of these tanks was designed and operated by the United Kingdom?" , {"\n 1. Tiger H1 \n 2. M4 Sherman \n 3. Tog II \n 4. T-34 ",{3,"Tog II"}}});
history.push_back({"The original Roman alphabet lacked the following letters EXCEPT:" , {"\n 1. X \n 2. W \n 3. U \n 4. J ",{1,"X"}}});
history.push_back({"The collapse of the Soviet Union took place in which year?" , {"\n 1. 1891 \n 2. 1990 \n 3. 1991 \n 4. 1992 ",{3,"1991"}}});
history.push_back({"Which modern day country is the region that was known as Phrygia in ancient times?" , {"\n 1. Greece \n 2. Turkey \n 3. Syria \n 4. Egypt ",{2,"Turkey"}}});
history.push_back({"When did the Battle of the Somme begin?" , {"\n 1. August 1st, 1916 \n 2. July 1st, 1916 \n 3. July 2nd, 1916 \n 4. June 30th, 1916 ",{2,"July 1st, 1916"}}});
history.push_back({"Who was the first president of the United States?" , {"\n 1. George Washington \n 2. James K. Polk \n 3. James Madison \n 4. Thomas Jefferson ",{1,"George Washington"}}});
history.push_back({"Which of the following countries was not an axis power during World War II?" , {"\n 1. Japan \n 2. Italy \n 3. Germany \n 4. Soviet Union ",{4," Soviet Union"}}});
history.push_back({"In 1939, Britain and France declared war on Germany after it invaded which country?" , {"\n 1. Poland \n 2. Hungary \n 3. Czechoslovakia \n 4. Austria ",{1,"Poland"}}});
history.push_back({"The 'Trail of Tears' was a result of which United States President's Indian Removal Policy?" , {"\n 1. Martin Van Buren \n 2. Harry S. Truman \n 3. John Quincy Adams \n 4. Andrew Jackson ",{4,"Andrew Jackson"}}});
history.push_back({"To what political party did Abraham Lincoln belong when elected POTUS?" , {"\n 1. Whig \n 2. Democrat \n 3. Republican \n 4. Independent ",{3,"Republican"}}});
history.push_back({"What year did World War I begin?" , {"\n 1. 1905 \n 2. 1925 \n 3. 1914 \n 4. 1919 ",{3,"1914"}}});
history.push_back({"How old was Adolf Hitler when he died?" , {"\n 1. 56 \n 2. 65 \n 3. 43 \n 4. 47 ",{1,"56"}}});
history.push_back({"Which of the following was Brazil was a former colony under?" , {"\n 1. France \n 2. The Netherlands \n 3. Portugal \n 4. Spain ",{3,"Portugal"}}});
history.push_back({"What is the historical name of Sri Lanka?" , {"\n 1. Myanmar \n 2. Colombo \n 3. Ceylon \n 4. Badulla ",{3,"Ceylon"}}});
history.push_back({"What was the name commonly given to the ancient trade routes that connected the East and West of Eurasia?" , {"\n 1. Salt Road \n 2. Silk Road \n 3. Spice Road \n 4. Clay Road ",{2,"Silk Road"}}});
history.push_back({"In what year did the Great Northern War, between Russia and Sweden, end?" , {"\n 1. 1726 \n 2. 1724 \n 3. 1721 \n 4. 1727 ",{3,"1721"}}});
history.push_back({"Abolitionist John Brown raided the arsenal in which Virginia Town?" , {"\n 1. Harper&#039;s Ferry \n 2. Harrisonburg \n 3. Martinsburg \n 4. Richmond ",{1,"Harper&#039;s Ferry"}}});
history.push_back({"The Ottoman Empire was dissolved after their loss in which war?" , {"\n 1. World War I \n 2. Crimean War \n 3. Serbian Revolution \n 4. Second Balkan War ",{1,"World War I"}}});
history.push_back({"Which famous military commander marched an army, which included war elephants, over the Alps during the Second Punic War?" , {"\n 1. Hannibal \n 2. Alexander the Great \n 3. Garmanicus \n 4. Tiberius ",{1,"Hannibal"}}});
}
void mathematichs()
{
mathametic.push_back({"In the hexadecimal system, what number comes after 9?" , {"\n 1. The Number 0 \n 2. The Letter A \n 3. 10 \n 4. 16 ",{2,"The Letter A"}}});
mathametic.push_back({"What is the derivative of Acceleration with respect to time?" , {"\n 1. Shift \n 2. Jerk \n 3. Bump \n 4. Slide ",{2,"Jerk"}}});
mathametic.push_back({"What is the approximate value of mathematical constant e?" , {"\n 1. 1.62 \n 2. 1.41 \n 3. 3.14 \n 4. 2.72 ",{4,"2.72"}}});
mathametic.push_back({"What is the area of a circle with a diameter of 20 inches if p= 3.1415?" , {"\n 1. 3141.5 Inches \n 2. 314.15 Inches \n 3. 1256.6 Inches \n 4. 380.1215 Inches ",{2,"314.15 Inches"}}});
mathametic.push_back({"What are the first 6 digits of the number 'Pi'?" , {"\n 1. 3.25812 \n 2. 3.12423 \n 3. 3.14169 \n 4. 3.14159 ",{4,"3.14159"}}});
mathametic.push_back({"In Roman Numerals, what does XL equate to?" , {"\n 1. 60 \n 2. 90 \n 3. 40 \n 4. 15 ",{3,"40"}}});
mathametic.push_back({"What is the first Mersenne prime exponent over 1000?" , {"\n 1. 1009 \n 2. 2203 \n 3. 1279 \n 4. 1069 ",{3,"1279"}}});
mathametic.push_back({"What prime number comes next after 19?" , {"\n 1. 23 \n 2. 21 \n 3. 25 \n 4. 27 ",{1,"23"}}});
mathametic.push_back({"What is the alphanumeric representation of the imaginary number?" , {"\n 1. i \n 2. x \n 3. e \n 4. n ",{1,"i"}}});
mathametic.push_back({"To the nearest whole number, how many radians are in a whole circle?" , {"\n 1. 3 \n 2. 6 \n 3. 4 \n 4. 5 ",{2,"6"}}});
mathametic.push_back({"What Greek letter is used to signify summation?" , {"\n 1. Omega \n 2. Delta \n 3. Sigma \n 4. Alpha ",{3,"Sigma"}}});
mathametic.push_back({"What is the symbol for Displacement?" , {"\n 1. r \n 2. Dp \n 3. &Delta;r \n 4. dr ",{3,"&Delta;r"}}});
mathametic.push_back({"How many sides does a heptagon have?" , {"\n 1. 5 \n 2. 8 \n 3. 6 \n 4. 7 ",{4,"7"}}});
mathametic.push_back({"What is the plane curve proposed by Descartes to challenge Fermat's extremum-finding techniques called?" , {"\n 1. Descarte&#039;s Helicoid \n 2. Elliptic Paraboloid of Descartes \n 3. Cartesian Coordinates \n 4. Folium of Descartes ",{4,"Folium of Descartes"}}});
mathametic.push_back({"The French mathematician Évariste Galois is primarily known for his work in which?" , {"\n 1. Galois&#039; Continued Fractions \n 2. Abelian Integration \n 3. Galois Theory \n 4. Galois&#039; Method for PDE&#039;s ",{3,"Galois Theory"}}});
mathametic.push_back({"What is the correct order of operations for solving equations?" , {"\n 1. Parentheses, Exponents, Addition, Substraction, Multiplication, Division \n 2. Addition, Multiplication, Division, Subtraction, Addition, Parentheses \n 3. Parentheses, Exponents, Multiplication, Division, Addition, Subtraction \n 4. The order in which the operations are written. ",{3,"Parentheses, Exponents, Multiplication, Division, Addition, Subtraction"}}});
mathametic.push_back({"Which of the following mathematicians made major contributions to game theory?" , {"\n 1. Leonhard Euler \n 2. Stefan Banach \n 3. John Von Neumann \n 4. Carl Friedrich Gauss ",{3,"John Von Neumann"}}});
mathametic.push_back({"The notion of a 'set that contains all sets which do not contain themselves' is a paradoxical idea attributed to which English philospher?" , {"\n 1. Francis Bacon \n 2. John Locke \n 3. Alfred North Whitehead \n 4. Bertrand Russel ",{4,"Bertrand Russel"}}});
mathametic.push_back({"Which mathematician refused the Fields Medal?" , {"\n 1. Terence Tao \n 2. Andrew Wiles \n 3. Edward Witten \n 4. Grigori Perelman ",{4,"Grigori Perelman"}}});
mathametic.push_back({"What is the fourth digit of p?" , {"\n 1. 2 \n 2. 4 \n 3. 3 \n 4. 1 ",{4,"1"}}});
}
void title()
{
    system("CLS");
    cout << endl;
    setcolorandbackground(9,0);
    cout << "\t\t\t|-------------------------------------------------------|" << endl;
    cout << "\t\t\t|";
    setcolorandbackground(14,0);
    cout << "\tWelcome to The Quiz Game (Team: CPPnewBie)!!";
    setcolorandbackground(9,0);
    cout << "\t|" << endl;
    cout << "\t\t\t|-------------------------------------------------------|\n" << endl;
}

void mainmenu()
{
    setcolorandbackground(6,0);
    cout << "\n\n\t\t";
    setcolorandbackground(14,13);
    cout << "MAIN MENU";
    setcolorandbackground(9,0);
    cout << "\n\n\t1.Start a new game" << endl;
    cout << "\n\t2.Instructions" << endl;
    cout << "\n\tPress any other key to exit the game" << endl;
    setcolorandbackground(8,0);
    cout << "\n\tEnter your Choice: ";
    setcolorandbackground(15,0);
}



void instructions(){
    title();
    cout <<"\n";
    setcolorandbackground(14,13);
    cout << "\t\t\t\tINSTRUCTIONS AND RULES";
    setcolorandbackground(3,0);
    cout << "\n";
    cout << "\n\t1. You Have Answer Five Questions."<<endl;
    cout << "\n\t2. For Every Correct Answer You Will Achieve 10 Points. "<<endl;
    cout <<"\n\t3. For Every Wrong Answer, Your Score is Dicreased By 5."<<endl;
    cout <<"\n\t4. You Can also skip some quesiton."<<endl;
    cout <<"\n\t5. If Your Score is 50, You'r a Genious !"<<endl;
    cout <<"\n\t6. If Your Score is 0 Or Negative , GO And Learn Someting."<<endl;
    setcolorandbackground(10,0);
    cout << "\n\n\t\tPress '0' to go back to main menu....";
    setcolorandbackground(15,0);
}
void ScoreText()
{
	if(score <=0 )
	{
		setcolorandbackground(14,13);
		cout << "\nCommnet : Go and Learn Something" <<endl;
	}
	else if(score == 50) 
	{
		setcolorandbackground(14,13);
		cout << "\nCommnet : Excellent Work !!" << endl;
	}
	else if (score>30 and score>=40)
	{
		setcolorandbackground(14,13);
		cout << "\nCommnet : Good Job !!" << endl;
	}
	else if(score <= 20 && score >=30)
	{
				setcolorandbackground(14,13);
		cout << "\nCommnet : Average  !!" << endl;
	}
	else
	{
		setcolorandbackground(14,13);
		cout << "\nCommnet : Improve Yourself" << endl;
	}
}

void totalScore()
{
	int select;
	bool flag=false;
	setcolorandbackground(4,0);
	cout << "\nType Your Choice: ";
	while(1)
	{	
	cin>>select;
	switch(select)
	{
	case 1: 
			score=0,q=0,s=0,correctAns=0,wrongAns=0;
			general_Questionz();
			flag=true;
  			for(int i=0; i<5; i++)
			{
				int d = random();
				mainQuestion(general,d);
				cout << "\nPress Any Key For Next Question(Except 0)" << endl;
				getchar();
			}
	break;
		
		case 2:
			score=0,q=0,s=0,correctAns=0,wrongAns=0;
			computerandScience();
			flag=true;
  			for(int i=0; i<5; i++)
			{
				int d = random();
				mainQuestion(cas,d);
				cout << "\nPress Any Key For Next Question(Except 0)" << endl;
				getchar();
			}	
		break;
		case 3:
			score=0,q=0,s=0,correctAns=0,wrongAns=0;
			flag=true;
			Entertainment();					
  			for(int i=0; i<5; i++)
			{
				int d = random();
				mainQuestion(ement,d);
				cout << "\nPress Any Key For Next Question(Except 0)" << endl;
				getchar();
			}
		break;
		case 4:
			flag=true;
			score=0,q=0,s=0,correctAns=0,wrongAns=0;
			historytype();
 			for(int i=0; i<5; i++)
			{
				int d = random();
				mainQuestion(history,d);
				cout << "\nPress Any Key For Next Question(Except 0)" << endl;
				getchar();
			}
			break;
		case 5:
			flag=true;
			score=0,q=0,s=0,correctAns=0,wrongAns=0;
			sports();
 			for(int i=0; i<5; i++)
			{
				int d = random();
				mainQuestion(sport,d);
				cout << "\nPress Any Key For Next Question(Except 0)" << endl;
				getchar();
			}
			break;
		case 6:
			flag=true;
			score=0,q=0,s=0,correctAns=0,wrongAns=0;
			mathematichs();
 			for(int i=0; i<5; i++)
			{
				int d = random();
				mainQuestion(mathametic,d);
				cout << "\nPress Any Key For Next Question(Except 0)" << endl;
				getchar();
			}	
			break;		
		default:
			cout << "Press The Right Key" << endl;
			break;
		
	}
	
	if(flag)
	break;

	}	
	cout << endl;
	system("cls");
	setcolorandbackground(14,10);
	cout << "					------------Your Score Board-------------\n\n" << endl;
	setcolorandbackground(3,0);
	//cout << q << endl;
	cout << "Skipped Question : " << s << " \n" << "You Answered : " << 5-s << endl;
	cout << "Correct Answered : " << correctAns << " \n" << "Wrong Answered : " << wrongAns << endl;
	
	ScoreText();

	
	

	setcolorandbackground(14,13);
	cout << "\nYour Total Score is: " << score << endl;	
	cout << "\n";
	setcolorandbackground(15,0);
	cout << "--->>  Play Again [y/n?]" << endl;	
	cout << "---->> Press any key to Exit From The Game " << endl;
	char c ;
	cin>> c;
	if(c!='y')
	{
		exit(0);
	}
	

}

void StartGame()
{
	system("cls");
	setcolorandbackground(14,13);
	cout <<"\nSelect Category : \n" << endl;
	setcolorandbackground(9,0);
	cout <<" 	1. General Knowledge		" << endl;
	cout <<" 	2. Science & Computers 		" << endl;
	cout <<" 	3. Entertainment    		" << endl;
	cout <<"    	4. History                  " << endl;
	cout <<"    	5. Sports                  " << endl;
	cout <<"    	6. Mathematics                  " << endl;
	totalScore();
}



int main()
{
  
    while(1)
    {
        title();
        mainmenu();
    
        char choice;
        cin >> choice;
        if(choice=='1')
        {      	
            StartGame();      
        }
        else if(choice=='2')
        {
            instructions();
            char ch;
            cin >> ch;
      
            while(ch!='0')
            {
                setcolorandbackground(4,0);
                cout << "\t\tPlease press '0' to go back to main menu....";
                setcolorandbackground(15,0);
                cin >> ch;
            }
            continue;
        }
        else   
            break;
    }
    return 0;
}


