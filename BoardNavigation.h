//
// Created by Bryan Wilson on 11/9/2022.
//

#ifndef FINALPROJECT_BOARDNAVIGATION_H
#define FINALPROJECT_BOARDNAVIGATION_H

using namespace std;
#include <iostream>
#include <string>
/*
 * BOARD KEY
 * G = Green Home
 * L = Blue Home
 * R = Red Home
 * Y = Yellow Home
 * B = Blank (This won't show when board is rendered)
 * <, >, V, ^ = Slide spot on the board
 * | = the slide path
 * */
class BoardNavigation {
private:
    char MainBoard[16][16] = {{'#', '>', '-', '-', '0', '#', '#', '#', '#', '>', '-', '-', '-', '0', '#', '#'},
                      {'#', 'B', '#', 'B', 'S', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'V'},
                      {'0', 'B', '#', 'B', 'B', 'B', 'B', 'B', 'B', 'L', '#', '#', '#', '#', '#', '|'},
                      {'|', 'B', '#', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', '|'},
                      {'|', 'B', '#', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'S', '0'},
                      {'|', 'B', '#', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', '|'},
                      {'^', 'B', 'R', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', '#'},
                      {'#', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', '#'},
                      {'#', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', '#'},
                      {'#', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'G', 'B', 'V'},
                      {'#', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', '#', 'B', '|'},
                      {'0', 'S', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', '#', 'B', '|'},
                      {'|', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', '#', 'B', '|'},
                      {'|', '#', '#', '#', '#', '#', 'Y', 'B', 'B', 'B', 'B', 'B', 'B', '#', 'B', '0'},
                      {'^', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'S', 'B', '#', 'B', '#'},
                      {'#', '#', '0', '-', '-', '-', '<', '#', '#', '#', '#', '0', '-', '-', '-', '#'},

    };

    struct {

    } Red_1, Red_2, Red_3, Red_4, Blue_1, Blue_2, Blue_3, Blue_4, Green_1, Green_2, Green_3, Green_4, Red_1, Red_2, Red_3, Red_4,;
public:
    BoardNavigation() {

    }

    void ShowBoard () {
        for (int i = 0; i < 16; i++) {
            for (int j = 0; j < 16; j++) {
                if (MainBoard[i][j] == 'B') {
                    cout << ' ' << ' ';
                }
                else {
                    cout << MainBoard[i][j] << ' ';
                }
            }
            cout << endl;

        }
    }

};


#endif //FINALPROJECT_BOARDNAVIGATION_H
