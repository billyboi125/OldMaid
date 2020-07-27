#ifndef PLAYERS_H_INCLUDED
#define PLAYERS_H_INCLUDED

class Player() {
    public:
        Player();

        //adds player to the game
        addPlayer();

        //removes player from the game
        removePlayer();

        //after turn we randomize hand
        randomizePlayersHand();

        //picks the card from a player hand
        pickCard();

};


#endif // PLAYERS_H_INCLUDED
