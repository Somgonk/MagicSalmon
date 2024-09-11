#include "piece.hpp"

#include <iostream>

Piece::Piece() {
}

void Piece::SetInt(uint64_t number) {
  data = number;
}

void Piece::SetPos(int position, bool value) {
  if (value) {
    data |= ((uint64_t) 1 << position);
  } else {
    data &= ~((uint64_t) 1 << position);
  }
}

bool Piece::GetPos(int position) {
  bool bit = data & ((uint64_t) 1 << position);
  return bit;
}

void Piece::Clear() {
  data = 0;
}

void Piece::Print() {
  for (int y = 7; y >= 0; y--) {
    for (int x = 7; x >= 0; x--) {
      int i = (y * 8) + x;
      std::cout << GetPos(i);
      //std::cout << "(" << x << "," << y << ") "<< GetPos(i) << "  ";

    }
    std::cout << std::endl;
  }
}
