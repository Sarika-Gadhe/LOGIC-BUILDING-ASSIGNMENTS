//_______________________________________________________________________________________________________________________________
//
//  File name :     Program1.java
//
//  Description :   Write a program which acccept matrix from user and swap the contents of each consecutive rows.
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

     public int[][] SwapRows()
     {
        int i = 0 , j = 0;
        
        for(i = 0; i < Arr.length-1; i+=2)
        {
            int temp[] = Arr[i];
            Arr[i] = Arr[i+1];
            Arr[i+1] = temp;
        }

        return Arr;
     }
}

class Program1
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

        System.out.println("Matrix after swapping consecutive rows : ");

        int matrix[][] = mobj.SwapRows();

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