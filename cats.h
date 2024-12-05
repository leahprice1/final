#ifndef CATS_H
#define CATS_H

#include <iostream>
#include <string>
#include <ctime> // for generating a seed for generating random numbers
#include <random> // for generating random numbers
#include <vector> // for the inventories that can be resized where I don't want to deal with adding elements
using namespace std;

class murder{
        private:
                string weapon;
                string room;
                string killer;
        public:
                murder(){
                        weapon = "nothing";
                        room = "nothing";
                        killer = "nothing";
                }

                void set_murder(string catname){
                        if(catname == "Ms. Mittens"){
                                killer = "Ms. Mittens";
                                room = "Master Bedroom";
                                weapon = "Pillow";
                        }
                        if(catname == "Mr. Kneadington"){
                                killer = "Mr. Kneadington";
                                room = "Kitchen";
                                weapon = "Knife";
                        }
                        if(catname == "Mr. Fuzzypaws"){
                                killer = "Mr. Fuzzypaws";
                                room = "Library";
                                weapon = "Letter opener";
                        }
                        if(catname == "Dr. Molly"){
                                killer = "Dr. Molly";
                                room = "Dining Room";
                                weapon = "Poison";
                        }
                }

                bool isguilty(string catname){
                        if(catname == killer){
                                return true;
                        }else{
                                return false;
                        }
                        //aka matches the killer name.
                }

                //GETTERS
                string getRoom(){
                        return room;
                }

                string getKiller(){
                        return killer;
                }

                string getWeapon(){
                        return weapon;
                }

                void print_killer(){
                        cout << "Killer: " << killer << endl;
                        cout << "Weapon: " << weapon << endl;
                        cout << "Room: " << room << endl;
                }
                
};

class cat{
        private:
                string name;
        public:
                cat(){
                        name = "nothing";
                }
                void setName(string thing){
                        name = thing;
                }

                string getName(){
                        return name;
                }
};

class clawman : public cat{
    private:
        int inventory;
        
        vector <string> placesvisted;
        vector <string> peopleinvestigated;
        vector <string> evidencefound; 
        string currroom;
        int roomval;
        

    public:

        
        clawman(){
                /*
                notepad[0] = placesvisted;
                notepad[1] = peopleinvestigated;
                notepad[2] = evidencefound;
                */
                currroom = "Foyer";
        }
        
        void clawman_base(){
                cout << "    /\\_____/\\     " << endl;
                cout << "   /  .   o--\\     " << endl;
                cout << "  ( ==  ^  == )   ; " << endl;
                cout << "   )         (    = " << endl;
                cout << "   |         |   =  " << endl;
                cout << "   ||  | |  ||==    " << endl;
                cout << "  ( |nn|_|nn| )     " << endl;
        }
        void clawman_happy(){
                cout << "    /\\_____/\\     " << endl;
                cout << "   /  .   o--\\     " << endl;
                cout << "  ( ==  w  == )   ; " << endl;
                cout << "   )         (    = " << endl;
                cout << "   |         |   =  " << endl;
                cout << "   ||  | |  ||==    " << endl;
                cout << "  ( |nn|_|nn| )     " << endl;
        }
        void clawman_angry(){
                cout << "    /\\_____/\\     " << endl;
                cout << "   /  -   o--\\     " << endl;
                cout << "  ( == ... == )   ; " << endl;
                cout << "   )         (    = " << endl;
                cout << "   |         |   =  " << endl;
                cout << "   ||  | |  ||==    " << endl;
                cout << "  ( |nn|_|nn| )     " << endl;
        }
        void clawman_shocked(){
                cout << "    /\\_____/\\     " << endl;
                cout << "   /  .   o--\\     " << endl;
                cout << "  ( ==  o  == )   ; " << endl;
                cout << "   )         (    = " << endl;
                cout << "   |         |   =  " << endl;
                cout << "   ||  | |  ||==    " << endl;
                cout << "  ( |nn|_|nn| )     " << endl;
        }
        void clawman_sad(){
                cout << "    /\\_____/\\     " << endl;
                cout << "   /  .   o--\\     " << endl;
                cout << "  ( == .=. == )     " << endl;
                cout << "   )         (      " << endl;
                cout << "   |         |      " << endl;
                cout << "   ||  | |  ||===   " << endl;
                cout << "  ( |nn|_|nn| )  ==;   " << endl;
        }
        void clawman_dead(){
                cout << "    /\\_____/\\     " << endl;
                cout << "   /  x   o--\\     " << endl;
                cout << "  ( ==  -  == )     " << endl;
                cout << "   )         (      " << endl;
                cout << "   |         |      " << endl;
                cout << "   ||  | |  ||===   " << endl;
                cout << "  ( |nn|_|nn| )  ==;   " << endl;
        }

        //ADDERS -------------------------------------------
        void addpeopleinvestigated(string person){
                int condition = 0;
                for(int i = 0; i < peopleinvestigated.size(); i++){
                        if(person == peopleinvestigated[i]){
                                condition = 1;
                        }
                }
                if(condition == 0){
                        peopleinvestigated.push_back(person);
                }
        }

        void addevidencefound(string thingfound){
                int condition = 0;
                for(int i = 0; i < evidencefound.size(); i++){
                        if(thingfound == evidencefound[i]){
                                condition = 1;
                        }
                }
                if(condition == 0){
                        evidencefound.push_back(thingfound);
                }    
        }

        void addplacesvisited(int place){
                string tempplace;
                if(place == 1){
                        tempplace = "Foyer";
                }
                if(place == 2){
                        tempplace = "Office";
                }
                if(place == 3){
                        tempplace = "Kitchen";
                }
                if(place == 4){
                        tempplace = "Library";
                }
                if(place == 5){
                        tempplace = "Guest Room";
                }
                if(place == 6){
                        tempplace = "Master Bedroom";
                }
                if(place == 7){
                        tempplace = "Bathroom";
                }
                int condition = 0;
                for(int i = 0; i < placesvisted.size(); i++){
                        if(tempplace == placesvisted[i]){
                                condition = 1;
                        }
                }
                if(condition == 0){
                        placesvisted.push_back(tempplace);
                }
        }

        //SETTERS -------------------------------------------
        void setcurroom(int room){
                string temproom;
                if(room == 1){
                        temproom = "Foyer";
                        roomval = 0;
                }
                if(room == 2){
                        temproom = "Office";
                        roomval = 1;
                }
                if(room == 3){
                        temproom = "Kitchen";
                        roomval = 2;
                }
                if(room == 4){
                        temproom = "Library";
                        roomval = 3;
                }
                if(room == 5){
                        temproom = "Guest Room";
                        roomval = 4;
                }
                if(room == 6){
                        temproom = "Master Bedroom";
                        roomval = 5;
                }
                if(room == 7){
                        temproom = "Bathroom";
                        roomval = 6;
                }
                if(currroom == temproom){
                        cout << "You're already in this room" << endl;
                }else{
                        cout << "You enter the " << temproom << "." << endl;
                }
                currroom = temproom;
        }

        //GETTERS -------------------------------------------

        string getRoom(){
                return currroom;
        }

        int getRoomVal(){
                return roomval;
        }

        //CHECKERS
        //FIXME: add checkers if needed

        //PRINT FUNCTIONS -------------------------------------------
        void printpeopleinvestigated(){
                if(peopleinvestigated.empty()){
                        cout << "You haven't investigated anyone yet." << endl;
                }else{
                        cout << "People investigated:" << endl;
                        for(int i = 0; i < peopleinvestigated.size(); i++){
                                cout << peopleinvestigated[i] << endl;
                        }
                }
        }

        void printevidencefound(){
                if(evidencefound.empty()){
                        cout << "You haven't found any evidence." << endl;
                }else{
                        cout << "Evidence found:" << endl;
                        for(int i = 0; i < evidencefound.size(); i++){
                                cout << evidencefound[i] << endl;
                        }
                }  
        }

        void printplacesvisited(){
                if(placesvisted.empty()){
                        cout << "You haven't gone anywhere yet." << endl;
                }else{
                        cout << "Places visited:" << endl;
                        for(int i = 0; i < placesvisted.size(); i++){
                                cout << placesvisted[i] << endl;
                        }
                }
        }
        
};

class ms_mittens : public cat{
    private:
        int inventory;
    public:
        void msmittens_base(){
                cout << "    /\\_____/\\      " << endl;
                cout << "   /  e   e  \\      " << endl;
                cout << "  < ==  ^  == >    / " << endl;
                cout << "   \\         /    = " << endl;
                cout << "    )       (   =    " << endl;
                cout << "   ||  | |  ||==     " << endl;
                cout << "  ( |vv|_|vv| )      " << endl;
        }
        void msmittens_happy(){
                cout << "    /\\_____/\\      " << endl;
                cout << "   /  e   e  \\      " << endl;
                cout << "  < ==  w  == >    / " << endl;
                cout << "   \\         /    = " << endl;
                cout << "    )       (   =    " << endl;
                cout << "   ||  | |  ||==     " << endl;
                cout << "  ( |vv|_|vv| )      " << endl;
        }
        void msmittens_angry(){
                cout << "    /\\_____/\\      " << endl;
                cout << "   /  -   -  \\      " << endl;
                cout << "  < ==  -  == > /    " << endl;
                cout << "   \\         / =    " << endl;
                cout << "    )       (  =     " << endl;
                cout << "   ||  | |  ||==     " << endl;
                cout << "  ( |vv|_|vv| )      " << endl;
        }
        void msmittens_shocked(){
                cout << "    /\\_____/\\      " << endl;
                cout << "   /  o   o  \\      " << endl;
                cout << "  < ==  O  == > /    " << endl;
                cout << "   \\         / =    " << endl;
                cout << "    )       (  =     " << endl;
                cout << "   ||  | |  ||==     " << endl;
                cout << "  ( |vv|_|vv| )      " << endl;
        }
        void msmittens_sad(){
                cout << "    /\\_____/\\       " << endl;
                cout << "   /  e   e  \\       " << endl;
                cout << "  < ==|.=.|== >       " << endl;
                cout << "   \\  '   ;  /       " << endl;
                cout << "    )       (         " << endl;
                cout << "   ||  | |  ||==      " << endl;
                cout << "  ( |vv|_|vv| )  ==\\ " << endl;
        }
        void msmittens_dead(){
                cout << "    /\\_____/\\       " << endl;
                cout << "   /  x   x  \\       " << endl;
                cout << "  < ==  -  == >       " << endl;
                cout << "   \\         /       " << endl;
                cout << "    )       (         " << endl;
                cout << "   ||  | |  ||==      " << endl;
                cout << "  ( |vv|_|vv| )  ==\\ " << endl;
        }



        void ACT1investigation(murder mc){
                if(mc.isguilty("Ms. Mittens")){ // guilty dialogue
                        msmittens_base();
                        //cout << "Guilty" << endl; //debugging purposes
                        cout << "As detective Clawman walks over to Ms. Mittens he notices she's" << endl; //fixme: add dialogue
                        cout << "nervously wringing her paws every few seconds. Considering her" << endl; //fixme: add dialogue
                        cout << "husband recently passed it must've taken a toll on her." << endl; //fixme: add dialogue
                        
                        msmittens_shocked();
                        cout << "'How are you holding up Ms. Mittens?' Detective Clawman says as he" << endl; //fixme: add dialogue
                        cout << "gets closer to her. She jumps, and turns to him, clearly surprised." << endl; //fixme: add dialogue
                        cout << "'As good as a widow can be.' she says, her whiskers are downturned." << endl; //fixme: add dialogue
                        cout << "Detective clawman shakes his head. This world is a cruel cruel place." << endl; //fixme: add dialogue

                        msmittens_base();
                        cout << "'Where were you during the murder?' he doesn't want to have to ask" << endl; //fixme: add dialogue
                        cout << "but everyone is a suspect in investigations like this one. He can't" << endl; //fixme: add dialogue
                        cout << "be biased now." << endl; //fixme: add dialogue
                        cout << "'I can't be entirely sure, I found his body after some time had" << endl; //fixme: add dialogue
                        cout << "passed I believe.' Her ears tilt back apperhesively. Clearly the topic" << endl; //fixme: add dialogue
                        cout << "makes her uncomfortable. Detective Clawman nods and leaves her be." << endl; //fixme: add dialogue
                }else{ //innocent dialogue
                        //cout << "Innocent" << endl; //debugging purposes
                        msmittens_sad();
                        cout << "As detective Clawman walks over to Ms. Mittens he notices she's" << endl; //fixme: add dialogue
                        cout << "weeping into her paws every few seconds. Considering her" << endl; //fixme: add dialogue
                        cout << "husband recently passed it must've taken a toll on her." << endl; //fixme: add dialogue

                        msmittens_shocked();
                        cout << "'How are you holding up Ms. Mittens?' Detective Clawman says as he" << endl; //fixme: add dialogue
                        cout << "gets closer to her. She jumps, and turns to him, clearly surprised." << endl; //fixme: add dialogue
                        cout << "'As good as a widow can be.' she says, her whiskers are downturned." << endl; //fixme: add dialogue
                        cout << "Detective clawman shakes his head. This world is a cruel cruel place." << endl; //fixme: add dialogue

                        msmittens_sad();
                        cout << "'Where were you during the murder?' he doesn't want to have to ask" << endl; //fixme: add dialogue
                        cout << "but everyone is a suspect in investigations like this one. He can't" << endl; //fixme: add dialogue
                        cout << "be biased now." << endl; //fixme: add dialogue
                        cout << "'I can't be entirely sure, but I think I was in the kitchen?' She shakes" << endl;
                        cout << "her head, the topic clearly saddens her quite a bit. Detective Clawman" << endl; //fixme: add dialogue
                        cout << "nods and leaves her be." << endl; //fixme: add dialogue
                }
        }
        void ACT2investigation(murder mc){
                if(mc.isguilty("Ms. Mittens")){ // guilty dialogue
                        //cout << "Guilty" << endl; //debugging purposes
                        msmittens_base();
                        cout << "Detective Clawman approaches Ms. Mittens slowly, putting a paw" << endl; //fixme: add dialogue
                        cout << "on her shoulder, causing Ms. Mittens to turn her head and look" << endl; //fixme: add dialogue
                        cout << "at him. She seems surprisingly calm considering the circumstances." << endl; //fixme: add dialogue
                        cout << "She's probably in shock at this point, poor woman." << endl; //fixme: add dialogue

                        cout << "'Ms. Mittens, do you know who might've wanted to kill Mr. Mittens?'" << endl; //fixme: add dialogue
                        cout << "Detective Clawman asks. She nods her head quickly, and looks around" << endl; //fixme: add dialogue
                        cout << "for possible eavesdroppers." << endl; //fixme: add dialogue
                        cout << "'I think Dr. Molly may have had some reason to have killed my husband.'" << endl; //fixme: add dialogue
                        cout << "She admits while shaking her head, something behind her eyes gives" << endl; //fixme: add dialogue
                        cout << "Detective Clawman a nauseous feeling. Death always makes him sick." << endl; //fixme: add dialogue

                        msmittens_angry();
                        cout << "'What reason do you think she could've harbored against your husband?'" << endl; //fixme: add dialogue
                        cout << "She stares at him for a good second before answering." << endl; //fixme: add dialogue
                        cout << "'My husband and her never got along, she may tell you differently" << endl; //fixme: add dialogue
                        cout << "though. She can be sneaky when she wants to be...' There's a bit" << endl; //fixme: add dialogue
                        cout << "of malice in her eyes, Detective Clawman nods understandingly." << endl; //fixme: add dialogue
                        cout << "'Thank you for your time Ms. Mittens.' He finishes as he walks away." << endl; //fixme: add dialogue
                }else{
                        //cout << "Innocent" << endl; //debugging purposes
                        msmittens_shocked();
                        cout << "Detective Clawman approaches Ms. Mittens slowly, putting a paw" << endl; //fixme: add dialogue
                        cout << "on her shoulder, causing Ms. Mittens to turn her head and look" << endl; //fixme: add dialogue
                        cout << "at him. She flinches, Detective Clawman removes his hand, he didn't." << endl; //fixme: add dialogue
                        cout << "intend to scare her." << endl; //fixme: add dialogue

                        msmittens_sad();
                        cout << "'Ms. Mittens, do you know who might've wanted to kill Mr. Mittens?'" << endl; //fixme: add dialogue
                        cout << "Detective Clawman asks. She shakes her head quickly, a frown coming" << endl; //fixme: add dialogue
                        cout << "to her face." << endl; //fixme: add dialogue
                        cout << "'I don't think my husband had any enemies, everyone loved him...'" << endl; //fixme: add dialogue
                        cout << "She says while shaking her head still, Detective Clawman can see the" << endl; //fixme: add dialogue
                        cout << "saddness behind her eyes." << endl; //fixme: add dialogue

                        cout << "'Thank you for your time Ms. Mittens.' He finishes as he walks away." << endl; //fixme: add dialogue
                }
        }
        void ACT3investigation(murder mc){
                if(mc.isguilty("Ms. Mittens")){ // guilty dialogue
                        //cout << "Guilty" << endl; //debugging purposes
                        msmittens_angry();
                        cout << "Ms. Mittens walks over to Detective Clawman, purpose with every step" << endl; //fixme: add dialogue
                        cout << "she stops in front of him and looks around for people who may be" << endl; //fixme: add dialogue
                        cout << "listening in on their convesation." << endl; //fixme: add dialogue
                        cout << "'Detective Clawman, have you had the chance to investigate Dr. Molly?'" << endl; //fixme: add dialogue

                        msmittens_angry();
                        cout << "Detective Clawman doesn't tell anyone about his investigations while" << endl; //fixme: add dialogue
                        cout << "they're underway. So he simply shakes his head, revealing nothing of" << endl; //fixme: add dialogue
                        cout << "importance to her. She clenches a paw by her side." << endl; //fixme: add dialogue
                        cout << "'I'm sure she has something to do with this. You must investigate" << endl; //fixme: add dialogue
                        cout << "her soon Clawman. So my husband can get justice.' She adds the last" << endl; //fixme: add dialogue
                        cout << "part almost like its an afterthought. Detective Clawman nods at her words." << endl; //fixme: add dialogue

                        msmittens_happy();
                        cout << "He wants to bring Mr. Mittens justice more than anyone else in this mansion." << endl; //fixme: add dialogue
                        cout << "'Don't worry Ms. Mittens, your husband will get the justice he deserves.'" << endl; //fixme: add dialogue
                        cout << "Ms. Mittens nods, she goes to say more but stops herself and simply nods again." << endl; //fixme: add dialogue
                        cout << "'Thank you detective.' she walks away without waiting for a response." << endl; //fixme: add dialogue
                }else{ //innocent dialogue
                        //cout << "Innocent" << endl; //debugging purposes
                        msmittens_base();
                        cout << "Ms. Mittens walks over to Detective Clawman, hesitancy with every step" << endl; //fixme: add dialogue
                        cout << "she stops in front of him and looks around for people who may be" << endl; //fixme: add dialogue
                        cout << "listening in on their convesation." << endl; //fixme: add dialogue
                        cout << "'Detective Clawman, have you had the chance to further the investigation?'" << endl; //fixme: add dialogue

                        msmittens_sad();
                        cout << "Detective Clawman doesn't tell anyone about his investigations while" << endl; //fixme: add dialogue
                        cout << "they're underway. So he simply nods his head, revealing nothing of" << endl; //fixme: add dialogue
                        cout << "importance to her. She sighs in relief, clearly satisfied with his answer." << endl; //fixme: add dialogue
                        cout << "'Thank you so much detective, I just want my husband's killer to be put" << endl; //fixme: add dialogue
                        cout << "behind bars where they belong!' tears brim in her eyes. Clawman puts a" << endl; //fixme: add dialogue
                        cout << "comforting hand on her shoulder. " << endl; //fixme: add dialogue

                        msmittens_sad();
                        cout << "'Don't worry Ms. Mittens, his killer will be found soon enough and justice" << endl; //fixme: add dialogue
                        cout << "will be served.' He says confidently. A tear falls down one of her whiskers." << endl; //fixme: add dialogue
                        cout << "'Thank you detective.' she walks away without waiting for a response, hiding." << endl; //fixme: add dialogue
                        cout << "her tears as she walks away." << endl; //fixme: add dialogue
                }
        }
        
};

class mr_mittens : public cat{
    private:
        int inventory;
    public:
        void mrmittens_base(){
                cout << "    /\\_____/\\  .   " << endl;
                cout << "   /  .   .  \\   =  " << endl;
                cout << "  ( ==  ^  == )   =  " << endl;
                cout << "   )         (    =  " << endl;
                cout << "   (         )   =   " << endl;
                cout << "  ( |  | |  | )==    " << endl;
                cout << " (  |..|_|..|  )     " << endl;
        }
        void mrmittens_happy(){
                cout << "    /\\_____/\\  .   " << endl;
                cout << "   /  .   .  \\   =  " << endl;
                cout << "  ( ==  w  == )   =  " << endl;
                cout << "   )         (    =  " << endl;
                cout << "   (         )   =   " << endl;
                cout << "  ( |  | |  | )==    " << endl;
                cout << " (  |..|_|..|  )     " << endl;
        }
        void mrmittens_angry(){
                cout << "    /\\_____/\\  .   " << endl;
                cout << "   /  -   -  \\   =  " << endl;
                cout << "  ( ==  -  == )   =  " << endl;
                cout << "   )         (    =  " << endl;
                cout << "   (         )   =   " << endl;
                cout << "  ( |  | |  | )==    " << endl;
                cout << " (  |..|_|..|  )     " << endl;
        }
        void mrmittens_shocked(){
                cout << "    /\\_____/\\  .   " << endl;
                cout << "   /  o   o  \\   =  " << endl;
                cout << "  ( ==  o  == )   =  " << endl;
                cout << "   )         (    =  " << endl;
                cout << "   (         )   =   " << endl;
                cout << "  ( |  | |  | )==    " << endl;
                cout << " (  |..|_|..|  )     " << endl;
        }
        void mrmittens_sad(){
                cout << "    /\\_____/\\         " << endl;
                cout << "   /  .   .  \\         " << endl;
                cout << "  ( == .=. == )         " << endl;
                cout << "   )         (          " << endl;
                cout << "   (         )          " << endl;
                cout << "  ( |  | |  | )==       " << endl;
                cout << " (  |..|_|..|  )  ====. " << endl;
        }
        void mrmittens_dead(){
                cout << "    /\\_____/\\         " << endl;
                cout << "   /  x   x  \\         " << endl;
                cout << "  ( ==  -  == )         " << endl;
                cout << "   )         (          " << endl;
                cout << "   (         )          " << endl;
                cout << "  ( |  | |  | )==       " << endl;
                cout << " (  |..|_|..|  )  ====. " << endl;
        }
};

class mr_fuzzypaws : public cat{
    private:
        int inventory;
    public:
        void mrfuzzy_base(){
                cout << "     _______         " << endl;
                cout << "   /u a   a u\\      " << endl;
                cout << "  ( ==  ^  == )    b " << endl;
                cout << "   \\         /    = " << endl;
                cout << "   |         |   =   " << endl;
                cout << "   ||  | |  ||==     " << endl;
                cout << "  ( |..|_|..| )      " << endl;
        }
        void mrfuzzy_happy(){
                cout << "     _______         " << endl;
                cout << "   /u a   a u\\      " << endl;
                cout << "  ( ==  w  == )    b " << endl;
                cout << "   \\         /    = " << endl;
                cout << "   |         |   =   " << endl;
                cout << "   ||  | |  ||==     " << endl;
                cout << "  ( |..|_|..| )      " << endl;
        }
        void mrfuzzy_angry(){
                cout << "     _______         " << endl;
                cout << "   /u -   - u\\      " << endl;
                cout << "  ( ==  -  == ) b    " << endl;
                cout << "   \\         /  =   " << endl;
                cout << "   |         |  =    " << endl;
                cout << "   ||  | |  ||==     " << endl;
                cout << "  ( |..|_|..| )      " << endl;
        }
        void mrfuzzy_shocked(){
                cout << "    n_______n        " << endl;
                cout << "   /  o   o  \\      " << endl;
                cout << "  ( ==  -  == ) b    " << endl;
                cout << "   \\         /  =   " << endl;
                cout << "   |         |  =    " << endl;
                cout << "   ||  | |  ||==     " << endl;
                cout << "  ( |..|_|..| )      " << endl;
        }
        void mrfuzzy_sad(){
                cout << "     _______         " << endl;
                cout << "   /u a   a u\\      " << endl;
                cout << "  ( == .=. == )      " << endl;
                cout << "   \\         /      " << endl;
                cout << "   |         |       " << endl;
                cout << "   ||  | |  ||==     " << endl;
                cout << "  ( |..|_|..| )  ==b " << endl;
        }
        void mrfuzzy_dead(){
                cout << "     _______         " << endl;
                cout << "   /u x   x u\\      " << endl;
                cout << "  ( ==  -  == )      " << endl;
                cout << "   \\         /      " << endl;
                cout << "   |         |       " << endl;
                cout << "   ||  | |  ||==     " << endl;
                cout << "  ( |..|_|..| )  ==b " << endl;
        }



        void ACT1investigation(murder mc){
                if(mc.isguilty("Mr. Fuzzypaws")){ // guilty dialogue
                        //cout << "Guilty" << endl; //debugging purposes
                        mrfuzzy_base();
                        cout << "Detective Clawman advances toward Mr. Fuzzypaws, who holds his head high" << endl; //fixme: add dialogue
                        cout << "'Good evening detective, how many I be of service to your investigation?'" << endl; //fixme: add dialogue
                        cout << "Mr. Fuzzypaws offers. What a formal man. Detective Clawman puts a claw to" << endl; //fixme: add dialogue
                        cout << "his chin." << endl; //fixme: add dialogue
                        cout << "'What roll do you serve in the mansion Mr. Fuzzypaws?' Clawman asks." << endl; //fixme: add dialogue

                        mrfuzzy_angry();
                        cout << "Mr. Fuzzypaws bristles at this question, maybe he doesn't like talking" << endl; //fixme: add dialogue
                        cout << "about his job." << endl; //fixme: add dialogue
                        cout << "'I'm the butler for the Mittens family.' He says, Clawman thinks he hears" << endl; //fixme: add dialogue
                        cout << "an accent but can quite place where it may be from. He nods as he speaks." << endl; //fixme: add dialogue
                        cout << "'How long have you been working for the Mittens?' He asks." << endl; //fixme: add dialogue
                        cout << "'Six years, detective.' He says." << endl; //fixme: add dialogue

                        mrfuzzy_base();
                        cout << "Wow, he had been working for them for nearly half a lifetime. Plenty of time" << endl; //fixme: add dialogue
                        cout << "to harbor a grudge or to build up trust. It's up to Clawman to determine which" << endl; //fixme: add dialogue
                        cout << "happened within those six years of work." << endl; //fixme: add dialogue
                        cout << "'Thank you for your time Mr. Fuzzypaws.'" << endl; //fixme: add dialogue
                        cout << "Mr. Fuzzypaws nods and walks away, he begins to dust a nearby shelf." << endl; //fixme: add dialogue
                }else{
                        //cout << "Innocent" << endl; //debugging purposes
                        mrfuzzy_base();
                        cout << "Detective Clawman advances toward Mr. Fuzzypaws, who holds his head high" << endl; //fixme: add dialogue
                        cout << "'Good evening detective, how many I be of service to your investigation?'" << endl; //fixme: add dialogue
                        cout << "Mr. Fuzzypaws offers. What a formal man. Detective Clawman puts a claw to" << endl; //fixme: add dialogue
                        cout << "his chin." << endl; //fixme: add dialogue
                        cout << "'What roll do you serve in the mansion Mr. Fuzzypaws?' Clawman asks." << endl; //fixme: add dialogue

                        mrfuzzy_base();
                        cout << "Mr. Fuzzypaws titls his head at this question, thinking." << endl; //fixme: add dialogue
                        cout << "'I'm the butler for the Mittens family.' He says, Clawman thinks he hears" << endl; //fixme: add dialogue
                        cout << "an accent but can quite place where it may be from. He nods as he speaks." << endl; //fixme: add dialogue
                        cout << "'How long have you been working for the Mittens?' He asks." << endl; //fixme: add dialogue
                        cout << "'Six years detective.' He says, a hint of pride in his voice." << endl; //fixme: add dialogue

                        mrfuzzy_base();
                        cout << "Wow, he had been working for them for nearly half a lifetime. Plenty of time" << endl; //fixme: add dialogue
                        cout << "to harbor a grudge or to build up trust. It's up to Clawman to determine which" << endl; //fixme: add dialogue
                        cout << "happened within those six years of work." << endl; //fixme: add dialogue
                        cout << "'Thank you for your time Mr. Fuzzypaws.'" << endl; //fixme: add dialogue
                        cout << "Mr. Fuzzypaws nods and walks away, he begins to dust a nearby shelf." << endl; //fixme: add dialogue 
                }
        }
        void ACT2investigation(murder mc){
                if(mc.isguilty("Mr. Fuzzypaws")){ // guilty dialogue
                        //cout << "Guilty" << endl; //debugging purposes
                        mrfuzzy_shocked();
                        cout << "As soon as he has time he walks towards Mr. Fuzzypaws. Detective Clawman" << endl; //fixme: add dialogue
                        cout << "notices that Mr. Fuzzypaws is busy looking off, clearly deep in thought." << endl; //fixme: add dialogue
                        cout << "'Something on your mind Mr. Fuzzypaws?' he asks." << endl; //fixme: add dialogue
                        cout << "Mr. Fuzzypaws looks in his direction quickly, caught off guard." << endl; //fixme: add dialogue
                        cout << "'Just thinking about my list of responsibilties for today' he says casually." << endl; //fixme: add dialogue

                        mrfuzzy_sad();
                        cout << "'I see, could you tell me what you typically do as the mansions butler?' he asks." << endl; //fixme: add dialogue
                        cout << "'Typically a day for me consists of laundry, dusting, mopping, fetching the mail," << endl; //fixme: add dialogue
                        cout << "scheduling Mr. Mittens meetings, cooking, and making the beds. Sometimes more...'" << endl; //fixme: add dialogue
                        cout << "The list seems to go on and on as Mr. Fuzzypaws speaks, theres a bit of exhaustion" << endl; //fixme: add dialogue
                        cout << "in his voice as he says it all. Detective Clawman simply nods along." << endl; //fixme: add dialogue
                        cout << "'That's a lot of work for one cat' He responds." << endl; //fixme: add dialogue

                        mrfuzzy_angry();
                        cout << "Mr. Fuzzypaws' nose scrunches." << endl; //fixme: add dialogue
                        cout << "'Well there is no one else around here to do it...' he says simply. Not a man" << endl; //fixme: add dialogue
                        cout << "of many words unless he's talking about his job. Clawman's eyebrows furrow." << endl; //fixme: add dialogue
                        cout << "'Thank you for your time Mr. Fuzzypaws. I have more to attend to, it seems you do too.'" << endl; //fixme: add dialogue
                        cout << "Mr. Fuzzypaws doesn't say anything in reply and walks away." << endl; //fixme: add dialogue
                }else{ //innocent dialogue
                        //cout << "Innocent" << endl; //debugging purposes
                        mrfuzzy_shocked();
                        cout << "As soon as he has time he walks towards Mr. Fuzzypaws. Detective Clawman" << endl; //fixme: add dialogue
                        cout << "notices that Mr. Fuzzypaws is busy looking off, clearly deep in thought." << endl; //fixme: add dialogue
                        cout << "'Something on your mind Mr. Fuzzypaws?' he asks." << endl; //fixme: add dialogue
                        cout << "Mr. Fuzzypaws looks in his direction quickly, caught off guard." << endl; //fixme: add dialogue
                        cout << "'Just thinking about my list of responsibilties for today' he says casually." << endl; //fixme: add dialogue

                        mrfuzzy_happy();
                        cout << "'I see, could you tell me what you typically do as the mansions butler?' he asks." << endl; //fixme: add dialogue
                        cout << "'Nothing too strenstrenuous, just taking care of the Mittens family.'" << endl; //fixme: add dialogue
                        cout << "Although Mr. Fuzzypaws comes off as intense on first glance, when you get him" << endl; //fixme: add dialogue
                        cout << "talking about his butler duties he seems to relax a bit. Interesting." << endl; //fixme: add dialogue
                        cout << "'And do you like your job?' He responds." << endl; //fixme: add dialogue

                        mrfuzzy_base();
                        cout << "Mr. Fuzzypaws' nose scrunches." << endl; //fixme: add dialogue
                        cout << "'Of course I do.' he says simply. Not a man" << endl; //fixme: add dialogue
                        cout << "of many words unless he's talking about his job. Clawman's eyebrows furrow." << endl; //fixme: add dialogue
                        cout << "'Thank you for your time Mr. Fuzzypaws. I have more to attend to, it seems you do too.'" << endl; //fixme: add dialogue
                        cout << "Mr. Fuzzypaws doesn't say anything in reply and walks away." << endl; //fixme: add dialogue
                }     
        }
        void ACT3investigation(murder mc){
                if(mc.isguilty("Mr. Fuzzypaws")){ // guilty dialogue
                        //cout << "Guilty" << endl; //debugging purposes
                        mrfuzzy_angry();
                        cout << "Clawman stops Mr. Fuzzypaws as he wallks by him for a few moments for a quick question." << endl; //fixme: add dialogue
                        cout << "Mr. Fuzzypaws sighs, clearly not wanting to hear what Clawman has to say." << endl; //fixme: add dialogue
                        cout << "'Hello Mr. Fuzzypaws, I was wondering if you could tell me about your relationship" << endl; //fixme: add dialogue
                        cout << "with Mr. Mittens.'" << endl; //fixme: add dialogue
                        cout << "Mr Fuzzypaws shrugs." << endl; //fixme: add dialogue
                        cout << "'He was my employer and I was his employee.' He says nothing more in elaboration." << endl; //fixme: add dialogue

                        mrfuzzy_base();
                        cout << "'Interesting, and would you say it was a positive employer-employee relationship?'" << endl; //fixme: add dialogue
                        cout << "'As positive as they get.' Mr. Fuzzypaws replies, dryly." << endl; //fixme: add dialogue

                        cout << "'Thank you, sorry to disturb your work.' Clawman lets him go." << endl; //fixme: add dialogue
                }else{ //innocent dialogue
                        //cout << "Innocent" << endl; //debugging purposes
                        mrfuzzy_sad();
                        cout << "Clawman stops Mr. Fuzzypaws as he wallks by him for a few moments for a quick question." << endl; //fixme: add dialogue
                        cout << "Mr. Fuzzypaws tilts his head, listening for what Clawman may say to him next." << endl; //fixme: add dialogue
                        cout << "'Hello Mr. Fuzzypaws, I was wondering if you could tell me about your relationship" << endl; //fixme: add dialogue
                        cout << "with Mr. Mittens.'" << endl; //fixme: add dialogue
                        cout << "Mr Fuzzypaws nods." << endl; //fixme: add dialogue
                        cout << "'He was my employer and I was his employee, it's a shame that he passed.' He says." << endl; //fixme: add dialogue

                        mrfuzzy_happy();
                        cout << "'Interesting, and would you say it was a positive employer-employee relationship?'" << endl; //fixme: add dialogue
                        cout << "'As positive as they get.' Mr. Fuzzypaws replies, a hint of emotion in his eyes." << endl; //fixme: add dialogue

                        cout << "'Thank you, sorry to disturb your work.' Clawman lets him go. As he walks away Mr." << endl; //fixme: add dialogue
                        cout << "Fuzzypaws hair is standing up on it's end. The  question clearly effected him more than" << endl; //fixme: add dialogue
                        cout << "he let on..." << endl; //fixme: add dialogue
                }     
        }
        
};

class dr_molly : public cat{
    private:
        int inventory;
    public:
        void drmolly_base(){
                cout << "  _____________     " << endl;
                cout << "  \\ --O---O-- /    " << endl;
                cout << "  ( ==  ^  == )     " << endl;
                cout << "   )         (      " << endl;
                cout << "   |         |      " << endl;
                cout << "   ||  | |  ||==-   " << endl;
                cout << "  ( |nn|_|nn| )     " << endl;
        }
        void drmolly_happy(){
                cout << "  _____________     " << endl;
                cout << "  \\ --O---O-- /    " << endl;
                cout << "  ( ==  w  == )     " << endl;
                cout << "   )         (      " << endl;
                cout << "   |         |      " << endl;
                cout << "   ||  | |  ||==-   " << endl;
                cout << "  ( |nn|_|nn| )     " << endl;
        }
        void drmolly_angry(){
                cout << "  _____________     " << endl;
                cout << "  \\ --O---O-- /    " << endl;
                cout << "  ( == ... == )     " << endl;
                cout << "   )         (      " << endl;
                cout << "   |         |      " << endl;
                cout << "   ||  | |  ||==-   " << endl;
                cout << "  ( |nn|_|nn| )     " << endl;
        }
        void drmolly_shocked(){
                cout << "  _____________     " << endl;
                cout << "  \\ --O---O-- /    " << endl;
                cout << "  ( ==  o  == )     " << endl;
                cout << "   )         (      " << endl;
                cout << "   |         |      " << endl;
                cout << "   ||  | |  ||==-   " << endl;
                cout << "  ( |nn|_|nn| )     " << endl;
        }
        void drmolly_sad(){
                cout << "  _____________     " << endl;
                cout << "  \\ --O---O-- /    " << endl;
                cout << "  ( == .=. == )     " << endl;
                cout << "   )         (      " << endl;
                cout << "   |         |      " << endl;
                cout << "   ||  | |  ||=     " << endl;
                cout << "  ( |nn|_|nn| )=-   " << endl;
        }
        void drmolly_dead(){
                cout << "  _____________     " << endl;
                cout << "  \\   x   x   /    " << endl;
                cout << "  ( ==  -  == )     " << endl;
                cout << "   )         (      " << endl;
                cout << "   |         |      " << endl;
                cout << "   ||  | |  ||=     " << endl;
                cout << "  ( |nn|_|nn| )=-   " << endl;
        }



        void ACT1investigation(murder mc){
                if(mc.isguilty("Dr. Molly")){ // guilty dialogue
                        //cout << "Guilty" << endl; //debugging purposes
                        drmolly_shocked();
                        cout << "Dr. Molly seems fidgety while Clawman approaches her. She looks around rapidly" << endl; //fixme: add dialogue
                        cout << "when he finally stands in front of her." << endl; //fixme: add dialogue
                        cout << "'Hello detective, can I help you?' she asks, words shakily coming out." << endl; //fixme: add dialogue

                        drmolly_sad();
                        cout << "'No need to be nervous Dr. Molly' he soothes. She looks like she's about" << endl; //fixme: add dialogue
                        cout << "to jump out of her own skin. She must be an incredibly anxious person." << endl; //fixme: add dialogue
                        cout << "'Sorry, I've never been involved in an investigation before.' she admits, still" << endl; //fixme: add dialogue
                        cout << "shaking." << endl; //fixme: add dialogue
                        cout << "'That's all right, I just came to ask you if you could tell me about how close your" << endl; //fixme: add dialogue
                        cout << "involvement with the Mittens family is?' he says gently, not wanting to make her more" << endl; //fixme: add dialogue
                        cout << "nervous." << endl; //fixme: add dialogue
                        cout << "'Oh we're very close, I've been their doctor for three years. I'm the only doctor" << endl; //fixme: add dialogue
                        cout << "they've had since they got the mansion.' She responds, eyes wide." << endl; //fixme: add dialogue

                        drmolly_base();
                        cout << "'Okay, thank you Dr. Molly.' Detective Clawman finishes. He doesn't want to ask her" << endl; //fixme: add dialogue
                        cout << "anything else right now, worried she may faint. She nods and walks away briskly." << endl; //fixme: add dialogue
                        
                }else{ //innocent dialogue
                        //cout << "Innocent" << endl; //debugging purposes
                        drmolly_sad();
                        cout << "Dr. Molly seems solemn while Clawman approaches her. She looks around" << endl; //fixme: add dialogue
                        cout << "when he finally stands in front of her." << endl; //fixme: add dialogue
                        cout << "'Hello detective, can I help you?' she asks, words shakily coming out." << endl; //fixme: add dialogue

                        drmolly_sad();
                        cout << "'No need to be nervous Dr. Molly' he soothes. She looks a bit pale in the" << endl; //fixme: add dialogue
                        cout << "face. She must be still going through the shock of Mr. Mittens passing." << endl; //fixme: add dialogue
                        cout << "'Sorry, I've never been involved in an investigation before.' she admits, still" << endl; //fixme: add dialogue
                        cout << "paling." << endl; //fixme: add dialogue
                        cout << "'That's all right, I just came to ask you if you could tell me about how close your" << endl; //fixme: add dialogue
                        cout << "involvement with the Mittens family is?' he says gently, not wanting to make her more" << endl; //fixme: add dialogue
                        cout << "nervous." << endl; //fixme: add dialogue
                        cout << "'Oh we're very close, I've been their doctor for three years. I'm the only doctor" << endl; //fixme: add dialogue
                        cout << "they've had since they got the mansion. I'm very lucky to have been with them for so" << endl; //fixme: add dialogue
                        cout << "long.' She replies." << endl; 

                        drmolly_base();
                        cout << "'Okay, thank you Dr. Molly.' Detective Clawman finishes. He doesn't want to ask her" << endl; //fixme: add dialogue
                        cout << "anything else right now, worried she may faint. She nods and walks away somewhat dazed." << endl; //fixme: add dialogue
                }     
        }
        void ACT2investigation(murder mc){
                if(mc.isguilty("Dr. Molly")){ // guilty dialogue
                        //cout << "Guilty" << endl; //debugging purposes
                        drmolly_shocked();
                        cout << "Dr. Molly approaches Clawman when she notices him before he gets the chance. She clasps her paws." << endl; //fixme: add dialogue
                        cout << "'Detective, have you found anything yet? Do you have any idea of who it could be?' She shakes like" << endl; //fixme: add dialogue
                        cout << "a leaf in the wind." << endl; //fixme: add dialogue

                        drmolly_sad();
                        cout << "'Nothing I can share at the moment' he replies. Her eyes widen, nervousness clearly increasing." << endl; //fixme: add dialogue
                        cout << "'Oh sorry! I didn't think about it before I asked. I guess you can't tell me anything.' She rubs" << endl; //fixme: add dialogue
                        cout << "her neck." << endl; //fixme: add dialogue
                        cout << "'No worries, but while you're here can you tell me a bit about Mr. Mittens?' he tilts his head." << endl; //fixme: add dialogue
                        cout << "'Of course, he was the most wonderful boss I could've ever asked for. I'm heart broken that he" << endl; //fixme: add dialogue
                        cout << "passed.' she says. The words almost combine with how quickly she says them. Detective Clawman nods" << endl; //fixme: add dialogue

                        drmolly_base();
                        cout << "She nods." << endl; //fixme: add dialogue
                        cout << "'If you have any more questions just find me. I'm willing to answer anything'" << endl; //fixme: add dialogue
                        cout << "Detective Clawman gives her a tight lipped smile and walks away." << endl; //fixme: add dialogue

                }else{ //innocent dialogue
                        //cout << "Innocent" << endl; //debugging purposes
                        drmolly_shocked();
                        cout << "Clawman walks to Dr. Molly, she jumps a bit when she notices he's by. He smiles apologetically, she's clearly" << endl; //fixme: add dialogue
                        cout << "a bit out of it, she smiles back weakly." << endl; //fixme: add dialogue
                        cout << "'Sorry to catch you off guard Molly, I just had a quick question.'" << endl; //fixme: add dialogue

                        drmolly_sad();
                        cout << "'Of course' she says quietly." << endl; //fixme: add dialogue
                        cout << "'Can you tell me a bit about Mr. Mittens?' he asks. She nods." << endl; //fixme: add dialogue
                        cout << "her neck." << endl; //fixme: add dialogue
                        cout << "'No worries, but while you're here can you tell me a bit about Mr. Mittens?' he tilts his head." << endl; //fixme: add dialogue
                        cout << "'We butt heads every once in a while but overall I can't say he was a bad boss. A pleasure of a" << endl; //fixme: add dialogue
                        cout << "patient as well.' she says." << endl; //fixme: add dialogue

                        drmolly_base();
                        cout << "Clawman nods." << endl; //fixme: add dialogue
                        cout << "'Thank you Dr. Molly. I'll let you get back to what you were doing.'" << endl; //fixme: add dialogue
                        cout << "she nods and turns, walking away." << endl; //fixme: add dialogue
                }     
        }
        void ACT3investigation(murder mc){
                if(mc.isguilty("Dr. Molly")){ // guilty dialogue
                        //cout << "Guilty" << endl; //debugging purposes
                        drmolly_shocked();
                        cout << "Detective Clawman notices Dr. Molly put something in her pocket before he reaches her." << endl; //fixme: add dialogue
                        cout << "'Hello Dr. Molly. Care if I ask you something?' She spins around, almost like she's been caught." << endl; //fixme: add dialogue
                        cout << "Maybe he's just imagining guilt anywhere he can find it..." << endl; //fixme: add dialogue

                        drmolly_shocked();
                        cout << "'Of course, you can anything!' she replies. Her eyes wide, she rubs her paws together like" << endl; //fixme: add dialogue
                        cout << "they're cold." << endl; //fixme: add dialogue
                        cout << "'Is there anyone to fill your place if you happen to be absent as the doctor?' he asks." << endl; //fixme: add dialogue
                        cout << "The answer doesn't truly matter to his investigation but he wants to see HOW she'll answer." << endl; //fixme: add dialogue
                        cout << "She shakes her head fast." << endl; //fixme: add dialogue
                        cout << "'I'm the only doctor the Mittens trusted enough to have on standby, I don't really take absences.' she says." << endl; //fixme: add dialogue

                        drmolly_base();
                        cout << "He nods in response." << endl; //fixme: add dialogue
                        cout << "'Noted, thank you Molly.'" << endl; //fixme: add dialogue
                        cout << "She nods, her eyes looking confused as she walks away." << endl; //fixme: add dialogue
                }else{ //innocent dialogue
                        //cout << "Innocent" << endl; //debugging purposes
                        drmolly_shocked();
                        cout << "Detective Clawman notices Dr. Molly put something in her pocket before he reaches her." << endl; //fixme: add dialogue
                        cout << "'Hello Dr. Molly. Care if I ask you something?' She turns around, a bit surpised to see." << endl; //fixme: add dialogue
                        cout << "him. He probably caught her a bit off guard." << endl; //fixme: add dialogue

                        drmolly_base();
                        cout << "'Of course, detective' she replies. She rubs her paws together like they're cold." << endl; //fixme: add dialogue
                        cout << "'Is there anyone to fill your place if you happen to be absent as the doctor?' he asks." << endl; //fixme: add dialogue
                        cout << "The answer doesn't truly matter to his investigation but he wants to see HOW she'll answer." << endl; //fixme: add dialogue
                        cout << "She nods her head slightly." << endl; //fixme: add dialogue
                        cout << "'The very few times I have taken an absence, they call in another doctor in case of emergencies.'" << endl; //fixme: add dialogue
                        cout << "she says." << endl; //fixme: add dialogue

                        cout << "He nods in response." << endl; //fixme: add dialogue
                        cout << "'Noted, thank you Molly.'" << endl; //fixme: add dialogue
                        cout << "She nods, her eyes looking confused as she walks away." << endl; //fixme: add dialogue
                }     
        }
};

class mr_kneadington : public cat{
    private:
        int inventory;
    public:
        void mrknead_base(){
                cout << "       ___           " << endl;
                cout << "      (' ')          " << endl;
                cout << "       | |           " << endl;
                cout << "    /\\_|_|_/\\      " << endl;
                cout << "   /  u   u  \\      " << endl;
                cout << "  ( ==  ^  == )      " << endl;
                cout << "   )         (       " << endl;
                cout << "   (         )       " << endl;
                cout << "  ( |  | |  | )-     " << endl;
                cout << " (  |..|_|..|  )     " << endl;
        }
        void mrknead_happy(){
                cout << "       ___           " << endl;
                cout << "      (' ')          " << endl;
                cout << "       | |           " << endl;
                cout << "    /\\_|_|_/\\      " << endl;
                cout << "   /  u   u  \\      " << endl;
                cout << "  ( ==  w  == )      " << endl;
                cout << "   )         (       " << endl;
                cout << "   (         )       " << endl;
                cout << "  ( |  | |  | )-     " << endl;
                cout << " (  |..|_|..|  )     " << endl;
        }
        void mrknead_angry(){
                cout << "       ___           " << endl;
                cout << "      (' ')          " << endl;
                cout << "       | |           " << endl;
                cout << "    /\\_|_|_/\\      " << endl;
                cout << "   /  -   -  \\      " << endl;
                cout << "  ( ==  -  == )      " << endl;
                cout << "   )         (       " << endl;
                cout << "   (         )       " << endl;
                cout << "  ( |  | |  | )-     " << endl;
                cout << " (  |..|_|..|  )     " << endl;
        }
        void mrknead_shocked(){
                cout << "       ___           " << endl;
                cout << "      (' ')          " << endl;
                cout << "       | |           " << endl;
                cout << "    /\\_|_|_/\\      " << endl;
                cout << "   /  O   O  \\      " << endl;
                cout << "  ( ==  o  == )      " << endl;
                cout << "   )         (       " << endl;
                cout << "   (         )       " << endl;
                cout << "  ( |  | |  | )-     " << endl;
                cout << " (  |..|_|..|  )     " << endl;
        }
        void mrknead_sad(){
                cout << "       ___           " << endl;
                cout << "      (' ')          " << endl;
                cout << "       | |           " << endl;
                cout << "    /\\_|_|_/\\      " << endl;
                cout << "   /  u   u  \\      " << endl;
                cout << "  ( == .=. == )      " << endl;
                cout << "   )         (       " << endl;
                cout << "   (         )       " << endl;
                cout << "  ( |  | |  | )-     " << endl;
                cout << " (  |..|_|..|  )     " << endl;
        }
        void mrknead_dead(){
                cout << "       ___           " << endl;
                cout << "      (' ')          " << endl;
                cout << "       | |           " << endl;
                cout << "    /\\_|_|_/\\      " << endl;
                cout << "   /  x   x  \\      " << endl;
                cout << "  ( ==  -  == )      " << endl;
                cout << "   )         (       " << endl;
                cout << "   (         )       " << endl;
                cout << "  ( |  | |  | )-     " << endl;
                cout << " (  |..|_|..|  )     " << endl;
        }



        void ACT1investigation(murder mc){
                if(mc.isguilty("Mr. Kneadington")){ // guilty dialogue
                        //cout << "Guilty" << endl; //debugging purposes
                        mrknead_base();
                        cout << "Mr. Kneadington seems like he doesn't know what to do with himself as Clawman finds him" << endl; //fixme: add dialogue
                        cout << "standing off in some random corner." << endl; //fixme: add dialogue
                        cout << "'Hello Mr. Kneadington, do you mind if I ask a question?' he asks" << endl; //fixme: add dialogue

                        mrknead_happy();
                        cout << "Despite the fact Clawman was right in front of him, Kneadington's eyes focus on him finally." << endl; //fixme: add dialogue
                        cout << "he seems a bit surprised to see him." << endl; //fixme: add dialogue
                        cout << "'Why of course detective, what question do you have for me?' He says, eyes still surprised." << endl; //fixme: add dialogue
                        cout << "'Do the Mittens have more than one family baker?'" << endl; //fixme: add dialogue
                        cout << "'Oh yes, of course. They can't always rely on my avaliblity. I have quite a few customers.'" << endl; //fixme: add dialogue
                        cout << "he seems rather proud of this fact, an air of self importance." << endl; //fixme: add dialogue

                        cout << "'I see, I was just curious, thank you Mr. Kneadington.' Detective Clawman says." << endl; //fixme: add dialogue
                        cout << "Mr. Kneadington nods, clearly happy with thr question Clawman asked him." << endl; //fixme: add dialogue
                }else{ //innocent dialogue
                        //cout << "Innocent" << endl; //debugging purposes
                        mrknead_base();
                        cout << "Mr. Kneadington seems like he doesn't know what to do with himself as Clawman finds him" << endl; //fixme: add dialogue
                        cout << "standing off in some random corner." << endl; //fixme: add dialogue
                        cout << "'Hello Mr. Kneadington, do you mind if I ask a question?' he asks" << endl; //fixme: add dialogue

                        mrknead_base();
                        cout << "Despite the fact Clawman was right in front of him, Kneadington's eyes focus on him finally." << endl; //fixme: add dialogue
                        cout << "he seems a bit surprised to see him." << endl; //fixme: add dialogue
                        cout << "'Why of course detective, what question do you have for me?' He says, eyes still surprised." << endl; //fixme: add dialogue
                        cout << "'Do the Mittens have more than one family baker?'" << endl; //fixme: add dialogue
                        cout << "'Oh yes, of course. They can't always rely on my avaliblity. Most families have more than one.'" << endl; //fixme: add dialogue
                        cout << "he states this as if it's the obvious. As if all cat detectives should know this." << endl; //fixme: add dialogue

                        cout << "'I see, I was just curious, thank you Mr. Kneadington.' Detective Clawman says." << endl; //fixme: add dialogue
                        cout << "Mr. Kneadington nods, looking off into the distance again as Clawman leaves." << endl; //fixme: add dialogue
                }     
        }
        void ACT2investigation(murder mc){
                if(mc.isguilty("Mr. Kneadington")){ // guilty dialogue
                        //cout << "Guilty" << endl; //debugging purposes
                        mrknead_base();
                        cout << "Clawman finds Mr. Kneadington wiping some flour off of his apron off in the corner" << endl; //fixme: add dialogue
                        cout << "of the room, he seems absorbed in his thoughts a bit." << endl; //fixme: add dialogue
                        
                        mrknead_happy();
                        cout << "'Mr. Kneadington do you take a lot of pride in your work?' Clawman asks without introduction." << endl; //fixme: add dialogue
                        cout << "Kneadington looks over at him, nodding happily." << endl; //fixme: add dialogue
                        cout << "'Oh I take much pride in my work, you should stop by my bakery and buy something sometime.'" << endl; //fixme: add dialogue
                        cout << "he offers. He doesn't seem to be all that effected by the current circumstances. He must have" << endl; //fixme: add dialogue
                        cout << "some kind of strong emotional resilience. Clawman simply nods, having nothing more to add." << endl; //fixme: add dialogue
                }else{ //innocent dialogue
                        //cout << "Innocent" << endl; //debugging purposes
                        mrknead_base();
                        cout << "Clawman finds Mr. Kneadington wiping some flour off of his apron off in the corner" << endl; //fixme: add dialogue
                        cout << "of the room, he seems absorbed in his thoughts a bit." << endl; //fixme: add dialogue
                        
                        mrknead_sad();
                        cout << "'Mr. Kneadington do you take a lot of pride in your work?' Clawman asks without introduction." << endl; //fixme: add dialogue
                        cout << "Kneadington looks over at him, nodding slowly." << endl; //fixme: add dialogue
                        cout << "'Oh I take much pride in my work, its a shame I probably won't be baking as much anymore given" << endl; //fixme: add dialogue
                        cout << "the current circumstances.' he says a bit solemly. 'The Mittens were some of my best customers.'" << endl; //fixme: add dialogue
                        cout << "Clawman simply nods, having nothing more to add." << endl; //fixme: add dialogue
                }     
        }
        void ACT3investigation(murder mc){
                if(mc.isguilty("Mr. Kneadington")){ // guilty dialogue
                        //cout << "Guilty" << endl; //debugging purposes
                        cout << "Clawman looks at Mr. Kneadington from afar, wondering how he acts when no one is looking. " << endl; //fixme: add dialogue
                        cout << "He notes a few things about the baker." << endl; //fixme: add dialogue
                        cout << "1. He has a haughty air to him." << endl; //fixme: add dialogue
                        cout << "2. He frequently preens himself, licking his paws and fixing his whiskers." << endl; //fixme: add dialogue
                        cout << "3. He seems uneffected by the current situation." << endl; //fixme: add dialogue
                        cout << "Interesting..." << endl; //fixme: add dialogue
                        

                }else{ //innocent dialogue
                        //cout << "Innocent" << endl; //debugging purposes
                        cout << "Clawman looks at Mr. Kneadington from afar, wondering how he acts when no one is looking. " << endl; //fixme: add dialogue
                        cout << "He notes a few things about the baker." << endl; //fixme: add dialogue
                        cout << "1. He has a calm air to him." << endl; //fixme: add dialogue
                        cout << "2. He frequently is dusting off flour from himself and fixing his hat." << endl; //fixme: add dialogue
                        cout << "3. He seems to be unfocused most of the time, clearly his mind is wandering." << endl; //fixme: add dialogue
                        cout << "Interesting..." << endl; //fixme: add dialogue
                }     
        }
};


struct QueueNode{
    cat ca;
    QueueNode* next;

    QueueNode(cat x){
        ca = x;
        next = nullptr;
    }
};

class encounterqueue{
        private:
                QueueNode* front;
                QueueNode* rear;

        public:
                

                encounterqueue(){
                        front = nullptr;
                        rear = nullptr;
                }

                bool isEmpty(){
                        return front == nullptr;
                }

                void enqueue(cat x){ 
                        QueueNode* newNode = new QueueNode(x);
                        if(isEmpty()){
                                front = rear = newNode;
                        }else{
                                rear->next = newNode;
                                rear = newNode;
                        }
                }

                cat dequeue(){ 
                        if(isEmpty()){
                                cout << "Encounterqueue is empty." << endl;
                                cat tempCat; 
                                return tempCat;
                        }

                        QueueNode* temp = front;
                        cat x = front->ca;
                        front = front->next;

                        if(front == nullptr){
                                rear = nullptr;
                        }
                        delete temp;
                        return x;
                }

                cat peek(){
                        if(isEmpty()){
                                cout << "MonsterQueue is empty." << endl;
                                cat tempCat;
                                return tempCat;
                        }
                        return front->ca;
                }

                void printQueue(){
                        if(isEmpty()){
                                cout << "encounterqueue is empty." << endl;
                                return;
                        }
                        QueueNode* current = front;
                        while (current != nullptr){
                                cout << current->ca.getName() << "->";
                                current = current->next;
                        }
                        cout << "NULL" << endl;
                }

                void populateQueue(){

                        cat w, x, y, z;
                        w.setName("Ms. Mittens");
                        x.setName("Dr. Molly");
                        y.setName("Mr. Fuzzypaws");
                        z.setName("Mr. Kneadington");

                        cat catlist[4] = {w, x, y, z};

                        for(int i = 0; i < 4; i++){

                                enqueue(catlist[i]);

                        }
                }

                ~encounterqueue(){
                        while(!isEmpty()){
                                dequeue();
                        }
                }
};


#endif
