/*
Problem statement
https://www.codewars.com/kata/525caa5c1bf619d28c000335/train/c
*/



enum game_state {
    NOT_FINISHED = -1, DRAW = 0, X_WON = 1, O_WON = 2
};

enum square { EMPTY = 0, X = 1, O = 2 };


enum game_state check_game_state (const enum square board[3][3])
{
  // i = row and j = column  
  int i=0, j=0;
  // Horizontal handling.
  for(i=0; i<=2; i++) {     
      if( board[i][0] != EMPTY && (board[i][0] == board[i][1] && board[i][1] == board[i][2])  )
            return board[i][0];
  }
  // Vertical handling.
  for(j=0; j<=2; j++) {
      if( board[0][j] != EMPTY && (board[0][j] == board[1][j] && board[1][j] == board[2][j] )  )  
            return board[0][j];        
  }
  // Daigonals handling.
  if( board[0][0] != EMPTY && (board[0][0] == board[1][1] && board[1][1] == board[2][2]) )
    return board[0][0];
  else if(  board[0][2] != EMPTY && (board[0][2] == board[1][1] && board[1][1] == board[2][0]) )
    return board[0][2];
  
  // Check NOT_FINISHED.
  i=0, j=0;
  for(i=0; i<=2; i++){
    for(j=0; j<=2; j++){
      if( board[i][j] == EMPTY)
        return NOT_FINISHED;
    }
  }
  // If nobody won, and its finished game that means DRAW.
  return DRAW; 
}