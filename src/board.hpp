#ifndef BOARD_HPP_HEADER_GUARD
#define BOARD_HPP_HEADER_GUARD

#include <string>

#include "piece.hpp"

class Board {
public:
  Board(std::string moves = "");

  // Makes move based on algebraic notation
  void MakeMove(std::string move);

  // Prints out board to console
  void Print();

private:

  // Resets board to starting position
  void ResetBoard(); 

  // Bitboards
  Piece whiteKing;
  Piece whiteQueen;
  Piece whiteRook;
  Piece whiteBishop;
  Piece whiteKnight;
  Piece whitePawn;

  Piece blackKing;
  Piece blackQueen;
  Piece blackRook;
  Piece blackBishop;
  Piece blackKnight;
  Piece blackPawn;
 
};

#endif
