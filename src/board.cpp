#include "board.hpp"

#include <iostream>

Board::Board(std::string moves) { 
  ResetBoard(); 
}

void MakeMove(std::string move) {}

void Board::Print() {
  std::cout << "╔═╤═╤═╤═╤═╤═╤═╤═╗\n║";
  for (int y = 7; y >= 0; y--) {
    for (int x = 7; x >= 0; x--) {
      int i = (y * 8) + x;
      std::string outputChar = " "; // " " is default
      
      if (whiteKing.GetPos(i))
        outputChar = "♔";
      if (whiteQueen.GetPos(i))
        outputChar = "♕";
      if (whiteRook.GetPos(i))
        outputChar = "♖";
      if (whiteBishop.GetPos(i))
        outputChar = "♗";
      if (whiteKnight.GetPos(i))
        outputChar = "♘";
      if (whitePawn.GetPos(i))
        outputChar = "♙";

      if (blackKing.GetPos(i))
        outputChar = "♚";
      if (blackQueen.GetPos(i))
        outputChar = "♛";
      if (blackRook.GetPos(i))
        outputChar = "♜";
      if (blackBishop.GetPos(i))
        outputChar = "♝";
      if (blackKnight.GetPos(i))
        outputChar = "♞";
      if (blackPawn.GetPos(i))
        outputChar = "♟";

      std::cout << outputChar;

      if (i != (y * 8)) {
        std::cout << "│";
      }
    }
    if (y != 0) {
      std::cout << "║\n╟─┼─┼─┼─┼─┼─┼─┼─╢\n║";
    }
  }
  std::cout << "║\n╚═╧═╧═╧═╧═╧═╧═╧═╝" << std::endl;
}

void Board::ResetBoard() {

  whiteKing.SetInt(0x8);
  whiteQueen.SetInt(0x10);
  whiteRook.SetInt(0x81);
  whiteBishop.SetInt(0x24);
  whiteKnight.SetInt(0x42);
  whitePawn.SetInt(0xff00);

  blackKing.SetInt(0x800000000000000);
  blackQueen.SetInt(0x1000000000000000);
  blackRook.SetInt(0x8100000000000000);
  blackBishop.SetInt(0x2400000000000000);
  blackKnight.SetInt(0x4200000000000000);
  blackPawn.SetInt(0xff000000000000);

}
