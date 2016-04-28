#ifndef PLAYER_H
#define PLAYER_H
#include "util/card.h"
#include "util/require.h"
#include "util/gamelist.h"
#include <vector>
#include <algorithm>


struct Player {

    std::string name;
    int fd;

    Card getCardChoice();
    void sendCards(const std::vector<Card>& cardsOnTable);

    void sendScores(const std::vector<int>& allScores);

    std::string GetName();
    std::vector<Card> GetHand();

    int getGameChoice();

    void sendGameChoice(int type);

    bool getNVChoice();

    void sendHand(const std::vector<Card>& cards);

    Player() = delete;
    explicit Player(int fd);

};

#endif
