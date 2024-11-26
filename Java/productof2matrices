public class ProdMatrix    
{    
    public static void main(String[] args) {    
        int row1, col1, row2, col2;    
        //Initialize matrix a    
        int a[][] = {    
                          {1, 3, 2},    
                          {3, 1, 1},    
                          {1, 2, 2}    
                       };    
              
          //Initialize matrix b    
          int b[][] = {    
                          {2, 1, 1},    
                         {1, 0, 1},    
                         {1, 3, 1}    
                     };    
              
          //Calculates number of rows and columns present in first matrix    
          row1 = a.length;    
        col1 = a[0].length;    
            
        //Calculates the number of rows and columns present in the second matrix    
    
          row2 = b.length;    
        col2 = b[0].length;    
            
        //For two matrices to be multiplied,     
        //number of columns in first matrix must be equal to number of rows in second matrix    
        if(col1 != row2){    
            System.out.println("Matrices cannot be multiplied");    
        }    
        else{    
            //Array prod will hold the result    
            int prod[][] = new int[row1][col2];    
                
            //Performs product of matrices a and b. Store the result in matrix prod    
            for(int i = 0; i < row1; i++){    
                for(int j = 0; j < col2; j++){    
                    for(int k = 0; k < row2; k++){    
                       prod[i][j] = prod[i][j] + a[i][k] * b[k][j];     
                    }    
                }    
            }    
                
            System.out.println("Product of two matrices: ");    
            for(int i = 0; i < row1; i++){    
                for(int j = 0; j < col2; j++){    
                   System.out.print(prod[i][j] + " ");    
                }    
                System.out.println();    
            }    
        }    
    }    
}    
