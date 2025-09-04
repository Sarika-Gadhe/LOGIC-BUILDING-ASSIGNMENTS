//_______________________________________________________________________________________________________________________________
//
//  File name :     Program2.java
//
//  Description :   Write a program which acccept matrix from user and swap the contents of each consecutive columns.
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
        Arr = new int [A][B];
     }


     public void Accept()
     {
        System.out.println("Enter Number of Elements : ");

        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0;
        
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
     }

     public void Display()
     {
        System.out.println("Number of Elements are : ");

        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0;
        
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
     }

     public int[][] SwapColumns()
     {
        int i = 0 , j = 0;
        
        for(j = 0; j < Arr[0].length-1; j+=2)
        {
            for(i = 0; i < Arr.length; i ++)
            {
                int temp = Arr[i][j];
                Arr[i][j] = Arr[i][j+1];
                Arr[i][j+1] = temp;
            }
        }    

        return Arr;
     }
}

class Program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number of Rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter Number of Columns : ");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow, iCol);

        mobj.Accept();
        mobj.Display();

        System.out.println("Matrix after swapping consecutive Columns : ");

        int matrix[][] = mobj.SwapColumns();

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                System.out.print(matrix[i][j]+"\t");
            }
            System.out.println();
        }

        


    }
}