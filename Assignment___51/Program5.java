//_______________________________________________________________________________________________________________________________
//
//  File name :     Program5.java
//
//  Description :   Write a program which acccept matrix from user and return addition of border elements of matrix.
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

     public int AdditionBorder()
     {
        int i = 0, j = 0;
        int iSum = 0;

        int iRow = Arr.length-1;
        int iCol = Arr[0].length-1;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[0].length; j++)
            {
                if(i == 0 || i == iRow || j == 0 || j == iCol)
                {
                    iSum = iSum + Arr[i][j];
                }
            }
        }

        return iSum;

     }
}

class Program5
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

        
        System.out.println("Summation of Border Elements is : "+mobj.AdditionBorder());
        
        


    }
}