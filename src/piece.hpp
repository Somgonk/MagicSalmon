#ifndef PIECE_HPP_HEADER_GUARD
#define PIECE_HPP_HEADER_GUARD

#include <stdint.h>

class Piece {
  public:
    Piece();
    void SetInt(uint64_t number);

    // Gets and sets bits in the data
    void SetPos(int position, bool value);
    bool GetPos(int position);

    void Clear();

    void Print();
  private:
    uint64_t data = 0;

};


#endif
