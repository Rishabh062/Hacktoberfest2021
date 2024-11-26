void printBoard(Game& game)
{
   cout << "   A     B     C     D     E     F     G     H\n\n";

   for (int iLine = 7; iLine >= 0; iLine--)
   {
      if ( iLine%2 == 0)
      {
         // Line starting with BLACK
         printLine(iLine, BLACK_SQUARE, WHITE_SQUARE, game);
      }

      else
      {
         // Line starting with WHITE
         printLine(iLine, WHITE_SQUARE, BLACK_SQUARE, game);
      }
   }
} 

void printLine(int iLine, int iColor1, int iColor2, Game& game)
{
   // Define the CELL variable here. 
   // It represents how many horizontal characters will form one squarite
   // The number of vertical characters will be CELL/2
   // You can change it to alter the size of the board 
   // (an odd number will make the squares look rectangular)
   int CELL = 6;

   // Since the width of the characters BLACK and WHITE is half of the height, 
   // we need to use two characters in a row.
   // So if we have CELL characters, we must have CELL/2 sublines
   for (int subLine = 0; subLine < CELL/2; subLine++)
   {
      // A sub-line is consisted of 8 cells, but we can group it
      // in 4 iPairs of black&white
      for (int iPair = 0; iPair < 4; iPair++)
      {
         // First cell of the pair
         for (int subColumn = 0; subColumn < CELL; subColumn++)
         {
            // The piece should be in the "middle" of the cell
            // For 3 sub-lines, in sub-line 1
            // For 6 sub-columns, sub-column 3
            if ( subLine == 1 && subColumn == 3)
            {
               cout << char(game.getPieceAtPosition(iLine, iPair*2) != 0x20 ? 
                             game.getPieceAtPosition(iLine, iPair*2) : iColor1);
            }
            else
            {
               cout << char(iColor1);
            }
         }

         // Second cell of the pair
         for (int subColumn = 0; subColumn < CELL; subColumn++)
         {
            // The piece should be in the "middle" of the cell
            // For 3 sub-lines, in sub-line 1
            // For 6 sub-columns, sub-column 3
            if ( subLine == 1 && subColumn == 3)
            {
               cout << char(game.getPieceAtPosition(iLine,iPair*2+1) != 0x20 ? 
                              game.getPieceAtPosition(iLine,iPair*2+1) : iColor2);
            }
            else
            {
               cout << char(iColor2);
            }
         }
      }
   }
}
