//_______________________________________________________________________________________________________________________________
//
//  File name :     Program5.java
//
//  Description :   Write a program which accept matrix and swap the contents of consective rows
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
    
    public void SwapRows()
    { 
        int i = 0, j = 0;
        int temp = 0;

       for(i = 0; i < Arr.length; i=i+2)
        {
            for(j = 0; j < Arr[i].length;j++)
            {
               temp = Arr[i][j];
               Arr[i][j] = Arr[i+1][j];
               Arr[i+1][j] = temp;
            }
            
        }
        
    }

}

class Program5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iRow = 0, iCol = 0;

        System.out.println("Enter the number of Rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter the number of Columns : ");
        iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow, iCol);

        mobj.Accept();

        System.out.println("Matrix before Swapping with Consecutive rows : ");
        mobj.Display();

        mobj.SwapRows();
        System.out.println("Matrix before Swapping with Consecutive rows : ");
        mobj.Display();
        




    }
}