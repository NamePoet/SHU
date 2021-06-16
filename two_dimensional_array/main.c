/*
tic-tac-toe游戏
• 读⼊入⼀一个3X3的矩阵，矩阵中的数字为1表
⽰示该位置上有⼀一个X，为0表⽰示为O
• 程序判断这个矩阵中是否有获胜的⼀一⽅方，
输出表⽰示获胜⼀一⽅方的字符X或O，或输出⽆无
⼈人获胜

*/

#include <stdio.h>
int main()
{
    const int size = 3;
    int board[size][size];
    int i,j;
    int numOfX;
    int numOfO;
    int result = -1; // -1:没人赢， 1：X赢，0：O赢

// 读入矩阵, 三行三列，按行输入
    for (i=0; i<size; i++) {
        for (j=0; j<size; j++) {
            scanf("%d", &board[i][j]);
        }
    }
//检查行  
    for (i=0; i<size && result ==-1; i++) {
        numOfO = numOfX = 0;
        for (j=0; j<size; j++) {
            if ( board[i][j] == 1 ) {
                numOfX ++;
            } else {
                numOfO ++;
            }
        }
        if ( numOfO == size ) {
            result = 0;
        } else if ( numOfX == size ) {
            result = 1;
        }
    }
//检查列
    for (j=0; j<size && result == -1 ; j++) {
        numOfO = numOfX = 0;
        for (i=0; i<size; i++) {
            if (board[i][j] == 1) {
                numOfX ++;
            } else {
                numOfO ++;
            }
        }
        if ( numOfO == size ) {
            result = 0;
        } else if ( numOfX == size ) {
            result = 1;
        }
    }
//检查主对角线
    numOfO = numOfX = 0;
    for ( i=0; i<size; i++ ) {
        if ( board[i][i] == 1 ) {
            numOfX ++;
        } else {
            numOfO ++;
        }
    }
    if ( numOfO == size ) {
        result = 0;
    } else if ( numOfX == size ) {
        result = 1;
    }

//检查副对角线
    numOfO = numOfX = 0;
    for ( i=0; i<size; i++) {
        if ( board[i][i+size-1] == 1 ) {
            numOfX = 1;
        } else {
            numOfO = 0;
        }
    }
    if ( numOfO == size ) {
        result = 0;
    } else if ( numOfX == size ) {
        result = 1;
    }
//输出结果
    if ( result == -1 ) {
        printf("没人赢！");
    } else if (result == 0) {
        printf("O胜利");
    } else {
        printf("X胜利！");
    }

}