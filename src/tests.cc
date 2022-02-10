#ifndef CATCH_CONFIG_MAIN
#  define CATCH_CONFIG_MAIN
#endif

#include "catch.hpp"
#include <stdexcept>
#include "main.cpp"

TEST_CASE("Create bird", "CreatBird") {
 Birds *Bird = (Birds*)malloc(sizeof(Birds));
 CreatBird();
 REQUIRE(Bird->x==41);
 REQUIRE(Bird->y==10);
 REQUIRE(Bird->condition ==0);
}

TEST_CASE("Create bg", "CreatBg") {
 Bg* background = new Bg[sizeof(Bg)];
 REQUIRE(background->x == 90);
REQUIRE(background->y == 8);
}

TEST_CASE("Insert bg", "InsertBg") {
 Bg* background = new Bg[sizeof(Bg)];
 InsertBg(background);
 REQUIRE(unique_num == 9);
}

TEST_CASE("Check BG", "Check_Bg") {
 Bg* background = new Bg[sizeof(Bg)];
 InsertBg(background);
 REQUIRE(unique_num == 10);
}

TEST_CASE("Loop BG", "Loop_Bg") {
 Bg* background = new Bg[sizeof(Bg)];
 InsertBg(background);
 REQUIRE(unique_num == 11);
}
