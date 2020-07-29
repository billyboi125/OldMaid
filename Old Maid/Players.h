#ifndef PLAYERS_H_INCLUDED
#define PLAYERS_H_INCLUDED

class Player() {
    public:
        Player();

        //finds out the amount of players
        amountOfPlayers(int numOfPlayers);

        //adds player to the game
        addPlayer(string playerName);

        //removes player from the game
        removePlayer();

        //after turn we randomize hand
        randomizePlayersHand();

        //picks the card from a player hand
        pickCard();


    private:
        string<vector> allPlayerNames;


};


#endif // PLAYERS_H_INCLUDED
