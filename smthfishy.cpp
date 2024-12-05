#include <iostream>
#include <string>
#include "cats.h"
#include "map.h"
#include "evidence.h"
#include "inventory.h"

using namespace std;

int main() {

//object setup---------------------------------
    clawman DClawman;
    DClawman.setName("Clawman");
    ms_mittens Ms_Mittens;
    Ms_Mittens.setName("Ms. Mittens");
    mr_mittens Mr_Mittens;
    Mr_Mittens.setName("Mr. Mittens");
    mr_fuzzypaws Mr_Fuzzypaws;
    Mr_Fuzzypaws.setName("Mr. Fuzzypaws");
    dr_molly Dr_Molly;
    Dr_Molly.setName("Dr. Molly");
    mr_kneadington Mr_Kneadington;
    Mr_Kneadington.setName("Mr. Kneadington");
    encounterqueue catqueue;        
    catqueue.populateQueue();

    Evidence piece1("Mr. Mittens will", "A new will written by Mr. Mittens. It seems to been written after the passing of Mr. Mittens' mother, giving the estate to Ms. Mittens.", 503);
    Evidence piece2("Ms. Mittens journal", "One of the latest entries seems to be abouta fight her and her husband had. It seems to have gotten pretty bad...", 620);
    Evidence piece3("Loan paperwork", "This paperwork seems to allow Mr. Mittens to take 51% of Mr. Kneadington's bakery.", 129);
    Evidence piece4("Job termination documents", "The documents seem to be written by Mr. Kneadington. He fired his son in law, his sous chef, after 5 years of work because of budget cuts.", 826);
    Evidence piece5("Cell phone", "You find a cell phone lying on the counter, it's unlocked. In the browsing history you find a hiring site for butlers. This must be Mr. Mittens phone if it's just laying around.", 1126);
    Evidence piece6("Recording device", "Detective Clawman plays the most recent clip, it's an argument between Mr. Mittens and Mr. Fuzzypaws. Mr. Mittens is ciriticizing him for not taking his work seriously enough.", 207);
    Evidence piece7("Police report", "Crumpled up in a nearby trashcan, Clawman finds an unsubmitted police report made by Dr. Molly. It's against Mr. Mittens. The pages are too smudged to make out the rest.", 1025);
    EvidenceBST evidencetree;
    evidencetree.insert(piece1);
    evidencetree.insert(piece2);
    evidencetree.insert(piece3);
    evidencetree.insert(piece4);
    evidencetree.insert(piece5);
    evidencetree.insert(piece6);
    evidencetree.insert(piece7);

    int evi[7];
    evi[0] = 503;
    evi[1] = 620;
    evi[2] = 129;
    evi[3] = 826;
    evi[4] = 1126;
    evi[5] = 207;
    evi[6] = 1025;

    Inventory DCinventory;

    /* // for debugging purposes
    evidencetree.printInOrder(); //debugging purposes
    cout << endl;

    evidencetree.removeNodeByYear(207); //debugging purposes

    evidencetree.printInOrder(); //debugging purposes
    cout << endl;
    */

    gamemap map;
    murder murder_case;

    string sus[4];
    sus[0] = "Ms. Mittens";
    sus[1] = "Mr. Fuzzypaws";
    sus[2] = "Mr. Kneadington";
    sus[3] = "Dr. Molly";
    int killer_cat = rand() % 4;
    murder_case.set_murder(sus[killer_cat]);
    //murder_case.print_killer(); // debugging purposes
//--------------------------------------------


    cout << "It's a cold, dark night. It frequently is in Catsenburg Mew York, and" << endl;
    cout << "Detective Clawman always hated those cold, dark nights. But today was" << endl;
    cout << "different. Clawman had a fresh case brewing right beneath his whiskey" << endl;
    cout << "dipped whiskers. He could smell it from a mile away, and thats when" << endl;
    cout << "he got the call. From none other than Ms. Mittens. She was the last" << endl;
    cout << "person he expected to hear from on a night like this, but like he" << endl;
    cout << "suspected, this night was very different from the rest. Mr. Mittens," << endl;
    cout << "her wealthy husband, had been murdered. It was 3 in the morning, but" << endl;
    cout << "Clawman promised he'd head right over." << endl;
    cout << endl;

    int condition = 0; 

//DETECIVE CLAWMAN'S OFFICE --------------------------------------------------------------
    while (condition == 0){

        cout << "What would you like to do?" << endl;
        cout << "1. Head over to the Mittens Mansion." << endl;
        cout << "2. Explore your office." << endl;
        cout << "3. Open your bag." << endl;
        cout << endl;

        int option;
        cin >> option;
        if((option >= 1) && (option <=3)){
            if(option == 1){
                cout << "I need to get to the Mittens' Mansion quickly." << endl;
                condition = 1;
            }
            if(option == 2){
                int officecondition = 0;
                while (officecondition == 0){
                    cout << "Where would you like to look?" << endl;
                    cout << "1. Look at your desk." << endl;
                    cout << "2. Look at the picture on the wall." << endl;
                    cout << "3. Look at the book shelf." << endl;
                    cout << "4. Go back." << endl;
                    int option2;
                    cin >> option2;
                    if(option2 >= 1 && option2 <=4){
                        if(option2 == 1){
                            cout << "Detective Clawman moves close to the desk in his office, he lays a" << endl;
                            cout << "lone paw on the mahogony, a lot of detecting has happened here." << endl;
                            cout << "A tear falls down a whisker, but he'll never let anyone know..." << endl;
                        }
                        if(option2 == 2){
                            cout << "The picture on the wall is of detective Clawman and his late wife." << endl;
                        }
                        if(option2 == 3){
                            cout << "The book shelf houses many books related to crime, evil-doers, and" << endl;
                            cout << "worst of all: ne'er-do-wells. Clawman clenches a paw in anger. He" << endl;
                            cout << "must bring justice to this world." << endl;
                        }
                        if(option2 == 4){
                            officecondition = 1;
                        }
                    }else{
                        cout << "Please choose something between 1 and 4." << endl;
                    }
                }
            }
            if(option == 3){
                cout << "Here's what's in your bag:" << endl;
                DCinventory.printlist();
            }
        }
    }
    condition = 0;
//MANSION DRIVE --------------------------------------------------------------------------
    cout << "The drive to Mittens Mansion is a long one. By the time detective" << endl;
    cout << "Clawman arrives at the front door, it's begun storming." << endl;
    cout << "Clawman knocks on the door. Ms Mittens answers" << endl;
    cout << endl;

    Ms_Mittens.msmittens_sad();
    cout << "'Oh detective Clawman!! Thank the sardines above you came so quickly!" << endl;
    cout << "Everyone is still here in the Mansion from the time of the murder," << endl;
    cout << "please please come in.'" << endl;
    cout << endl;

    cout << "Clawman walks into the Mansion, taking in the smell of catnip and" << endl;
    cout << "money. The Mittens had always been crazy and wealthy, it was no" << endl;
    cout << "surprise to Clawman." << endl;
    cout << endl;

//MANSION INTRO --------------------------------------------------------------------------
    while(condition == 0){
        //menu choice
        cout << "What would you like to do?" << endl;
        cout << "1. Interrogate Ms. Mittens." << endl;
        cout << "2. Explore the mansion." << endl;
        cout << "3. Open your bag." << endl;
        int option;
        cin >> option;
        //choices expanded
        if((option >= 1) && (option <=3)){
            if(option == 1){
                DClawman.addpeopleinvestigated("Ms. Mittens"); 
                DClawman.clawman_base();
                cout << "'Ms. Mittens, what time did the murder take place.' Clawman asks" << endl;
                cout << "while twirling a whisker between two claws." << endl;
                Ms_Mittens.msmittens_sad();
                cout << "'It took place at about 1 a.m., so around 2 hours ago? Yeah 2 hours ago'" << endl;
                cout << "Ms. Mittens still seems disheveled." << endl;
                DClawman.clawman_base();
                cout << "'And where in the mansion did it take place Ms. Mittens?'" << endl;
                Ms_Mittens.msmittens_sad();
                cout << "'It took place in the " << murder_case.getRoom()  << " if I'm correct.'"<< endl;
                DClawman.clawman_base();
                cout << "'Thank you for your time Ms. Mittens. I'll begin looking around'" << endl;

            }
            if(option == 2){
                cout << "What room would you like to go to? (Please input a number)" << endl;
                map.printmap();
                int place;
                cin >> place;
                if((place > 0) && (place < 8)){
                    DClawman.setcurroom(place); 
                    DClawman.addplacesvisited(place);
                    condition = 1;
                }else{
                    cout << "Please choose a number between 1 and 7." << endl;
                }

            }
            if(option == 3){
                cout << "Here's what's in your bag:" << endl;
                DCinventory.printlist();
            }
        }else{
            cout << "Please choose something between 1 and 3." << endl;
        }
    }

//ACT 1 ----------------------------------------------------------------------------------
    condition = 0;
    cout << "------------------------------ ACT 1 ------------------------------" << endl;
    cout << endl;
    int optionact1;
    cat tempcat;
    int inroom;
    
    int evidenceforroom[7];
    
    for(int i = 0; i < 7; i++){
        evidenceforroom[i] = 0;
    }
    for(int i = 0; i < 2; i++){
        inroom = rand() % 7;
        evidenceforroom[inroom] = evi[i];
    }
    /* // debugging purposes
    for(int i = 0; i < 7; i++){
        cout << evidenceforroom[i] << endl;
    }
    cout << endl;
    */
    string catforroom[7];
    for(int i = 0; i < 7; i++){
        catforroom[i] = "none";
    }
    for(int i = 0; i < 4; i++){
        inroom = rand() % 7;
        catforroom[inroom] = "cat";
    }
    /* // debugging purposes
    for(int i = 0; i < 7; i++){
        cout << catforroom[i] << endl;
    }
    cout << endl;
    */
    int iscat = 0;

    
    cout << "Detective Clawman makes his way over to the " << DClawman.getRoom() << "." << endl;
    if(catforroom[DClawman.getRoomVal()] != "none"){
        tempcat = catqueue.dequeue();
        //cout << tempcat.getName() << endl; //for debugging purposes
        cout << "As he enters the room, he notices someone else is also in the room, it's " << tempcat.getName() << "." <<endl;
    }

    while(condition == 0){
        if(catforroom[DClawman.getRoomVal()] != "none"){

            //condition = 1;
            cout << "What would you like to do?" << endl;
            cout << "1. Interrogate " << tempcat.getName() << "." << endl;
            cout << "2. Look around the room." << endl;
            cout << "3. Explore the mansion." << endl;
            cout << "4. Open your bag." << endl;
            cout << "5. Move to the next act." << endl;
            cin >> optionact1;
        }else{

            //condition = 1;
            cout << "What would you like to do?" << endl;
            cout << "1. Look around the room." << endl;
            cout << "2. Explore the mansion." << endl;
            cout << "3. Open your bag." << endl;
            cout << "4. Move to the next act." << endl;
            cin >> optionact1;
            iscat = 1;
        }
        if(iscat == 0){
            if((optionact1 >= 1) && (optionact1 <=5)){
                if(optionact1 == 1){
                    DClawman.addpeopleinvestigated(tempcat.getName()); 
                    if(tempcat.getName() == "Mr. Fuzzypaws"){
                        Mr_Fuzzypaws.ACT1investigation(murder_case);
                    }
                    if(tempcat.getName() == "Mr. Kneadington"){
                        Mr_Kneadington.ACT1investigation(murder_case);
                    }
                    if(tempcat.getName() == "Dr. Molly"){
                        Dr_Molly.ACT1investigation(murder_case);
                    }
                    if(tempcat.getName() == "Ms. Mittens"){
                        Ms_Mittens.ACT1investigation(murder_case);
                    }
                }
                if(optionact1 == 2){                    
                    if(evidenceforroom[DClawman.getRoomVal()] != 0){
                        cout << "Clawman found something!" << endl;
                        evidencetree.printNameByYear(evidenceforroom[DClawman.getRoomVal()]);
                        cout << "It's been added to your inventory." << endl;
                        DCinventory.append(evidencetree.findEvidenceByYear(evidenceforroom[DClawman.getRoomVal()]));
                        evidencetree.removeNodeByYear(evidenceforroom[DClawman.getRoomVal()]);
                        //evidencetree.printInOrder();
                        evidenceforroom[DClawman.getRoomVal()] = 0;
                    }else{
                        cout << "Detective Clawman found nothing of value..." << endl;
                    }
                    
                }
                if(optionact1 == 3){
                    cout << "What room would you like to go to? (Please input a number)" << endl;
                    map.printmap();
                    int place;
                    cin >> place;
                    if((place > 0) && (place < 8)){
                        DClawman.setcurroom(place);
                        DClawman.addplacesvisited(place);
                        if(catforroom[DClawman.getRoomVal()] != "none"){
                            tempcat = catqueue.dequeue();
                            //cout << tempcat.getName() << endl; // for debugging purposes
                            cout << "Detective Clawman notices someone as he enters into the room, it's " << tempcat.getName() << "." << endl;
                            iscat = 0;
                        }else{
                            cout << "There doesn't seem to be anyone here..." << endl;
                            iscat = 1;
                        }
                    }else{
                        cout << "Please choose a number between 1 and 7." << endl;
                    }
                }
                if(optionact1 == 4){
                    cout << "Here's what's in your bag:" << endl;
                    DCinventory.printlist();
                }
                if(optionact1 == 5){
                    cout << "Are you sure? you cannot go back. (y/n)" << endl;
                    char yorn;
                    cin >> yorn;
                    if(yorn == 'y'){
                        cout << "Moving to act 2..." << endl;
                        condition = 1;
                    }if(yorn = 'n'){
                        cout << "Staying in current act..." << endl;
                    }
                }
            }else{
                cout << "Please choose something between 1 and 4." << endl;
            }
        }else{
            if((optionact1 >= 1) && (optionact1 <=4)){
                if(optionact1 == 1){
                    if(evidenceforroom[DClawman.getRoomVal()] != 0){
                        cout << "Clawman found something!" << endl;
                        evidencetree.printNameByYear(evidenceforroom[DClawman.getRoomVal()]);
                        cout << "It's been added to your inventory." << endl;
                        DCinventory.append(evidencetree.findEvidenceByYear(evidenceforroom[DClawman.getRoomVal()]));
                        evidencetree.removeNodeByYear(evidenceforroom[DClawman.getRoomVal()]);
                        //evidencetree.printInOrder();
                        evidenceforroom[DClawman.getRoomVal()] = 0;
                    }else{
                        cout << "Detective Clawman found nothing of value..." << endl;
                    }
                }
                if(optionact1 == 2){
                    cout << "What room would you like to go to? (Please input a number)" << endl;
                    map.printmap();
                    int place;
                    cin >> place;
                    if((place > 0) && (place < 8)){
                        DClawman.setcurroom(place);
                        DClawman.addplacesvisited(place);
                        if(catforroom[DClawman.getRoomVal()] != "none"){
                            tempcat = catqueue.dequeue();
                            //cout << tempcat.getName() << endl; // for debugging purposes
                            cout << "Detective Clawman notices someone as he enters into the room, it's " << tempcat.getName() << "." << endl;
                            iscat = 0;

                        }else{
                            cout << "There doesn't seem to be anyone here..." << endl;
                            iscat = 1;
                        }
                    }else{
                        cout << "Please choose a number between 1 and 7." << endl;
                    }
                }
                if(optionact1 == 3){
                    cout << "Here's what's in your bag:" << endl;
                    DCinventory.printlist();
                }
                if(optionact1 == 4){
                    cout << "Are you sure? you cannot go back. (y/n)" << endl;
                    char yorn;
                    cin >> yorn;
                    if(yorn == 'y'){
                        cout << "Moving to act 2..." << endl;
                        condition = 1;
                    }if(yorn == 'n'){
                        cout << "Staying in current act..." << endl;
                    }
                }
            }else{
                cout << "Please choose something between 1 and 4." << endl;
            }
        }
    }
//ACT 2 ----------------------------------------------------------------------------------

    condition = 0;
    cout << "------------------------------ ACT 2 ------------------------------" << endl;
    cout << endl;
    int optionact2;

    for(int i = 0; i < 7; i++){
        evidenceforroom[i] = 0;
    }
    for(int i = 0; i < 2; i++){
        inroom = rand() % 7;
        evidenceforroom[inroom] = evi[i];
    }
    /* // debugging purposes
    for(int i = 0; i < 7; i++){
        cout << evidenceforroom[i] << endl;
    }
    cout << endl;
    */
    for(int i = 0; i < 7; i++){
        catforroom[i] = "none";
    }
    for(int i = 0; i < 4; i++){
        inroom = rand() % 7;
        catforroom[inroom] = "cat";
    }
    /* // debugging purposes
    for(int i = 0; i < 7; i++){
        cout << catforroom[i] << endl;
    }
    cout << endl;
    */
    
     
    iscat = 0;
    DClawman.setcurroom(1);
    cout << "Clawman needed to go back to the start to collect his thoughts..." << endl;
    if(catforroom[DClawman.getRoomVal()] != "none"){
        tempcat = catqueue.dequeue();
        //cout << tempcat.getName() << endl; // for debugging purposes
        cout << "As he enters the room, he notices someone else is also in the room, it's " << tempcat.getName() << "." <<endl;
    }

    while(condition == 0){
        if(catforroom[DClawman.getRoomVal()] != "none"){

            //condition = 1;
            cout << "What would you like to do?" << endl;
            cout << "1. Interrogate " << tempcat.getName() << "." << endl;
            cout << "2. Look around the room." << endl;
            cout << "3. Explore the mansion." << endl;
            cout << "4. Open your bag." << endl;
            cout << "5. Move to the next act." << endl;
            cin >> optionact2;
        }else{

            //condition = 1;
            cout << "What would you like to do?" << endl;
            cout << "1. Look around the room." << endl;
            cout << "2. Explore the mansion." << endl;
            cout << "3. Open your bag." << endl;
            cout << "4. Move to the next act." << endl;
            cin >> optionact2;
            iscat = 1;
        }
        if(iscat == 0){
            if((optionact2 >= 1) && (optionact2 <=5)){
                if(optionact2 == 1){
                    DClawman.addpeopleinvestigated(tempcat.getName()); 
                    if(tempcat.getName() == "Mr. Fuzzypaws"){
                        Mr_Fuzzypaws.ACT1investigation(murder_case);
                    }
                    if(tempcat.getName() == "Mr. Kneadington"){
                        Mr_Kneadington.ACT1investigation(murder_case);
                    }
                    if(tempcat.getName() == "Dr. Molly"){
                        Dr_Molly.ACT1investigation(murder_case);
                    }
                    if(tempcat.getName() == "Ms. Mittens"){
                        Ms_Mittens.ACT1investigation(murder_case);
                    }
                }
                if(optionact2 == 2){                    
                    if(evidenceforroom[DClawman.getRoomVal()] != 0){
                        cout << "Clawman found something!" << endl;
                        evidencetree.printNameByYear(evidenceforroom[DClawman.getRoomVal()]);
                        cout << "It's been added to your inventory.";
                        DCinventory.append(evidencetree.findEvidenceByYear(evidenceforroom[DClawman.getRoomVal()]));
                        evidencetree.removeNodeByYear(evidenceforroom[DClawman.getRoomVal()]);
                        //evidencetree.printInOrder();
                        evidenceforroom[DClawman.getRoomVal()] = 0;
                    }else{
                        cout << "Detective Clawman found nothing of value..." << endl;
                    }
                    
                }
                if(optionact2 == 3){
                    cout << "What room would you like to go to? (Please input a number)" << endl;
                    map.printmap();
                    int place;
                    cin >> place;
                    if((place > 0) && (place < 8)){
                        DClawman.setcurroom(place);
                        DClawman.addplacesvisited(place);
                        if(catforroom[DClawman.getRoomVal()] != "none"){
                            tempcat = catqueue.dequeue();
                            //cout << tempcat.getName() << endl; //for debugging purposes
                            cout << "Detective Clawman notices someone as he enters into the room, it's " << tempcat.getName() << "." << endl;
                            iscat = 0;
                        }else{
                            cout << "There doesn't seem to be anyone here..." << endl;
                            iscat = 1;
                        }
                    }else{
                        cout << "Please choose a number between 1 and 7." << endl;
                    }
                }
                if(optionact2 == 4){
                    cout << "Here's what's in your bag:" << endl;
                    DCinventory.printlist();
                }
                if(optionact2 == 5){
                    cout << "Are you sure? you cannot go back. (y/n)" << endl;
                    char yorn;
                    cin >> yorn;
                    if(yorn == 'y'){
                        cout << "Moving to act 2..." << endl;
                        condition = 1;
                    }if(yorn = 'n'){
                        cout << "Staying in current act..." << endl;
                    }
                }
            }else{
                cout << "Please choose something between 1 and 4." << endl;
            }
        }else{
            if((optionact2 >= 1) && (optionact2 <=4)){
                if(optionact2 == 1){
                
                    if(evidenceforroom[DClawman.getRoomVal()] != 0){
                        cout << "Clawman found something!" << endl;
                        evidencetree.printNameByYear(evidenceforroom[DClawman.getRoomVal()]);
                        cout << "It's been added to your inventory.";
                        DCinventory.append(evidencetree.findEvidenceByYear(evidenceforroom[DClawman.getRoomVal()]));
                        evidencetree.removeNodeByYear(evidenceforroom[DClawman.getRoomVal()]);
                        //evidencetree.printInOrder();
                        evidenceforroom[DClawman.getRoomVal()] = 0;
                    }else{
                        cout << "Detective Clawman found nothing of value..." << endl;
                    }
                }
                if(optionact2 == 2){
                    cout << "What room would you like to go to? (Please input a number)" << endl;
                    map.printmap();
                    int place;
                    cin >> place;
                    if((place > 0) && (place < 8)){
                        DClawman.setcurroom(place);
                        DClawman.addplacesvisited(place);
                        if(catforroom[DClawman.getRoomVal()] != "none"){
                            tempcat = catqueue.dequeue();
                            //cout << tempcat.getName() << endl; // for debugging purposes
                            cout << "Detective Clawman notices someone as he enters into the room, it's " << tempcat.getName() << "." << endl;
                            iscat = 0;
                        }else{
                            cout << "There doesn't seem to be anyone here..." << endl;
                            iscat = 1;
                        }
                    }else{
                        cout << "Please choose a number between 1 and 7." << endl;
                    }
                }
                if(optionact2 == 3){
                    cout << "Here's what's in your bag:" << endl;
                    DCinventory.printlist();
                }
                if(optionact2 == 4){
                    cout << "Are you sure? you cannot go back. (y/n)" << endl;
                    char yorn;
                    cin >> yorn;
                    if(yorn == 'y'){
                        cout << "Moving to act 2..." << endl;
                        condition = 1;
                    }if(yorn == 'n'){
                        cout << "Staying in current act..." << endl;
                    }
                }
            }else{
                cout << "Please choose something between 1 and 4." << endl;
            }
        }
    }
// ACT 3 ----------------------------------------------------------------------------------

    condition = 0;
    cout << "------------------------------ ACT 2 ------------------------------" << endl;
    cout << endl;
    int optionact3;

    for(int i = 0; i < 7; i++){
        evidenceforroom[i] = 0;
    }
    for(int i = 0; i < 2; i++){
        inroom = rand() % 7;
        evidenceforroom[inroom] = evi[i];
    }
    /* // debugging purposes
    for(int i = 0; i < 7; i++){
        cout << evidenceforroom[i] << endl;
    }
    cout << endl;
    */
    for(int i = 0; i < 7; i++){
        catforroom[i] = "none";
    }
    for(int i = 0; i < 4; i++){
        inroom = rand() % 7;
        catforroom[inroom] = "cat";
    }
    /* // debugging purposes
    for(int i = 0; i < 7; i++){
        cout << catforroom[i] << endl;
    }
    cout << endl;
    */
     
    iscat = 0;
    DClawman.setcurroom(1);
    cout << "Clawman needed to go back to the start to collect his thoughts..." << endl;
    if(catforroom[DClawman.getRoomVal()] != "none"){
        tempcat = catqueue.dequeue();
        //cout << tempcat.getName() << endl; // for debugging purposes
        cout << "As he enters the room, he notices someone else is also in the room, it's " << tempcat.getName() << "." <<endl;
    }

    while(condition == 0){
        if(catforroom[DClawman.getRoomVal()] != "none"){

            //condition = 1;
            cout << "What would you like to do?" << endl;
            cout << "1. Interrogate " << tempcat.getName() << "." << endl;
            cout << "2. Look around the room." << endl;
            cout << "3. Explore the mansion." << endl;
            cout << "4. Open your bag." << endl;
            cout << "5. Guess the killer." << endl;
            cin >> optionact3;
        }else{

            //condition = 1;
            cout << "What would you like to do?" << endl;
            cout << "1. Look around the room." << endl;
            cout << "2. Explore the mansion." << endl;
            cout << "3. Open your bag." << endl;
            cout << "4. Guess the killer." << endl;
            cin >> optionact3;
            iscat = 1;
        }
        if(iscat == 0){
            if((optionact3 >= 1) && (optionact3 <=5)){
                if(optionact3 == 1){
                    DClawman.addpeopleinvestigated(tempcat.getName()); 
                    if(tempcat.getName() == "Mr. Fuzzypaws"){
                        Mr_Fuzzypaws.ACT1investigation(murder_case);
                    }
                    if(tempcat.getName() == "Mr. Kneadington"){
                        Mr_Kneadington.ACT1investigation(murder_case);
                    }
                    if(tempcat.getName() == "Dr. Molly"){
                        Dr_Molly.ACT1investigation(murder_case);
                    }
                    if(tempcat.getName() == "Ms. Mittens"){
                        Ms_Mittens.ACT1investigation(murder_case);
                    }
                }
                if(optionact3 == 2){
                    if(evidenceforroom[DClawman.getRoomVal()] != 0){
                        cout << "Clawman found something!" << endl;
                        evidencetree.printNameByYear(evidenceforroom[DClawman.getRoomVal()]);
                        cout << "It's been added to your inventory.";
                        DCinventory.append(evidencetree.findEvidenceByYear(evidenceforroom[DClawman.getRoomVal()]));
                        evidencetree.removeNodeByYear(evidenceforroom[DClawman.getRoomVal()]);
                        //evidencetree.printInOrder();
                        evidenceforroom[DClawman.getRoomVal()] = 0;
                    }else{
                        cout << "Detective Clawman found nothing of value..." << endl;
                    }
                    
                }
                if(optionact3 == 3){
                    cout << "What room would you like to go to? (Please input a number)" << endl;
                    map.printmap();
                    int place;
                    cin >> place;
                    if((place > 0) && (place < 8)){
                        DClawman.setcurroom(place);
                        DClawman.addplacesvisited(place);
                        if(catforroom[DClawman.getRoomVal()] != "none"){
                            tempcat = catqueue.dequeue();
                            //cout << tempcat.getName() << endl; // for debugging purposes
                            cout << "Detective Clawman notices someone as he enters into the room, it's " << tempcat.getName() << "." << endl;
                            iscat = 0;
                        }else{
                            cout << "There doesn't seem to be anyone here..." << endl;
                            iscat = 1;
                        }
                    }else{
                        cout << "Please choose a number between 1 and 7." << endl;
                    }
                }
                if(optionact3 == 4){
                    cout << "Here's what's in your bag:" << endl;
                    DCinventory.printlist();
                }
                if(optionact3 == 5){
                    cout << "Are you sure? you cannot go back. (y/n)" << endl;
                    char yorn;
                    cin >> yorn;
                    if(yorn == 'y'){
                        cout << "Moving to act 3..." << endl;
                        condition = 1;
                    }if(yorn = 'n'){
                        cout << "Staying in current act..." << endl;
                    }
                }
            }else{
                cout << "Please choose something between 1 and 4." << endl;
            }
        }else{
            if((optionact3 >= 1) && (optionact3 <=4)){
                if(optionact3 == 1){
                
                    if(evidenceforroom[DClawman.getRoomVal()] != 0){
                        cout << "Clawman found something!" << endl;
                        evidencetree.printNameByYear(evidenceforroom[DClawman.getRoomVal()]);
                        cout << "It's been added to your inventory.";
                        DCinventory.append(evidencetree.findEvidenceByYear(evidenceforroom[DClawman.getRoomVal()]));
                        evidencetree.removeNodeByYear(evidenceforroom[DClawman.getRoomVal()]);
                        //evidencetree.printInOrder();
                        evidenceforroom[DClawman.getRoomVal()] = 0;
                    }else{
                        cout << "Detective Clawman found nothing of value..." << endl;
                    }
                }
                if(optionact3 == 2){
                    cout << "What room would you like to go to? (Please input a number)" << endl;
                    map.printmap();
                    int place;
                    cin >> place;
                    if((place > 0) && (place < 8)){
                        DClawman.setcurroom(place);
                        DClawman.addplacesvisited(place);
                        if(catforroom[DClawman.getRoomVal()] != "none"){
                            tempcat = catqueue.dequeue();
                            //cout << tempcat.getName() << endl; // for debugging purposes
                            cout << "Detective Clawman notices someone as he enters into the room, it's " << tempcat.getName() << "." << endl;
                            iscat = 0;
                        }else{
                            cout << "There doesn't seem to be anyone here..." << endl;
                            iscat = 1;
                        }
                    }else{
                        cout << "Please choose a number between 1 and 7." << endl;
                    }
                }
                if(optionact3 == 3){
                    cout << "Here's what's in your bag:" << endl;
                    DCinventory.printlist();
                }
                if(optionact3 == 4){
                    cout << "Are you sure? you cannot go back. (y/n)" << endl;
                    char yorn;
                    cin >> yorn;
                    if(yorn == 'y'){
                        cout << "It's time to guess ..." << endl;
                        condition = 1;
                    }if(yorn == 'n'){
                        cout << "Staying in current act..." << endl;
                    }
                }
            }else{
                cout << "Please choose something between 1 and 4." << endl;
            }
        }
    }

    cout << "After collecting evidence all night, Clawman knows it's time to finally solve the murder of" << endl;
    cout << "Mr. Mittens." << endl;
    cout << "Who do you think the killer is? (Please input a number)" << endl;
    cout << "1. Ms. Mittens" << endl;
    cout << "2. Mr. Kneadington" << endl;
    cout << "3. Mr. Fuzzypaws" << endl;
    cout << "4. Dr. Molly" << endl;
    int killerguess;
    string tempguess;
    cin >> killerguess;
    if(killerguess == 1){
        tempguess = "Ms. Mittens";
    }
    if(killerguess == 2){
        tempguess = "Mr. Kneadington";
    }
    if(killerguess == 3){
        tempguess = "Mr. Fuzzypaws";
    }
    if(killerguess == 4){
        tempguess = "Dr. Molly";
    }

    if(killerguess >= 1 && killerguess <= 4){
        if(tempguess == murder_case.getKiller()){
            cout << "Detective Clawman calls the police and they arrive within minutes. " << tempguess << " gets" << endl;
            cout << "put in handcuffs and taken off to jail. Justice has been served yet again, no one else dies to" << endl;
            cout << "at the lethal paws of " << tempguess << " again." << endl;
        }else{
            cout << "Detective Clawman calls the police and they arrive within minutes. " << tempguess << " gets" << endl;
            cout << "put in handcuffs and taken off to jail. However, within a week yet another murder happens" << endl;
            cout << "nearby. Detective Clawman can't help but wonder if he had been wrong..." << endl;
        }
    }else{
        cout << "Please input a number between 1-4." << endl;
    }

    return 0;
}