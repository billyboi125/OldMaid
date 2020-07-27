#ifndef TURN_H_INCLUDED
#define TURN_H_INCLUDED

class Turn() {
    public:
        //checks players hand to see if pair or not. if pair it gets rid of them, if not it adds to hand
        checkPlayerCards();

        //checks to see if player has zero cards
        winCheck();

        //checks to see if player has one card with a queen
        loseGameCheck();

        //checks to see if player has 0 cards. if they do they are out and put into an array called playerWinOrder
        countCards();

    private:
      vector<int> playerWinOrder;

};


#endif // TURN_H_INCLUDED
