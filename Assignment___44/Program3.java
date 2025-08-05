//_______________________________________________________________________________________________________________________________
//
//  File name :     Program3.java
//
//  Description :   Write a program which accept matrix and return largest number from both the diagonal.
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________



import java.util.*;

class Matrix
{
    private int Arr[][];

    public Matrix(int A, int B)
    {
        Arr = new int[A][B];
    }

    public void Accept()
    {
        System.out.println("Please Enter the elements of matrix : ");

        Scanner sobj = new Scanner(System.in);
        
        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length;j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Elements of the matrix are : ");

        Scanner sobj = new Scanner(System.in);
        
        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length;j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
    
    public int MaxDiagonal()
    { 
        int i = 0, j = 0;
        int iMax = Arr[0][0];

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length;j++)
            {
               if(i == j || i + j == Arr.length + 1)
               {
                    if(iMax < Arr[i][j])
                    {
                        iMax = Arr[i][j];
                    }
               }
            }
            
        }
        return iMax;
    }

}

class Program3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iRow = 0, iCol = 0,iRet = 0;

        System.out.println("Enter the number of Rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter the number of Columns : ");
        iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow, iCol);

        mobj.Accept();
        mobj.Display();

        iRet = mobj.MaxDiagonal();
        System.out.println("Maximum number is : "+iRet);





    }
}