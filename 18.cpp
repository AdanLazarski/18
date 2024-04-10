#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Player {
public:
    std::string name;
    int score;

    Player(std::string n, int s) : name(n), score(s) {}
};

bool comparePlayers(const Player& p1, const Player& p2) {
    return p1.score > p2.score;
}

int main() {
    int num_players;
    std::cout << "How many players do you want to add  ";
    std::cin >> num_players;

    std::vector<Player> players;
    for (int i = 0; i < num_players; i++) {
        std::string name;
        int score;
        std::cout << "Enter player name ";
        std::cin >> name;
        std::cout << "Enter score: ";
        std::cin >> score;
        Player player(name, score);
        players.push_back(player);
    }

    std::sort(players.begin(), players.end(), comparePlayers);

    std::cout << "Sorted players and score:" << std::endl;
    for (const auto& player : players) {
        std::cout << "Player " << player.name << ": " << player.score << " has score" << std::endl;
    }

    return 0;
}