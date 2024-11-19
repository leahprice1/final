#include <iostream>
using namespace std;

class clawman{
    private:
        int inventory;
    public:
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
};

class ms_mittens{
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
};

class mr_mittens{
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

class mr_fuzzypaws{
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
};

class dr_molly{
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
};

class mr_kneadington{
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
};

int main() {

    mr_kneadington thing;

    thing.mrknead_dead();

   return 0;
}


