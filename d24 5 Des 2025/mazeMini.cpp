#include <iostream>
using namespace std;

char maze[5][7] = {
    {'#','#','#','#','#','#','#'},
    {'#','P','.','.','.','X','#'},
    {'#','#','#','.','#','.','#'},
    {'#','.','.','.','#','.','#'},
    {'#','#','#','#','#','#','#'}
};

int playerX = 1, playerY = 1;

void printMaze(){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 7; j++){
            cout << maze[i][j] << " ";
        }
        cout << endl;
    }

    cout << "w : atas" << endl;
    cout << "s : bawah" << endl;
    cout << "a : kiri" << endl;
    cout << "d : kanan" << endl;
}

void move(char input){
    int newX = playerX;
    int newY = playerY;

    if(input == 'w') newX--;
    else if(input == 's') newX++;
    else if(input == 'a') newY--;
    else if(input == 'd') newY++;

    if(maze[newX][newY] == '.' || maze[newX][newY] == 'X'){
        maze[playerX][playerY] == '.';
        playerX = newX;
        playerY = newY;
        maze[playerX][playerY] = 'P';
    }
}

int main(){
    char input;

    cout << "MINI MAZE GAME!!" << endl;
    cout << "gunakan w/a/s/d untuk bergerak" << endl;

    while(true){
        printMaze();
        cout << "Move: "; cin >> input;

        move(input);

        if(playerX == 1 && playerY == 5){
            cout << "Congratulation! Maze End!" << endl;
            break;
        }
    }
}