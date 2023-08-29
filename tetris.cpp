include <iostream>
using namespace std;

wstring tetromino[7];

int main() {
    // Creating assets for the four piece vertical

    tetromino[0].append(L"..X."); // the full stop represents the empty space 
    tetromino[0].append(L"..X."); // X represents part of the shape
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");

    tetromino[1].append(L"..X.");
    tetromino[1].append(L".XX.");
    tetromino[1].append(L"..X.");
    tetromino[1].append(L"....");

    tetromino[2].append(L"....");
    tetromino[2].append(L".XX.");
    tetromino[2].append(L".XX.");
    tetromino[2].append(L"....");

    tetromino[3].append(L"..X.");
    tetromino[3].append(L".XX.");
    tetromino[3].append(L".X..");
    tetromino[3].append(L"....");

    tetromino[4].append(L".X..");
    tetromino[4].append(L".XX.");
    tetromino[4].append(L"..X.");
    tetromino[4].append(L"....");

    tetromino[5].append(L".X..");
    tetromino[5].append(L".X..");
    tetromino[5].append(L".XX.");
    tetromino[5].append(L"....");

    tetromino[6].append(L"..X.");
    tetromino[6].append(L"..X.");
    tetromino[6].append(L".XX.");
    tetromino[6].append(L"....");

    return 0;
}