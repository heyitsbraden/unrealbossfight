#include <iostream>
#include <string>
#include <chrono>
#include <thread>
int bh = 30; 
int ph = 30; 
int attack = 6; 
int heal = 5;
int main() {
std::cout << "\nPlayers Health: " << ph;
std::cout << "\nOpponents Health: " << bh;
std::this_thread::sleep_for(std::chrono::milliseconds(800));
std::cout << "\n\n[\e[1mA\e[0mttack] or [\e[1mH\e[0meal]\n";
std::string user_action;
if (ph < 0.01) {
std::cout << "\n\nYour opponent beat you... :(";
  return 0; 
  }
std::cin >> user_action;
if (user_action == "a") {
  bh = bh - attack; 
  }
if (user_action == "h") {
  ph = ph + heal; 
  }
int bossAction = (rand() % 2) + 1;
if (bossAction == 1) {
  std::cout << "\nYour opponent has attacked.";
  ph = ph - attack;
  if (bh < 0.01) {
  std::cout << "\n\nHey! You've beaten me!";
    return 0; 
    } 
  }
if (bossAction == 2) {
  std::cout << "\nYour opponent is healing.";
  bh = bh + heal;
  if (bh < 0.01) {
  std::cout << "\n\nHey! You've beaten me!";
    return 0; 
    } 
  }
  if (bh > 0) {
  main(); 
    } 
  }