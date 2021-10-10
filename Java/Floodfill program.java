//WAP in JAVA to take an array and apply floodfill to it
public class floodFill
{
    //Taking row column and count values
    static int rows=8;
    static int cols=7;
    static int count=0;
    public static void main(String[] args)
    {
        int a[][]={{1,1,1,1,1,1,1,1},//Array values
                   {1,1,1,1,1,1,0,0},
                   {1,2,2,2,2,0,1,0},
                   {1,1,2,2,2,0,1,0},
                   {1,1,1,2,2,2,2,0},
                   {1,1,1,1,1,2,1,1},
                   {1,1,1,1,1,2,2,1},
                };
    floodFill(a,4,3,3,2);//Initialising arrayname,arrayposition,final fill,previous fill
    System.out.println(count);
    System.out.println("Updated screen ");
    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= cols; j++)
        System.out.print(a[i][j] + " ");
        System.out.println();
    }
    }
   static void floodFill(int a[][],int r,int c,int toFill,int prevFill)
   {
       count++;//for counting number of steps
       int rows=a.length;
       int cols=a[0].length;
       if(r<0 || r>=rows || c<0 || c>=cols)
       {
           return;
        }
        if(a[r][c] != prevFill)
        {
            return;
        }
        a[r][c]=toFill;
        floodFill(a,r-1,c,toFill,prevFill);//top corner fill
        floodFill(a,r,c-1,toFill,prevFill);//left corner fill
        floodFill(a,r+1,c,toFill,prevFill);//bottom corner fill
        floodFill(a,r,c+1,toFill,prevFill);//right corner fill
    }
}
